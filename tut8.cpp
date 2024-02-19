#include<iostream>
#include<iomanip> // setw
using namespace std;

int main() {
    // Constants
    const float pi = 3.14;
    cout<<"Value of pi : "<<pi<<endl;
    //pi = 1.2; Gives error as constant cannot be changed
    
    // Manipulators
    // endl, setw
    int a = 10, b = 20, c = 30;
    cout<<"Value of a without setw is "<<a<<endl;
    cout<<"Value of b without setw is "<<b<<endl;
    cout<<"Value of c without setw is "<<c<<endl;

    cout<<"Value of a with setw is "<<setw(4)<<a<<endl;
    cout<<"Value of b with setw is "<<setw(10)<<b<<endl;
    cout<<"Value of c with setw is "<<setw(6)<<c<<endl;
    
    // Operator Precedence
    int x = 3, y = 4;
    int z = ((((x*5)+y)-45)+87);
    cout<<"Value of C :"<<z<<endl;
    return 0;
}