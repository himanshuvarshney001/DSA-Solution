#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    string str;
    cin >> str;
    deque<char> dq(str.begin(), str.end());
    long long int score = 0;
    while (!dq.empty())
    {
        char c = dq.front();
        dq.pop_front();
        if (c == 'V')
            score += 5;
        else if (c == 'W')
            score += 2;
        else if (c == 'X')
        {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (c == 'Y')
        {
            if (!dq.empty())
            {
                char ch = dq.front();
                dq.push_back(ch);
                dq.pop_front();
            }
        }
        else if (c == 'Z')
        {
            if (!dq.empty())
            {
                char ch = dq.front();
                if (ch == 'V')
                {
                    dq.pop_front();
                    score /= 5;
                }
                else if (ch == 'W')
                {
                    dq.pop_front();
                    score /= 2;
                }
            }
        }
    }
    cout << score << endl;
}