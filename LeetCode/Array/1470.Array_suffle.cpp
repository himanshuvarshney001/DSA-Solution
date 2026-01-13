#include<bits/stdc++.h>
using namespace std;
vector<int> shuffle(vector<int> &nums,int n)
{
    vector<int>num;
    for(int i=0;i<n;i++)
    {
        num.push_back(nums[i]);
        num.push_back(nums[i+n]);
    }
    nums.clear();
    return num;
}
// vector<int> shuffle1(vector<int> &nums,int n)
// {
//    int tempx,tempy;
//    for(int i=1;i<n;i++)
//    {
//     tempx=nums[i];
//     tempy=nums[i+n];
//     nums[i]=tempy;
//     nums[i+1]=tempx;
//    }
// }
int main()
{
    int size,k;
    cout<<"Enter the size of the array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter k=";
    cin>>k;
    vector<int>result=shuffle(arr,k);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}