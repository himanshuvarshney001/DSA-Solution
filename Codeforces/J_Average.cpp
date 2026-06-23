#include<bits/stdc++.h>
using namespace std;
double avg(vector<double> &vect)
{
    double sum = 0;
    for (float i:vect)
    {
        sum += i;
    }
    return sum/vect.size();
}
int main()
{
    int size;
    cin >> size;
    vector<double> vect(size);
    int i = 0;
    while(size--)
    {
        cin >> vect[i];
        i++;
    }
    float average = avg(vect);
    cout << fixed << setprecision(7) << average << endl;
    return 0;
}