#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxi(int index, vector<int> &a)
{
    if (index == a.size() - 1)
        return a[index];

    return max(a[index], maxi(index + 1, a));
}

int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << maxi(0, arr);

    return 0;
}