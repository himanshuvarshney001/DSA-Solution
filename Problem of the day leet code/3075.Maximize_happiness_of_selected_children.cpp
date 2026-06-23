#include <bits/stdc++.h>
using namespace std;
long long maximumHappinessSum(vector<int> &happiness, int k)
{
    long long count = 0;
    sort(happiness.begin(), happiness.end(), greater<int>());
    for (int i = 0; i < happiness.size(); i++)
    {
        happiness[i] = happiness[i] - i;
    }
    int i = 0;
    while (k)
    {
        if (happiness[i] > 0)
            count += happiness[i];
        i++;
        k--;
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k=";
    cin>>k;
    long long result=maximumHappinessSum(arr,k);
    cout<<result;
    return 0;
}