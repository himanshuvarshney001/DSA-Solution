#include<iostream>
#include<vector>
using namespace std;
long long findRank(string && s) {
        // code here
        vector<int> arr(26,0);
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
        }
        int n=s.size();
        vector<long long>fact(n+1);
        fact[0]=1;
        fact[1]=1;
        for(int i=2;i<n;i++)
        {
            fact[i]=fact[i-1]*i;
        }
        long long rank=1;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<s[i]-'a';j++)
            {
                count+=arr[j];
            }
            arr[s[i]-'a']--;
            rank+=count*fact[n-i-1];
        }
        return rank;
}
int main()
{
    long long result=findRank("abc");
    cout<<result;
    return 0;
}