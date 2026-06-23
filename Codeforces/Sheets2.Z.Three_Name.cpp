// Given two numbers Kand S. Determine how many different values of X,Yand Z such that (0≤X,Y,Z≤K) and X+Y+Z=S

// input 2,1 
// output 3

// input 9,4
// output 15
#include <iostream>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;

    int count = 0;

    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            if (z >= 0 && z <= k)
                count++;
        }
    }

    cout << count;
    return 0;
}
