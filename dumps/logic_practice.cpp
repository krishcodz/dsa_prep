#include <bits/stdc++.h>
using namespace std;
void printTriangle11(int n)
{
    int a;
    for (int i = 0; i < n; i++)
    {
        ((i + 1) % 2 == 0) ? (a = 0) : (a = 1);
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
            (a == 0) ? (a = 1) : (a = 0);
        }
        cout << endl;
    }
}
void printTriangle12(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= (2 * (n - i)); j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printTriangle17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // alphabet
        for (int k = 0; k <= i; k++)
        {
            char ch = 'A' + k;
            cout << ch;
        }
        for (int l = i - 1; l >= 0; l--)
        {
            char ch = 'A' + l;
            cout << ch;
        }
        cout << endl;
    }
}
void printTriangle19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        for (int k = (i * 2); k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        for (int k = (i * 2); k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printTriangle20(int n)
{
    int stars;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        (i > (n)) ? (stars = (2 * n - i)) : (stars = i);
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < (2 * (n - stars)); k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printTriangle21(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < n - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}
void printTriangle22(int n)
{
    int row, col;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        (i > n) ? (row = 2 * n - i) : (row = i);
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            (j > n) ? (col = 2 * n - j) : (col = j);
            cout << n - min(row, col) + 1;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printTriangle22(n);
    return 0;
}