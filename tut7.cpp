#include<iostream>
using namespace std;

int main() {
    // Float, Double and Long Double Literals
    float d = 34.4f;
    long double e = 34.4l;
    float pi = 3.14;
    cout<<"The Size of 34.4 is : " <<sizeof(34.4)<<endl;
    cout<<"The Size of 34.4f is : " <<sizeof(34.4f)<<endl;
    cout<<"The Size of 34.4F is : " <<sizeof(34.4F)<<endl;
    cout<<"The Size of 34.4l is : " <<sizeof(34.4l)<<endl;
    cout<<"The Size of 34.4L is : " <<sizeof(34.4L)<<endl;
    
    // Reference Variables
    // Same Value with multiple references
    cout<<"Reference Variables" <<endl;
    float sum = 10;
    float &add = sum;
    cout<<sum<<endl;
    cout<<add<<endl;
    add = 20;
    cout<<sum<<endl;

    // Typecasting
    // Convert Type of one variable to another
    int num1 = 45;
    float num2 = 45.6;
    cout<<"The Value of num1 is "<<(float)num1<<endl;
    cout<<"The Value of num1 is "<<float(num1)<<endl;

    cout<<"The Value of num2 is "<<int(num2)<<endl;
    cout<<"The Value of num2 is "<<(int)num2<<endl;

    int num3 = int(num2);
    cout<<"The expression num1 + num2 = "<<num1 + num2<<endl;
    cout<<"The expression num1 + int(num2) = "<<num1 + int(num2)<<endl;
    cout<<"The expression num1 + (int)num2 = "<<num1 + (int)num2<<endl;

    cout<<endl;
    return 0;
}