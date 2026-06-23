#include <bits/stdc++.h>
using namespace std;

class mother
{
public:
    mother(const string &mes)
    {
        cout << "Hello" << mes << endl;
    }
};
class father
{
public:
    father(const string &mes)
    {
        cout << "Hello" << mes << endl;
    }
};
class son : public father, public mother
{
public:
    son(const string &m, const string &mot, const string &fa) : mother(mot), father(fa)
    {
        cout << "Hello" << m << endl;
    }
};
int main()
{
    son o("Hiii", "hhhh", "jjk");
    // but in case string litterls we not require const in son class contructor is required only right value
    cout<<sizeof(char);
}