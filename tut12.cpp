#include<iostream>
using namespace std;

int main() {
    // Pointers -> is a datatype used to store address of another datatypes
    int a = 3;
    int* b = &a;
    // int* b;
    // b = &a;

    // & -> (Address of) operator
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<b<<endl;

    // * -> (value at) dereference operator
    cout<<"Value at Address b is "<<*b<<endl;

    // Pointer to Pointer
    int** c = &b; // Store address of pointer into another pointer
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at c is "<<*c<<endl; // Address of b as it is value stored at c
    cout<<"The value at address valueAt(valueAt(c))  is "<<**c<<endl;

    return 0;
}