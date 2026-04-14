#include <bits/stdc++.h>
using namespace std;
int search(string pat, string txt)
{
    if (pat.size() <= txt.size())
    {
        if (pat == txt)
            return 1;
        return 0;
    }
    unordered_map<char,int> freq_txt;
    for (char i:txt)
    {
        freq_txt[i]++;
    }
    int count = freq_txt.size();
    // cout << count;
    int i = 0;
    int j = 0;
    int result = 0;
    while (j < pat.size())
    {
        if(freq_txt.find(pat[j])!=freq_txt.end())
        {
            freq_txt[pat[j]]--;
            if(freq_txt[pat[j]]==0)
                count--;
        }
        if(j-i+1==txt.size())
        {
            if(count==0)
                result++;
            if(freq_txt.find(pat[i])!=freq_txt.end())
            {
                if(freq_txt[pat[i]]==0)
                    count++;
                freq_txt[pat[i]]++;
                
            }
            i++;
        }
        j++;
    }
    return result;
}
int main()
{
    string pat, txt;
    cout << "Enter string=";
    cin >> pat;
    cout << "Enter the txt=";
    cin >> txt;
    int count = search(pat, txt);
    cout << count;
    return 0;
}