#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,solved,penalty,rank=1,count=1;
    cin >> size >> solved >> penalty;
    size--;
    while(size--)
    {
       count++;
       int solve, pen;
       cin >> solve >> pen;
       if (solved<solve)
       {
          solved = solve;
          penalty = pen;
          rank = count;
       }
       else if(solved==solve && penalty>pen)
       {
          solved = solve;
          penalty = pen;
          rank = count;
       }
    }
    cout <<"Rank 1 participant="<<rank<<endl;
    cout << solved << " " << penalty;
    return 0;
}