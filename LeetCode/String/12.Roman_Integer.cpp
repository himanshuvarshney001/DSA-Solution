#include <bits/stdc++.h>
using namespace std;
// one approach
string intToRoman(int num)
{
    map<int, string> um;
    um[1000] = "M";
    um[900] = "CM";
    um[500] = "D";
    um[400] = "CD";
    um[100] = "C";
    um[90] = "XC";
    um[50] = "L";
    um[40] = "XL";
    um[10] = "X";
    um[9] = "IX";
    um[5] = "V";
    um[4] = "IV";
    um[1] = "I";
    string result = "";
    auto it = um.rbegin();
    while (it != um.rend())
    {
        if (it->first <= num)
        {
            result += it->second;
            num = num - it->first;
        }
        else
        {
            it++;
        }
    }
    return result;
}
// second approach
string introman(int num)
{
    string result="";
    vector<pair<int, string>> arr = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        for(auto &[value , symbol] : arr)
        {
            while(num>=value)
            {
                result+=symbol;
                num-=value;
            }
        }
        return result;
}
int main()
{
    int num;
    cout << "Enter the number=";
    cin >> num;
    string result = intToRoman(num);
    cout << result;
    return 0;
}