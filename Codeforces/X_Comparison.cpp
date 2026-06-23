#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string result = string(1, 'z'+1);
    if(str.size()<=1)
    {
        cout << str << endl;
    }
    else{
        for (int i = 1; i < str.size();i++)
        {
            string x = str.substr(0, i);
            string y = str.substr(i);

            sort(x.begin(), x.end());
            sort(y.begin(), y.end());

            result = min(result, x + y);
        }
        cout << result<<endl;
    }
    return 0;
}