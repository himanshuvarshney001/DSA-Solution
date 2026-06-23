#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, float> a, pair<string, float> b)
{
    return a.second < b.second;
}
int main()
{
    int size;
    cout << "How many students you have=";
    cin >> size;
    cin.ignore();
    vector<pair<string, float>> students(size);
    for (int i = 0; i < size; i++)
    {
        string name;
        float marks;
        cout << "Enter name of students=";
        getline(cin, name);
        cout << "Enter the marks of student=";
        cin >> marks;
        cin.ignore();
        students[i].first = name;
        students[i].second = marks;
        // students[i]={name,marks};
    }
    sort(students.begin(), students.end(), cmp);
    cout << "After sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << students[i].first << " " << students[i].second << endl;
    }
    return 0;
}