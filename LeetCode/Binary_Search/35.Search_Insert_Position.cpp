#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &arr, int target)
{
     int n = arr.size();
        int position = 0;
        if (arr[0] > target) {
            return 0;
        } else if (arr[n - 1] < target) {
            return n;
        }
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] > target) {
                position = mid;
                right = mid - 1;
            } else if (arr[mid] < target) {
                left = mid + 1;
            }
        }
        return position;
}
int main()
{
    int size,k;
    cout<<"Enter size of array=";
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter number=";
    cin>>k;
    int result=searchInsert(arr,k);
    cout<<result;
    return 0;
}