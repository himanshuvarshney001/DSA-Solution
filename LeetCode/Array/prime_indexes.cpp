#include <bits/stdc++.h>
using namespace std;
int miniOper(vector<int> &arr)
{
    int oper = 0;
    vector<bool> primes(200000, true);
    primes[0] = false;
    primes[1] = false;
    for (int i = 1; i*i < 200000;i++)
    {
        if(primes[i])
        {
            for (int j = i * i; j < 200000; j += i)
            {
                primes[j] = false;
            }
        }
    }
    for (int i = 0; i < arr.size();i++)
    {
        if(i%2==0 && !primes[arr[i]])
        {
            int val = arr[i];
            while(!primes[arr[i]])
            {
                arr[i]=arr[i]+1;
            }
            oper = oper + (arr[i] - val);
        }
        else if(i%2!=0 && primes[arr[i]])
        {
            int val=arr[i];
            while(primes[arr[i]])
            {
                arr[i]+=1;
            }
            oper = oper + (arr[i] - val);
        }
    }
    return oper;
}
int main()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the element of array=";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int mini = miniOper(arr);
    cout << mini;
    return 0;
}