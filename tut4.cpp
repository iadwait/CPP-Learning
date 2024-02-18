#include<iostream>
using namespace std;

int glovar = 10;

void localVar() {
    int num1 = 5;
    cout<<"\n Global Var from local func access global varibale: "<< glovar;
}

int main() {
    int a = 10, b = 20;
    float pi = 3.14;
    char c = 'd';
    int glovar = 20;
    bool isTrue = true;
    glovar = 25; // Priority given to local var and not global

    cout<<"\n The Value of a is " <<a << "\n The value of b is " <<b;
    cout<<"\n The Value of pi is " << pi;
    cout<<"\n The Value of c is " <<c;
    cout<<"\n The Value of isTrue is " <<isTrue; // 1 for true, 0 for false

    localVar();
    cout<<"\n glovar from int mail refer local var = " <<::glovar;
    cout<<"\n Access Global Variable using scope resolution operator" <<::glovar << " " << glovar;
    return 0;
}




