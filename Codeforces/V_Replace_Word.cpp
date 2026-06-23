#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string egy= "";
    string result = "";
    bool flag = true;
    int i = 0;
    int j = 0;
    while(j<str.size())
    {
        egy += str[j];
        if(egy.size()==5)
        {
            if(egy=="EGYPT")
            {
                result += " ";
                egy.clear();
            }
            else{
                result += egy[0];
            }
            egy.erase(0, 1);
        }
        j++;
    }
    result += egy;
    cout << result << endl;
    return 0;
}