#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    cout<<"Entered Age = "<<age<<endl;
    // Selection Control Structure: If Else
    if ((age < 18) && (age > 0))
    {
        cout << "Age is less than 18" << endl;
    }
    else if (age < 1) {
        cout<<"Age should be atleast 1"<<endl;
    }
    else if (age == 18)
    {
        cout << "Age is Equal to 18" << endl;
    }
    else
    {
        cout << "Age is greater than 18" << endl;
    }

    // Selection Control Structure: Switch Statement
    // break is mandatory, if not added next case will also be executed
    cout<<"Switch Statement"<<endl;
    switch(age) {
        case 18:
        cout<<"Age is 18"<<endl;
        break;
        case 25:
        cout<<"Age is 25"<<endl;
        break;
        case 1:
        cout<<"Age is 1"<<endl;
        break;
        default:
        cout<<"Switch Default Case";
        break;
    }


    return 0;
}