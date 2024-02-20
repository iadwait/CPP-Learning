#include<iostream>
using namespace std;

int main() {
    /*
    Loops in C++
    1. For Loop
    2. While Loop
    3. Do While Loop
    */

   // For Loop
   for(int i=1; i<=10; i++) {
        cout<<"i = "<<i<<endl;
   }

   // While Loop
   int num1 = 10;
   while(num1 < 15) {
        cout<<"Num1 = "<<num1<<endl;
        num1++;
   }

   // Do While Loop
   int table = 6;
   int num = 1;
   cout<<"Table of "<<table<<endl;
   do {
        cout<<table<<" * "<<num <<" = "<<table*num<<endl;
        num++;
   }while(num<=10);
    return 0;
}