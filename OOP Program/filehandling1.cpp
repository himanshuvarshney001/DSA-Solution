#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream fout("file1.txt", ios::out|ios::in);
    string str = "Himanshu Varshney";
    for (int i = 0; i < str.size();i++)
    {
        fout.put(str[i]);
    }
    cout << fout.tellg()<<endl;
    fout.seekg(0);
    fout.seekg(-3,ios::end);
    char ch = fout.get();
    cout << ch;
    cout << fout.tellg();
    // char ch=fout.get();
    // while(!fout.eof())
    // {
    //     cout << ch;
    //     ch = fout.get();
    // }
    return 0;
}