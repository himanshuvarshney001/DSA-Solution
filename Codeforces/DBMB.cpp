#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    while(size--)
    {
        int n, s, x;
        long long sum = 0;
        cin >> n >> s >> x;
        vector<int> arr(n);
        for (int i = 0; i < arr.size();i++)
        {
            cin >> arr[i];
            sum+= arr[i];
        }
        if(sum>s)
        {
            cout << "No" << endl;
            continue;
        }
        else
        {
            sum = abs(sum - s);
            if(sum%x==0)
                cout << "Yes"<<endl;
            else
                cout << "NO"<<endl;
        }
    }
    return 0;
}