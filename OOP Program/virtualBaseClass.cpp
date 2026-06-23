#include <bits/stdc++.h>
using namespace std;
class father
{
public:
    void display()
    {
        cout << "Father Sahab" << endl;
    }
};
class mother
{
public:
    void display()
    {
        cout << "Mother" << endl;
    }
};
// Solve amibuity in mulitple inheritance by three way
// 1. By virtual base class apply only diamond problem. there no  common base class.
// 2. by scopeResulation operator
// 3. by overriding function.
class child : public father, public mother
{
};
int main()
{
    child himanshu;
    //  first method using
    himanshu.father::display();

    return 0;
}
