#include<iostream>
using namespace std;
bool check(long long num)
{
    int count=0;
	while(num)
	{
		int digit=num%10;
		if(digit==4 || digit==7)
			{
                count++;
            } 
		num/=10;
	}
    if(count!=0 && (count==4 || count==7))
    return true;
    else return false;

}
int main()
{
	long long a;
	cin>>a;
	bool flag=check(a);
	if(flag)
		cout<<"YES";
    else
    {
        cout<<"NO";
    }    
	return 0;
}