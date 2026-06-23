#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
   int pos=0,neg=1;
        vector<int> result(nums.size(),0);
        for(auto num : nums) {
            if(num>0) {
                result[pos]=num;
                pos+=2;
            }
            else {
                result[neg]=num;
                neg+=2;
            }
        }
    for(int i:result)
    cout<<i<<" ";

    // Another approach when 0 is also element
        vector<int>a,b;
        for(int i = 0; i < nums.size();i++){
            if(nums[i]>=0)a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        nums.clear();
         for(int i = 0; i <max(a.size(),b.size());i++){
            if(i <a.size()){
                nums.push_back(a[i]);
            }
               if(i <b.size()){
                nums.push_back(b[i]);
            }
        }
        
   
}