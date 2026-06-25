#include <iostream>
using namespace std;

void printChar(char ch, int count)
{
    if(count == 0)
        return;

    cout << ch;
    printChar(ch, count - 1);
}

void pyramid(int n, int row)
{
    if(row > n)
        return;

    printChar(' ', n - row);        // spaces
    printChar('*', 2 * row - 1);    // stars
    cout << endl;

    pyramid(n, row + 1);
}

int main()
{
    int n;
    cin >> n;

    pyramid(n, 1);

    return 0;
}