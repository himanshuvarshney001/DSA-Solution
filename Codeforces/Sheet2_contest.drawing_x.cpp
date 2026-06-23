#include <bits/stdc++.h>
using namespace std;
void drawing(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == (num-1) / 2 && j == (num-1) / 2)
                cout << "X";
            else if (i == j)
                cout << "\\";
            else if (i + j == num - 1)
                cout << "/";
            else
                cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int num;
    cout << "Enter num=";
    cin >> num;
    drawing(num);
    return 0;
}