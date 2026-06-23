#include<iostream>
using namespace std;
int singleNumber(vector<int> nums) {
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            res=res^nums[i];
        }
        return res;
    }
int main()
{
    int result=singleNumber({1,2,2,1,3});
    cout<<result;
    return 0;
}