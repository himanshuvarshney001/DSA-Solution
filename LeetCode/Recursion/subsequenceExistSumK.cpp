#include<iostream>
#include<vector>
using namespace std;
 bool sub(int index,vector<int>&input, int sum, int k)
	{
		if(sum==k)
		return true;
		else if(index>=input.size() || sum>k) return false;
		sum+=input[index];
		if(sub(index+1,input,sum,k))
		return true;
		sum-=input[index];
		if(sub(index+1,input,sum,k))
		return true;
		return false;
	}
	bool checkSubsequenceSum(vector<int>& arr, int k) {
		// Code here
        return sub(0, arr, 0, k);
// 		return ans;
	}
int main()
{
    vector<int> input={3,1,2};
    cout<<checkSubsequenceSum(input,2);
    return 0;
}