#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string addBinary(string& s1, string& s2){
    string result = "";
		int i = s1.size() - 1;
		int j = s2.size() - 1;
		while (i >= 0 && j >= 0)
			{
			result += char((s1[i]-'0') + (s2[j]-'0') + '0');
			i--;
			j--;
		}
		while (i >= 0)
			{
			result += s1[i];
			i--;
		}
		while (j >= 0)
			{
			result += s2[j];
			j--;
		}
		i = 0;
		int carry = 0;
		while (i<result.size())
			{
			int sum = (result[i] - '0') + carry;
			carry = sum / 2;
			result[i] = (sum % 2) + '0';
			i++;
		}
		if (carry)
			result += (carry + '0');
		reverse(result.begin(), result.end());
		i=0;
		while(i<result.size() && result[i]=='0')
		i++;
		return (i == result.size()) ? "0" : result.substr(i);
}
int main()
{
    string s1="1101";
    string s2="111";
    string result=addBinary(s1,s2);
    cout<<result;
    return 0;
}