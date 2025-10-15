#include<bits/stdc++.h>
using namespace std;
 int lengthOfLastWord(string s) {
        int count=0,space=2,i=s.size()-1;
        bool flag=true;
        while(space!=0 && i>=0)
        {
            if(s[i]==' ' && flag)
            {
                flag=false;
                space--;
                if(count>0)
                break;
            }
            else if(s[i]!=' ')
            {
                count++;
                flag=true;
            }
            i--;
        }
        return count;
    }
int main()
{
    string str;
    cout<<"Enter the string=";
    getline(cin,str);
    cout<<lengthOfLastWord(str);
}