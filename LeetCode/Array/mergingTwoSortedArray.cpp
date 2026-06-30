#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b)
{
    make_heap(b.begin(),b.end(),greater<int>());//0,1,4,10,11,12
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[0])
        {
            pop_heap(b.begin(),b.end(),greater<int>());//1,4,10,11,12,0
            swap(a[i],b[b.size()-1]);//1,4,10,11,12,3
            push_heap(b.begin(),b.end(),greater<int>());//1,3,4,10,11,12
        }
    }
}
int main()
{
    vector<int> a={3,9,8};
    vector<int> b={0,1,4,10,11,12};
    merge(a,b);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(auto i:b)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}