#include<iostream>
#include<vector>
using namespace std;
void sub(int index,vector<vector<int>>&result,vector<int> &cal,vector<int>&     input)
{
    if(index>=input.size())
    {
        result.push_back(cal);
        return;
    }
    cal.push_back(input[index]);
    sub(index+1,result,cal,input);
    cal.pop_back();
    sub(index+1,result,cal,input);
}
int main()
{
    vector<int> input={3,1,2};
    vector<vector<int>> result;
    vector<int> cal;
    sub(0,result,cal,input);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}