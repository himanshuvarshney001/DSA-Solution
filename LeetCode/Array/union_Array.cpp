#include<bits/stdc++.h>
using namespace std;
vector<int> unio(vector<int> &arr1,vector<int> &arr2)
{
    vector<int>result;
    int left=0,right=0;
    while(left<arr1.size() || right<arr2.size())
    {
        // logic for skiping the duplicate
        while(left>0 && left<arr1.size() && arr1[left]==arr1[left-1])
        left++;
        while(right>0 && right<arr2.size() && arr2[right]==arr2[right-1])
        right++;

        // when any one array is exhausted
        if(left>=arr1.size())
        {
            result.push_back(arr2[right]);
            right++;
            continue;
        }
        else if(right>=arr2.size())
        {
            result.push_back(arr1[left]);
            left++;
            continue;
        }
        if(arr1[left]==arr2[right])
        {
            result.push_back(arr1[left]);
            left++;
            right++;
        }
        else if(arr1[left]>arr2[right])
        {
            result.push_back(arr2[right]);
            right++;
        }
        else
        {
           result.push_back(arr1[left]);
           left++;   
        }
    }
    return result;
}
int main()
{
    int size1,size2;
    cout<<"Enter the size of array1 and array2=";
    cin>>size1>>size2;
    vector<int> arr1(size1),arr2(size2);
    cout<<"Enter element of first array=";
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the element of second array=";
    for(int i=0;i<size2;i++)
    {
       cin>>arr2[i];
    }
    vector<int>result=unio(arr1,arr2);
    for(auto i:result)
    cout<<i<<" ";
    return 0;
}