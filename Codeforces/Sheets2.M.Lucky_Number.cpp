#include<iostream>
using namespace std;
bool check(int num)
{
	while(num)
	{
		int digit=num%10;
		if(digit!=4 && digit!=7)
			return false;
		num/=10;
	}
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;
	bool flag=true;
	for(int i=a; i<=b; i++)
	{
		bool result=check(i);
		if(result)
		{
			cout<<i<<" ";
			flag=false;
		}
	}
	if(flag)
		cout<<-1;
	return 0;
}