#include<iostream>
#include<vector>
using namespace std;
int sub(int index,vector<int>&input, int sum, int k)
	{
		if(sum==k)
		return 1;
		else if(index>=input.size() || sum>k) return 0;
		sum+=input[index];
		int l=sub(index+1,input,sum,k);
		sum-=input[index];
        int r=sub(index+1,input,sum,k);
		return l+r;
	}
int main()
{
    vector<int> input={3,1,2};
    cout<<sub(input,2);
    return 0;
}