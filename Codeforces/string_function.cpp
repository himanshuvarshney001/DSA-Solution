#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    string s;
    cin >> s;

    while (Q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back")
        {
            s.pop_back();
        }
        else if (cmd == "front")
        {
            cout << s.front() << endl;
        }
        else if (cmd == "back")
        {
            cout << s.back() << endl;
        }
        else if (cmd == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        else if (cmd == "print")
        {
            int pos;
            cin >> pos;
            // Optional validation:
            if(pos >= 1 && pos <= s.size())
            cout << s[pos - 1] << endl;
        }
        else if (cmd == "substr")
        {
            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (cmd == "sort")
        {
            int l, r;
            cin >> l >> r;
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (cmd == "reverse")
        {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + l - 1, s.begin() + r);
        }
    }

    return 0;
}
