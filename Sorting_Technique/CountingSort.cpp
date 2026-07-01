#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &input)
{
    int maxi=*max_element(input.begin(),input.end());
    vector<int> freq(maxi+1,0);
    for(int i=0;i<input.size();i++)
    {
        freq[input[i]]++;
    }
    for(int i=1;i<maxi+1;i++)
    {
        freq[i]=freq[i-1]+freq[i];
    }
    vector<int> output(input.size());

    // Stable placement

    for(int i = input.size() - 1; i >= 0; i--)
    {
        int index = --freq[input[i]];
        output[index] = input[i];
    }
    input = output;
}
int main()
{
    vector<int> arr={1,3,2,3,4,1,6,4,3};
    sort(arr);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}