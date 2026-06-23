#include <bits/stdc++.h>
using namespace std;
// Brute Force approach
bool PrimeCheck(int n)
{
    if(n<=1)
    return false;
    int count=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    return true;
    else 
    return false;
}
int countPrimes(int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(PrimeCheck(i))
    count++;
  }   
  return count;
}

// Optimum Approach Sieve Eratosthenes
int countPrimes1(int num)
{
    if(num<=2)
    return 0;// if you not write there is an runtime error.
    vector<bool> arr(num,true);
    arr[0]=false;
    arr[1]=false;
    int count=0;
    for(int i=2;i<num;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*2;j<num;j+=i)
            arr[j]=0;
        }
    }
    for(auto i:arr)
    if(i==1)
    count++;
    return count;

}
int main()
{
    int num;
    cout << "Enter the number that is difine the range(1-n):-";
    cin >> num;
    int result = countPrimes1(num);
    cout << result;
    return 0;
}