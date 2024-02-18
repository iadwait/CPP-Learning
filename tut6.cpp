#include<iostream>
#include "this.h" // User Defined Header File
using namespace std;

int main() {
    int a=4,b=5;
    // Operators in C++
    cout<< "Operators in C++" <<endl;
    cout<< "Arithmetic Operators:" <<endl;
    cout<< "The Value of a + b = " <<a+b <<endl;
    cout<< "The Value of a - b = " <<a-b <<endl;
    cout<< "The Value of a * b = " <<a*b <<endl;
    cout<< "The Value of a / b = " <<a/b <<endl;
    cout<< "The Value of a % b = " <<a%b <<endl;
    cout<< "The Value of a++ = " <<a++ <<endl; // print a than ++
    cout<< "The Value of a-- = " <<a-- <<endl; // print a than --
    cout<< "The Value of ++a = " <<++a <<endl; // increment than print
    cout<< "The Value of --a = " <<--a <<endl; // decrement than print

    // Assignment Operators, = used to assign value to a variable

    // Comparision Operator
    cout<<endl<<"Comparision Operator" <<endl;
    cout<<"The Value of a == b is " <<(a==b)<<endl;
    cout<<"The Value of a != b is " <<(a!=b)<<endl;
    cout<<"The Value of a >= b is " <<(a>=b)<<endl;
    cout<<"The Value of a <= b is " <<(a<=b)<<endl;
    cout<<"The Value of a > b is " <<(a>b)<<endl;
    cout<<"The Value of a < b is " <<(a<b)<<endl;

    // Logical Operator
    cout<<endl<<"Logical Operator" <<endl;
    cout<<"The Value of ((a==b) && (a<b)) is " <<((a==b) && (a<b))<<endl;
    cout<<"The Value of ((a==b) || (a<b)) is " <<((a==b) || (a<b))<<endl;
    cout<<"The Value of (!(a==b)) is " <<(!(a==b))<<endl;

    // Bitwise operators

    return 0;
}