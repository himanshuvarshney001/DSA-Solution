#include<iostream>
#include<vector>
using namespace std;
void sub(int index,vector<vector<int>>&result,vector<int> &cal,vector<int>&input,int sum,int k)
{
    if(sum>k)
    return;
    if(index>=input.size())
    {
        if(sum==k)
        result.push_back(cal);
        return;
    }
    cal.push_back(input[index]);
    sum+=input[index];
    sub(index+1,result,cal,input,sum,k);
    sum-=input[index];
    cal.pop_back();
    sub(index+1,result,cal,input,sum,k);
}
int main()
{
    vector<int> input={3,1,2};
    int k=3;
    vector<vector<int>> result;
    vector<int> cal;
    sub(0,result,cal,input,0,k);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}