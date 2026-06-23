#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     ofstream fout;
//     string file_name = "file1.txt";
//     fout.open(file_name,ios::out);
//     fout << "Himanshu varshney"<<endl;
//     fout << "Harsh Varshney" << endl;
//     fout.close();

//     ifstream fin;
//     char ch;
//     fin.open(file_name,ios::in);
//     if(!fin)
//     {
//         cout << "This file " << file_name << "not exist" << endl;
//     }
//     else{
//         ch=fin.get();
//         while(!fin.eof())
//         {
//             cout << ch;
//             ch = fin.get();
//         }
//     }
//     fin.close();
//     return 0;
// }

int main()
{
    string pName;
    float price;
    ofstream fout("file1.txt", ios::out); // fout is only name use another instead of and default mode is ios::out;
    // fstream fout("file1.txt", ios::out); file not create when file not exist
    cout << "Enter the name product=";
    getline(cin, pName);
    fout << pName << endl;
    cout << "Enter the cost of item=";
    cin >> price;
    fout << price << endl;
    cin.ignore();
    cout << "Enter the name product=";
    getline(cin, pName);
    fout << pName << endl;
    cout << "Enter the cost of item=";
    cin >> price;
    fout << price << endl;
    fout.close();
    ifstream fin("file1.txt"); // default mode is ios::in
    char ch;
    if (!fin)
    {
        cout << "File not exist" << endl;
    }
    else
    {
        while (fin>>pName>>price)
        {
            cout << "Item name:" << pName << endl;
            cout << "Item cost:" << price << endl;
        }
    }
    fin.close();
    return 0;
}

// int main()
// {
//     // fstream fout("file1.txt");
//     // fout << "Himanshu varshney";
//     // fout.seekp(8);
//     // fout << "Lala";
//     // cout << fout.tellp();
//     // fout.close();
//     ifstream fin("file1.txt");
//     fin.seekg(3, ios::beg); // offset,ref start for begin and go to 3 byte
//     char ch = fin.get();
//     cout << ch;
//     fin.close();
//     return 0;
// }