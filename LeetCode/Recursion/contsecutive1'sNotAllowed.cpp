#include<bits/stdc++.h>
using namespace std;
void sequence(string &seq,vector<string> &result,int n)
{
    
    if(seq.size()>=n)
    {
        result.push_back(seq);
        return;
    }
    seq+='0';
    sequence(seq,result,n);
    seq.pop_back();
    if((seq.size()>0 && seq.back()!='1') || seq.size()==0)class Solution {
public:
    bool valid(string& str) {
        int count = 0;
        for (char ch : str) {
            if (ch == '(')
                count++;
            else if (ch == ')')
                count--;
            if (count < 0)
                return false;
        }
        return count == 0;
    }
    void sequence(string& seq, vector<string>& result, int n,int &open,int &close) {
        if (seq.size() >= 2*n) {
            if (valid(seq))
                result.push_back(seq);
            return;
        }
        if(open>n || close>n || close>open)
        return;
        seq += '(';
        open++;
        sequence(seq, result, n,open,close);
        seq.pop_back();
        open--;
        seq += ')';
        close++;
        sequence(seq, result, n,open,close);
        seq.pop_back();
        close--;
    }
    vector<string> generateParenthesis(int n) {
        string seq = "";
        vector<string> result;
        int open=0,close=0;
        sequence(seq, result, n,open,close);
        return result;
    }
};
    {
        seq+='1';
        sequence(seq,result,n);
        seq.pop_back();
    }
    else return;
}
int main()
{
    int n;
    cout<<"Enter the value=";
    cin>>n;
    vector<string> result;
    string seq="";
    sequence(seq,result,n);
    for(string ch:result)
    {
        cout<<ch<<" ";
    }
    return 0;
}