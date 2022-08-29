#include <iostream>

using namespace std;
int main()
{
    cout << "Enter the number of element: " << endl;
    int n;
    cin >> n;
    int a[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << "The array are: " << a[i] << " " << endl;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}