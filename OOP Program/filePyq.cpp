#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("file1.txt",ios::binary);

    if (!fin)
    {
        cout << "File not open";
        return 1;
    }

    fin.seekg(34,ios::beg);

    for (int i = 0; i < 15 && fin; i++)
    {
        char ch = fin.get();
        cout << ch;
    }

    return 0;
}