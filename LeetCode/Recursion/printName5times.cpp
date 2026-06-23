#include<iostream>
using namespace std;
void print(int n,int i=0)
{
    if(i==n)
    return;
    cout<<"CodeWithHimanshu"<<endl;
    print(n,i+1);
}
int main()
{
  int n;
  cin>>n;
  print(n);
  return 0;
}