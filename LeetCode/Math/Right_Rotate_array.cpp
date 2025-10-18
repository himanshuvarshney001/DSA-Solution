#include<bits/stdc++.h>
using namespace std;

// ----Right Rotation by 3:---
// [1, 2, 3, 4, 5] → [3, 4, 5, 1, 2]


int main()
{
    int n,rot,temp;
    cout<<"Enter the size of array=";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element of array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the rotation=";
    cin>>rot;

    // Brute Force
    reverse(arr.begin(),arr.end());
    while(rot)
    {
         temp=arr[0];
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
        rot--;
    }
    rot=3;
    reverse(arr.begin(),arr.end());
    for(int i:arr)
    cout<<i<<endl;
     
    cout<<"optimum approach";
    // optimum solution
    rot=rot%arr.size();
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+rot);
    reverse(arr.begin()+rot,arr.end());
    for(int i:arr)
    cout<<i<<endl;
}