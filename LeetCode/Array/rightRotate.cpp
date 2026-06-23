#include<iostream>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5}; //rotate 2 right side
    reverse(arr.end()-2,arr.end());
    reverse(arr.begin(),arr.end()-2);
    reverse(arr.begin(),arr.end());
    
    rotate(arr.begin(),arr.end()-2,arr.end())// rotate(first,middle,last);
    for(auto i:arr)
    cout<<i<<" ";
    return 0;
}