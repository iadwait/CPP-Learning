#include <iostream>
using namespace std;

int main()
{
    // Break
    cout<<"Break"<<endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << "i = " << i << endl;
    }

    // Continue
    cout<<"Continue"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << "i = " << i << endl;
    }
    return 0;
}