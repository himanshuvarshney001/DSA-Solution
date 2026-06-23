#include<bits/stdc++.h>
using namespace std;
long long multi(int num,int n,int number)
{
    long long result = 1;
    while(n--)
    {
        result = result * num;
        if(result>number)  //handle overflow
            return number + 1;
    }
    return result;
}
int Nth_root(int num,int n)
{
    if(num<=0)
        return 0;
    int left=1;
    int right = num;
    int ans = -1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(multi(mid,n,num)<=num)
        {
            ans = mid;
            left = mid + 1;
        }
        else if(multi(mid,n,num)>=num)
        {
            right = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int num,nth;
    cout << "Enter number=";
    cin >> num;
    cout << "Enter nth number=";
    cin >> nth;
    int result = Nth_root(num,nth);
    cout << result;
    return 0;
}