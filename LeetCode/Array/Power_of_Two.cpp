#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    for(int i=0;i<n;i++)
        {
            int t=pow(2,i);
            if(n==t)
            {
                return true;
            }
            else if(t>n)
            {
                return false;
            }
        }
    return false;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

    if(isPowerOfTwo(n))
        cout<<"Yes, power of 2";
    else
        cout<<"Not power of 2";

    return 0;
}
