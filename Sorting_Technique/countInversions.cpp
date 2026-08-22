#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high,int &ans)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
        {
        if (arr[left] > arr[right])
            {
            temp.push_back(arr[right]);
            ans+=(mid-left+1);
            right++;
        }
        else
            {
            temp.push_back(arr[left]);
            left++;
        }
    } 
    while (left <= mid)
        {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
        {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
        {
        arr[i] = temp[i - low];
    }
}
void mergesort(vector<int> &arr, int low, int high, int &ans)
{
    if (low >= high)
        return;
    int mid = low + (high - low)/2;
    mergesort(arr, low, mid, ans);
    mergesort(arr, mid + 1, high, ans);
    merge(arr, low, mid, high, ans);
}
int inversionCount(vector<int> &arr) {
    // Code Here
    int ans = 0;
    mergesort(arr, 0, arr.size() - 1, ans);
    return ans;
}
int main()
{
    vector<int> arr={2,4,1,3,5};
    int ans=0;
    cout<<inversionCount(arr);
    return 0;
}