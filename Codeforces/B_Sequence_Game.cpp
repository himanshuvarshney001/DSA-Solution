#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size;
        cin >> size;
        vector<int> input(size);
        vector<int> result;
        for (int i = 0; i < size;i++)
        {
            cin >> input[i];
        }
        result.push_back(input[0]);
        for (int i = 1; i < size;i++)
        {
            if(input[i-1]<=input[i])
            {
                result.push_back(input[i]);
            }
            else 
            {
                result.push_back(input[i]);
                result.push_back(input[i]);
            }
        }
        cout << result.size() << endl;
        for (int i = 0; i < result.size()-1;i++)
        {
            cout << result[i]<<" ";
        }
        cout << result[result.size() - 1];
        cout << endl;
    }
    return 0;
}