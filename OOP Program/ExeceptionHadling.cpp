// types of errors
// 1.syntax error 
// 2.Logical errors
// 3.linker errors
// 4.Runtime errors

// In expection handling we more fococes on runtime errors

// like our program use hardware but on this is not available so escape the our progogram from crashing we use expertion handling .

// and second user is fool and it gives in input dividing funtion like and dividend is zero so in this case also crash the program .

// Array outof bound problem

// Exception handling is used to prevent runtime errors.

// p-1 Handle exception for array out of bound;
#include<bits/stdc++.h>
using namespace std;
int divide(int a,float b)
{
    if(b==0)
        throw 1;
    else if(int(b)!=b)
    {
        throw "Number is float";
    }
    else
        return a / b;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vect = {2, 2, 3, 4, 5};
    int index = 5;
    try{
        if(index>=5)
            throw 1;
        cout << arr[index];
    }
    catch(int i)
    {
        cout << "Exception out of bound" << endl;
    }
    try{
        divide(4, 2);
        divide(4, 6.7f);// if in one statement occur error the try block remaining statement are not executed.
    }
    catch(int i)
    {
        cout << "Divide by zero" << endl;
    }
    catch(const char* f)
    {
        cout << f<< endl;
    }
    catch(...)// default catch block that handle of tyep of errors.
    {
        cout << "default catch" << endl;
    }

    try{
        cout << vect.at(6);
    }
    catch(out_of_range)
    {
        cout << "Vector out of bound" << endl;
    }
    return 0;
}
