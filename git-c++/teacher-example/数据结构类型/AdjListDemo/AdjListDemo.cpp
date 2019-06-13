/*****************************************************
 * 开发者：Berkeley
 * 功能：图的邻接表存储表示以及深度和广度遍历演示
 * 版本：1.0
 *****************************************************/

#include <iostream>
#include <string>
#include <queue>

using namespace std;

#define MAX_VERTEX_NUM	10
#define INFINITY		0XFFFFFFFF
#define SUCCESS			1
#define UNSUCCESS		0

typedef int Status;	//类型定义
bool visited[MAX_VERTEX_NUM]; //全局数组，记录结点是否已被访问

typedef int ArcWeight;		//该弧的权值类型
typedef struct ArcNode  
{
	int adjvex;				//该弧所指向的顶点的位置
	ArcWeight weight;		//权值
	struct ArcNode* nextarcs;	//指向下一条弧的指针

}ArcNode;

typedef string VertexType;	//顶点类型
typedef struct VNode
{
	VertexType data;		//顶点信息
	ArcNode* firstarc;		//指向依附该顶点的第一条弧的指针
}VNode, AdjList[MAX_VERTEX_NUM];//邻接表

typedef struct  
{
	AdjList vertices;	//邻接表
	int vexnum;			//顶点个数
	int arcnum;			//边数
	//图的种类暂时不用
}ALGraph;


//由顶点值得到顶点索引
int LocateVex( const ALGraph& G, VertexType val )
{
	for ( int i = 0; i < G.vexnum; ++i )
	{
		if ( val == G.vertices[i].data )
			return i;
	}
	return -1; // 出错返回-1
}

//创建有向图
Status CreateAdjListGraph( ALGraph& G )
{
	int i;
	cout << "输入顶点个数以及边数：";
	cin >> G.vexnum >> G.arcnum;
	cout << endl;
	cout << "请输入 " << G.vexnum << " 个顶点:(示例：v0 v1 v2 v3 回车)";
	for ( i = 0; i < G.vexnum; ++i )
	{
		cin >> G.vertices[i].data; // 读入顶点信息(v0)
		G.vertices[i].firstarc = NULL; // 初始化第一条弧为NULL
	}

	cout << "请输入由两点构成的边( " << G.arcnum << " 条):（示例v0 v1 回车 v0 v2 回车）\n";
	for ( i = 0; i < G.arcnum; ++i )
	{
		VertexType first; //该弧的第一个顶点（有向图为弧尾）
		VertexType second;//该弧的第二个顶点（有向图为弧头）
		cin >> first >> second;
		int m = LocateVex( G, first );//返回该顶点对应的索引
		int n = LocateVex( G, second ); //返回该顶点对应的索引
		if ( m == -1 || n == -1 )//索引值非法，该顶点不存在，函数返回
			return UNSUCCESS;

		ArcNode* pEdgeNode = new ArcNode;
		pEdgeNode->adjvex = n;
		pEdgeNode->weight = 0;  //权值暂时不用

		//表头插入法
		pEdgeNode->nextarcs = G.vertices[m].firstarc;//将该顶点所指的单链表直接赋给当前弧顶点
		G.vertices[m].firstarc = pEdgeNode;//将当前弧的节点结构赋给firstarc
	}
	return SUCCESS;
}


//销毁图
void DestroyGraph( ALGraph& G )
{
	for ( int i = 0; i < G.vexnum; ++i )
	{
		ArcNode* pEdge = G.vertices[i].firstarc;
		while( pEdge )
		{
			ArcNode* q = pEdge;
			pEdge = pEdge->nextarcs;
			delete q;
		}
		G.vertices[i].firstarc = NULL;
	}
	G.vexnum = 0;
	G.arcnum = 0;
}


//得到顶点的度
int GetVertexDegree(  const ALGraph& G, VertexType val )
{
	int m = LocateVex( G, val );//得到顶点的下标
	int iCount = 0; //顶点的度

	for ( int i = 0; i < G.vexnum; ++i )
	{
		if ( i == m )
		{
			ArcNode* pEdgeOut = G.vertices[i].firstarc;
			while ( pEdgeOut ) 
			{
				++iCount;//累加出度
				pEdgeOut = pEdgeOut->nextarcs;
			}
		}
		else
		{
			ArcNode* pEdgeIn = G.vertices[i].firstarc;
			while ( pEdgeIn )
			{
				if ( pEdgeIn->adjvex == m )
					++iCount;   //累加入度
				pEdgeIn = pEdgeIn->nextarcs;
			}
		}
	}
	return iCount;
}


//深度优先遍历图
void DFS( const ALGraph& G, int i )
{
	cout << G.vertices[i].data << " ";
	visited[i] = true;

	ArcNode* pEdge = G.vertices[i].firstarc;
	while( pEdge )
	{
		int j = pEdge->adjvex;
		if ( !visited[j] )
		{
			DFS( G, j);
		}
		pEdge = pEdge->nextarcs;
	}
}
void DFSTraverse( const ALGraph& G )
{
	int i;
	for (i = 0; i < G.vexnum; ++i )
	{
		visited[i] = false;
	}

	for (i = 0; i < G.vexnum; ++i )
	{
		if ( !visited[i] )
			DFS( G, i );
	}
}

//广度优先遍历
void BFSTraverse( const ALGraph& G )
{
	int i; 
	for (i = 0; i < G.vexnum; ++i )
	{
		visited[i] = false;
	}

	queue<int> Q;
	for (i = 0; i < G.vexnum; ++i )
	{
		if ( !visited[i] )
		{
			cout << G.vertices[i].data << " ";
			visited[i] = true;
			Q.push( i );
			while( !Q.empty() )
			{
				int iVex = Q.front();
				Q.pop();

				ArcNode* pEdge = G.vertices[iVex].firstarc;
				while ( pEdge )
				{
					if ( !visited[pEdge->adjvex] )
					{
						cout << G.vertices[pEdge->adjvex].data << " ";
						visited[pEdge->adjvex] = true;
						Q.push( pEdge->adjvex );
					}
					pEdge = pEdge->nextarcs;
				}
			}
		}
	}
}

int main()
{
	//创建有向图
	cout << "邻接表存储的图，实现的功能有：创建图、深度优先遍历、广度优先遍历以及求节点的度\n" << endl;
	cout << "创建有向图G" << endl;
	ALGraph G;
	CreateAdjListGraph( G );

	cout << "深度优先遍历图G: ";
	//深度优先遍历图
	DFSTraverse( G );
	cout << endl << endl;
	
	cout << "广度优先遍历图G: ";
	//广度优先遍历图
	BFSTraverse( G );
	cout << endl << endl;

	//结点的度
	cout << "输入求度的结点:";
	VertexType v;
	cin >> v;
	cout << "度为：" << GetVertexDegree( G, v ) << endl;

	//销毁有向图
	DestroyGraph( G );

	return 0;
} 