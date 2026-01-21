#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &arr, int k)
{
    int i = 0, j = 0;
    int size = arr.size();
    while (size--)
    {
        if(arr[i]!=k)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        i++;
    }
    return j;
}
int main()
{
    int size,k;
    cout << "Enter the size of array";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cin>>k;
    int result = removeElement(arr,k);
    cout << result<<endl;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}