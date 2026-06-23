// function template is technique for implementing the generic programming. in function template we make function that is work on multiple type of data. not specific that is reduct the code duplication.
// syntax for function template template<typename c> here c is placeholder used as data type in funciton.
#include<bits/stdc++.h>
using namespace std;
template<typename t>
void bubbleSort(vector<t> &vect)
{
    for (int i = 0; i < vect.size();i++)
    {
        for (int j = 0; j < vect.size() - i-1;j++)
        {
            if(vect[j]>vect[j+1])
            {
                swap(vect[j+1], vect[j]);
            }
        }
    }
}
int main()
{
    vector<int> vect = {3, 4, 1, 0, 1};
    bubbleSort(vect);
    for(auto i:vect)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<float> vect1 = {1.9, 2, 0, 1.3, 0.2};
    bubbleSort(vect1);
    for(auto i:vect1)
    {
        cout << i << " ";
    }
    return 0;
}
