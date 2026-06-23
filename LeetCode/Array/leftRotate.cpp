#include<iostream>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5};
    // reverse(arr.begin(),arr.begin()+2);//rotate 2 times left side
    // reverse(arr.begin()+2,arr.end());
    // reverse(arr.begin(),arr.end());

    // rotate by rotate function
    rotate(arr.begin(),arr.begin()+2,arr.end());
    for(int i:arr)
    cout<<i<<" ";
    return 0;
}