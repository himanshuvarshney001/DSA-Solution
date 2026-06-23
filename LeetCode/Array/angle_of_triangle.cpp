#include <bits/stdc++.h>
using namespace std;
vector<double> internalAngles(vector<int> &sides)
{
    int a = sides[0];
    int b = sides[1];
    int c = sides[2];
    if (a < c - b || b < a - c || c < a - b)
        return {};
    double cosa_deg = (acos((b * b + c * c - a * a) / (2.0 * b * c)) * (180 / M_PI));
    double cosb_deg = ((acos((a * a + c * c - b * b) / (2.0 * a * c)) * (180 / M_PI)));
    double cosc_deg = ((acos((a * a + b * b - c * c) / (2.0 * a * b)) * (180 / M_PI)));

    // cout << cosa_deg << " " << cosb_deg << " " << cosc_deg << endl;

    double maxi = max(cosa_deg, max(cosb_deg, cosc_deg));
    double mini = min(cosa_deg, min(cosb_deg, cosc_deg));
    double mid = cosa_deg + cosb_deg + cosc_deg - mini - maxi;

    return {mini, mid, maxi};
}
int main()
{
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    vector<double> result = internalAngles(arr);
    for (double value : result)
    {
        cout << value << " ";
    }
}