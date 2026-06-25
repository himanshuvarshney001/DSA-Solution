#include<iostream>
using namespace std;
void binaryCon(int n)
{
    if(n<=1)
            {
                cout<<n;
            return;}
    binaryCon(n / 2);
    if(n%2==0)
        cout << 0;
    else
        cout << 1;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        binaryCon(a);
        cout<<endl;
    }
    return 0;
}