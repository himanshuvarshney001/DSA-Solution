#include <bits/stdc++.h>
using namespace std;
void Insertion_sort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int position = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > key)
            {
                position = j;
                break;
            }
        }
        for (int j = i-1; j >=position; j--)
            arr[j + 1] = arr[j];
        arr[position]=key;
    }
}
int main()
{
    int size;
    cout << "Enter size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Insertion_sort(arr);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}