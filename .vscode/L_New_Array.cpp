#include <bits/stdc++.h>
using namespace std;
vector<int> add(vector<int> &vect, vector<int> &vect1)
{
    vector<int> result(vect.size() + vect1.size(), 0);
    for (int i = 0; i < vect1.size(); i++)
    {
        result[i] = vect1[i];
    }
    for (int i = vect1.size() ; i < vect.size() + vect1.size();i++)
    {
        result[i] = vect[i-vect.size()];
    }
    return result;
}
int main()
{
    int size;
    cin >> size;
    vector<int> vect(size);
    vector<int> vect1(size);
    for (int i = 0; i < size; i++)
    {
        cin >> vect[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin >> vect1[i];
    }
    vector<int> result = add(vect, vect1);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}