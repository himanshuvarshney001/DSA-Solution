#include<bits/stdc++.h>
using namespace std;
vector<string> topKFrequent(vector<string> &words, int k)
{
   map<string,int>mp;
   for(auto i:words)
   {
    mp[i]++;
   }
   vector<pair<string,int>>result(mp.begin(),mp.end());
   
}
int main()
{
    int size;
    cout<<"Enter the size of array=";
    cin>>size;
    vector<string>arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k(most frequent element)";
    cin>>k;
    vector<string>result=topKFrequent(arr,k);
    for(auto i:result)
    {
        cout<<i;
    }
    return 0;
}