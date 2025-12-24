#include <bits/stdc++.h>
using namespace std;
int minimumBoxes(vector<int> &apple, vector<int> &capacity)
{
    sort(capacity.begin(),capacity.end(),greater<int>());
    int sum=0;
    for(auto i:apple)
    {
        sum+=i;
    }
    int count=0;
    for(auto i:capacity)
    {
        sum=sum-i;
        count++;
        if(sum<=0)
        return count;
    }
    return capacity.size();
}
int main()
{
    int size,size1;
    cout<<"Enter the no of pack of apple=";
    cin>>size;
    cout<<"Enter the number of boxes=";
    cin>>size1;
    vector<int> apple(size),capasity(size1);
    for(int i=0;i<size;i++)
    {
        cin>>apple[i];
    }
    for(int i=0;i<size1;i++)
    {
        cin>>capasity[i];
    }
    int result=minimumBoxes(apple,capasity);
    cout<<result;
    return 0;
}