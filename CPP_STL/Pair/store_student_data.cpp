#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "How many students you have=";
    cin >> size;
    vector<pair<string, float>> students(3);
    for (int i = 0; i < size;i++)
    {
        string name;
        float marks;
        cout << "Enter name of students=";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the marks of student=";
        cin >> marks;
        students[i].first = name;
        students[i].second = marks;
    }
    for (int i = 0; i < size;i++)
    {
        cout << students[i].first << " " << students[i].second<<endl;
    }
    return 0;
}