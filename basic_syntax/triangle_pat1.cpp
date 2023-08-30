#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "enter a number:";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}