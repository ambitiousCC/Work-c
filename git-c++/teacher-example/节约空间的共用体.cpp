// union 共用体:常用于节省内存。比如：嵌入式系统编程（控制烤箱、MP3播放器）。共用体也常用于操作系统数据结构或硬件数据结构。
/* 共同体是一种数据格式，它能够存储不同的数据类型，但只能同时存储其中的一种类型。也就是说，结构可以同时存储int、long和double，
    共用体只能存储int、long或者double。
 */
#include <iostream>
#include <cstring>

using namespace std;

union udemo
{
    int int_val;
    long long_val;
    double double_val;
};

#if 0
struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        char id_char[20];
    }id_val;
};
#endif

#if 1
// 匿名共用体
struct widget
{
    char brand[20];
    int type;
    union // 匿名共用体，没有名称，其成员将成为位于相同地址处的变量。显然，每次只有一个成员是当前结构体的成员
    {
        long id_num;
        char id_char[20];
    };
};
#endif

int main()
{
    cout << "共同体udemo的存储空间是: " << sizeof (udemo) << "=sizeof(double) = " << sizeof (double) << endl;

    udemo ud;
    ud.int_val=15;
    cout << "ud: " << ud.int_val << endl;
    ud.double_val=1.38;
    cout << "ud: " << ud.double_val << endl;

    // 命名共用体
#if 0
    widget prize;
    strcpy(prize.brand, "addidas");
    cout << "Select the value for id_num, 1 to integer, othters for character!\n";
    cin >> prize.type;
    if(1==prize.type)
    {
        cout << "type=" << prize.type << endl;
        cout << "Input integer value to id_num" << endl;
        cin >> prize.id_val.id_num;
    }
    else
    {
        cout << "type!=" << prize.type << endl;
        cout << "Input character value to id_num" << endl;
        cin >> prize.id_val.id_char;
    }

    cout << "widget: " << prize.brand << endl;
    cout << prize.type << endl;
    if(1==prize.type)
        cout << prize.id_val.id_num << endl;
    else
        cout << prize.id_val.id_char << endl;

#endif
     // 匿名共用体
#if 1
    widget prize;
    strcpy(prize.brand, "addidas");
    cout << "Select the value for id_num, 1 to integer, othters for character!\n";
    cin >> prize.type;
    if(1==prize.type)
    {
        cout << "type=" << prize.type << endl;
        cout << "Input integer value to id_num" << endl;
        cin >> prize.id_num;
    }
    else
    {
        cout << "type!=" << prize.type << endl;
        cout << "Input character value to id_num" << endl;
        cin >> prize.id_char;
    }

    cout << "widget: " << prize.brand << endl;
    cout << prize.type << endl;
    if(1==prize.type)
        cout << prize.id_num << endl;
    else
        cout << prize.id_char << endl;
#endif

    return 0;
}
