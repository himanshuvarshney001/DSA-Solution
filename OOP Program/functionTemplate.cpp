// “Design a generic function template to perform operations like finding maximum and addition for different data types, including demonstration of function overloading and template specialization.”
#include<bits/stdc++.h>
using namespace std;
template<typename t>
t maximum(t a,t b)
{
    return a > b ? a : b;
}
template<typename t>
t maximum(t a,t b, t c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}
template<typename t>
t add(t a,t b)
{
    return a + b;
}
template<typename t1,typename t2>
auto add(t1 a, t2 b)
{
    return a + b;
}
int main()
{
    int maxi = maximum(2, 7);
    float fmaxi = maximum(2.8, 8.9);
    int addi=add(28,2);
    auto addf = add(28.8, 2);
    cout << maxi << " " << fmaxi << " " << addi << " " << addf << endl;
    return 0;
}