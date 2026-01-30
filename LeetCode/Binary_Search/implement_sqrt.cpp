#include<bits/stdc++.h>
using namespace std;
int sq(int num)
{
    if(num<=0)
        return 0;
    int left=1;
    int right = num;
    int ans;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(mid*mid<=num)
        {
            ans = mid;
            left = mid + 1;
        }
        else if(mid*mid>=num)
        {
            right = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter number=";
    cin >> num;
    int result = sq(num);
    cout << result;
    return 0;
}