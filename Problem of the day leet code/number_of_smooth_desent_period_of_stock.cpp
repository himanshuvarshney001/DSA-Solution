#include<bits/stdc++.h>
using namespace std;

// Brute Force
int smooth_period(vector<int> &price)
{
    int count=price.size();
    for(int i=0;i<price.size();i++)
    {
        for(int j=i;j<price.size()-1;j++)
        {
            if(price[j]-price[j+1]==1)
            count++;
            else
            break;
        }
    }    
    return count;
}

//optimum approach
int smooth_periodo(vector<int> &price)
{
    int count=1,result=0;
    for(int i=0;i<price.size();i++)
    {
        if( i<price.size()-1 && price[i]-price[i+1]==1)
        {
            count++;
        }
        else
        {
            result=result+(count*(count+1))/2;
            count=1;
        }
    }
    return result;
    
}
int main()
{
    int size;
    cout<<"Enter the of array=";
    cin>>size;
    cout<<"Enter array element-"<<endl;
    vector<int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int result=smooth_period(arr);
    cout<<result<<endl;
    result=smooth_periodo(arr);
    cout<<result;
}
