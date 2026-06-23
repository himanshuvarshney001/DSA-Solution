#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &arr)
{
    int product = 1, maxi = INT_MIN, size = arr.size();
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
        maxi = max(product, maxi);
        if (arr[i] == 0)
            product = 1;
    }
    product = 1;
    for (int i = size - 1; i >= 0; i--)
    {
        product = product * arr[i];
        maxi = max(product, maxi);
        if (arr[i] == 0)
            product = 1;
    }
    return maxi;
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
    int result=maxProduct(arr);
    cout<<"Maximum product"<<result;
    return 0;
}