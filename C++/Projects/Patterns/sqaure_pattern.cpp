// Square pattern problems
#include <iostream>
using namespace std;

int main()
{
    // 1. star pattern
    int n;
    cout << "Enter value of n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;

    // 2. Numbers 1 to n
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cout << " " << k + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    int num = 1;
    // 3. Number 1 to n2
    for (int m = 0; m < n; m++)
    {
        for (int p = 0; p < n; p++)
        {
            cout << " " << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

    char c = 'A';
    // 4. characters A to n2 letter
    for (int q = 0; q < n; q++)
    {
        for (int r = 0; r < n; r++)
        {
            cout << " " << c << " ";
            c++;
        }
        cout << endl;
    }
    cout << endl;

    // 4. characters A to nth letter
    for (int q = 0; q < n; q++)
    {
        char c = 'A';

        for (int r = 0; r < n; r++)
        {
            cout << " " << c << " ";
            c++;
        }
        cout << endl;
    }
    cout << endl;

    // 4. characters 1 char n times per line
    char d = 'A';

    for (int x = 0; x < n; x++)
    {

        for (int y = 0; y < n; y++)
        {
            cout << " " << d << " ";
        }
        d++;

        cout << endl;
    }
    cout << endl;
}