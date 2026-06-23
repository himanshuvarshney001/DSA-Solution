#include<iostream>
using namespace std;
// class Test
// {
//     private:
//         int a,b,c;
//     public:
//         Test(int x,int y,int z):a(x),b(y),c(z)
//         {
            
//         }
//         void showData()
//         {
//             cout<<"\na="<<a<<" b="<<b<<" c="<<c;
//         }
// };
/*
int main()
{
    Test t1={11,22,33}; //Test t1(11,22,33);
    t1.showData();
    cout<<endl;
    return 0;

}
*/
class Test
{
    private:
        int a,b,c;
    public:
        Test(int a,int b,int c):a(a),b(b),c(c)
        {  
           
        }
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b<<" c="<<c;
        }
};
/*
int main()
{
    Test t1={11,22,33}; //Test t1(11,22,33);
    t1.showData();
    cout<<endl;
    return 0;

}
*/
/*
class Test
{
    private:
        int a,b,c;
        const int d;
    public:
        Test(int a,int b,int c,int d):a(a),b(b),c(c),d(d)
        {  
           
        }
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b<<" c="<<c;
            cout<<" d="<<d;
        }
};
int main()
{
    Test t1={11,22,33,100}; //Test t1(11,22,33,100);
    t1.showData();
    cout<<endl;
    return 0;

}
    */
/*
class Test
{
    private:
        int a,b,c;
        int &d=a;
    public:
        Test(int a,int b,int c):a(a),b(b),c(c)
        {  
           
        }
        void showData()
        {
            cout<<"\na="<<a<<" b="<<b<<" c="<<c;
            cout<<" d="<<d;
        }
};
int main()
{
    Test t1={11,22,33}; //Test t1(11,22,33);
    t1.showData();
    cout<<endl;
    return 0;

}
*/
// class Test
// {
//     private:
//         int a,b,c;
//         int &d;
//     public:
//         Test(int a,int b,int c):a(a),b(b),c(c),d(*(int*)malloc(4))
//         {  
//             d=200;
//         }
//         void showData()
//         {
//             cout<<"\na="<<a<<" b="<<b<<" c="<<c;
//             cout<<" d="<<d;
//         }
// };
int main()
{
    Test t1={11,22,33}; //Test t1(11,22,33);
    t1.showData();
    cout<<endl;
    return 0;

}