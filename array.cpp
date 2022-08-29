#include <iostream>

using namespace std;

int main()
{
    // int a[10];
    // a[0] = 3;
    // a[3] = 7;

    // cout << a[0] << " "
    //      << a[3] << endl;
    // int a[4] = {1, 2, 3, 4}; // intitalization of array

    // cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl; // print value
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << a[i] << " ";
    // }

    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = i * i;
        cout << a[i] << " ";
    }
    cout << endl;
    // int b;
    // cout << sizeof(b) << endl;
    int d[10] = {1, 2, 3};
    cout << sizeof(d) << endl;
    // return 0;
}