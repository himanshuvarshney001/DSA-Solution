#include <bits/stdc++.h>
using namespace std;
int main()
{
    int digits;
    cout << "How many digis=";
    cin >> digits;
    vector<string> original;
    deque<string> digitSet;
    queue<string> result;
    for (int i = 0; i < digits; i++)
    {
        string ele;
        cin >> ele;
        digitSet.push_back(ele);
        original.push_back(ele);
    }
    cout << endl;
    int n;
    cout << "How many numbers are generated";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string ele = digitSet.front();
        result.push(ele);
        for (int j = 0; j < digits; j++)
        {

            digitSet.push_back(ele+original[j]);
        }
        digitSet.pop_front();
    }
    while(result.empty()==false)
    {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;
    return 0;
}