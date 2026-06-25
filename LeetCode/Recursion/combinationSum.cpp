#include<iostream>
#include<vector>
using namespace std;
void combination(int index,int sum,vector<int> &combin,vector<int> &input,vector<vector<int>>&result)
{
    if(sum==0)
    {
        result.push_back(combin);
        return;
    }
    else if(sum<0 || index>=input.size())
    return;
    combin.push_back(input[index]);
    combination(index,sum-input[index],combin,input,result);
    combin.pop_back();
    combination(index+1,sum,combin,input,result);
}
int main()
{
    vector<int> arr={2,3,6,7};
    vector<vector<int>> result;
    vector<int> combin;
    combination(0,7,combin,arr,result);
    for(auto i:result)
    {
        for(auto j:i)
        cout<<j<<" ";
        cout<<endl;
    }
    return 0;

}