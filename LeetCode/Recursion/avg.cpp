#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
long long sum(int index,vector<int> &arr)
{
    if(index==arr.size()-1)
    return arr[index];
    return arr[index]+sum(index+1,arr);
}
int main()
{
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    long long result=sum(0,arr);
    double ans=(double)result/arr.size();
    cout<<fixed<<setprecision(6)<<ans;
    return 0;

}