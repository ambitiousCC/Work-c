/**
 *  @Author     ´ÞÇØ
 *  @Date       2019/4/3
 *  @Version    1.0
 *  @Function   ×éºÏÆË¿ËÅÆ
 */

 #include <iostream>
 #include <cstdlib>
 #include <ctime>

 using namespace std;

 int main()
 {
     string names[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
     string kind[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};

     //create
      srand(time(0));
      int num1 = rand() % 14;
      int num2 = rand() % 5;

      cout<<"The card you picked is "<<names[num1]<<" of "<<kind[num2]<<endl;


     return 0;
 }
