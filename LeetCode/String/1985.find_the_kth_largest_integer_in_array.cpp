#include <bits/stdc++.h>
using namespace std;
string kthLargestNumber(vector<string> &nums, int k)
{
   priority_queue<string>pq;
   for(auto i:nums)
   {
    pq.push(i);
   }
     while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    string n;
    while(k)
    {
        n=pq.top();
        pq.pop();
        k--;
    }
   return n;
}
int main()
{
    int size,k;
    cout<<"Enter the size of array";
    cin>>size;
    vector<string> nums(size);
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    cout<<"value of k(largest integer)";
    cin>>k;
    string str=kthLargestNumber(nums,k);
    cout<<str;
    return 0;
}