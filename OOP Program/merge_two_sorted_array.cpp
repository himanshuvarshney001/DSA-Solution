#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 4, 5, 6};
    int arr1[] = {4, 6, 9, 10};
    int result[8];
    int i = 0, j = 0;
    int k = 0;
    while(i<4 || j<4)
    {
        while(arr[i]<arr1[j])
        {
            result[k] = arr[i];
            k++;
            i++;
        }
        while(arr[i]>arr1[j])
        {
            result[k] = arr1[j];
            k++;
            j++;
        }
        while(arr[i]==arr1[j])
        {
            result[k] = arr1[j];
            k++;
            result[k] = arr1[j];
            i++;
            j++;
            k++;
        }
        while(i>=4 && j<4)
        {
            result[k] = arr1[j];
            j++;
            k++;
        }
        while(j>=4 && i<4)
        {
            result[k] = arr[i];
            i++;
            k++;
        }
    }
    for(int ele:result)
        cout << ele << " ";
    return 0;
}