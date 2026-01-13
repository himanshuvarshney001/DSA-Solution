// Given two numbers Kand S. Determine how many different values of X,Yand Z such that (0≤X,Y,Z≤K) and X+Y+Z=S

// input 2,1 
// output 3

// input 9,4
// output 15
#include<iostream>
using namespace std;
int main()
{
	int k,s;
	int count=1;
	int digit_sum=0,digit;
	cin>>k>>s;
	int num=s;
	for(int i=0; i<=s*100; i++)
	{
		num=num+1;
		digit=num%10;
		if(digit<=k)
			digit_sum=digit_sum+digit;
		else
		{
			digit_sum=0;
			continue;
		}
		digit=(num/10)%10;
		if(digit<=k)
			digit_sum+=digit;
		else
		{
			digit_sum=0;
			continue;
		}
		digit=num/100;
		if(digit<=k)
			digit_sum+=digit;
		else
		{
			digit_sum=0;
			continue;
		}
		if(digit_sum==s)
		{
			count++;
		}
		digit_sum=0;
	}
	cout<<count;
	return 0;
}
