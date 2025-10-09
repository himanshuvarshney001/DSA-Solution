#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s="MCMXCIV";
        int sum=0;
        vector<int>a;
        for(char i:s)
        {
            switch(i)
            {
                case 'I':
                {
                    a.push_back(1);
                    break;
                }
                case 'V':
                {
                    a.push_back(5);
                    break;
                }
                case 'X':
                {
                    a.push_back(10);
                    break;
                }
                case 'L':
                {
                    a.push_back(50);
                    break;
                }
                case 'C':
                {
                    a.push_back(100);
                    break;
                }
                case 'D':
                {
                    a.push_back(500);
                    break;
                }
                case 'M':
                {
                    a.push_back(1000);
                    break;
                }
            }
            
        }
        // for(int i:a)
        // {
        //     cout<<i<<endl;
        // }
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]>=a[i+1])
            sum=sum+a[i];
            else
            sum=sum-a[i];
        }
        cout<<sum+a[a.size()-1];
}