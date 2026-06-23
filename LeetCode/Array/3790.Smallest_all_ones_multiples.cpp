#include <bits/stdc++.h>
using namespace std;
int minAllOneMultiple(int k)
{
  if(k%2==0 || k%5==0)
  return -1;
  int remi=1%k;
  int count=1;
  while(remi!=0)
  {
    remi=(remi*10+1)%k;
    count++;
  }
  return count;
}
int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    int result=minAllOneMultiple(num);
    cout<<result;
    return 0;
}