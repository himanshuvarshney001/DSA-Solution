#include <bits/stdc++.h>
using namespace std;
class testResult
{
private:
    int roll_no;
    int right;
    int wrong;
    int rightWeight;
    int wrongWeight;
    int score;

public:
    void set_value(int roll, int ri, int wrong, int rightW, int wrongW)
    {
        roll_no = roll;
        right = ri;
        this->wrong = wrong;
        rightWeight = rightW;
        wrongWeight = wrongW;
        score = rightWeight * right - wrongWeight * wrong;
    }
    void display()
    {
        cout << "Roll no is=" << roll_no << endl;
        cout << "Right question=" << right << endl;
        cout << "Wrong question=" << wrong << endl;
        cout << "Weightage of Right question=" << rightWeight << endl;
        cout << "Weightate of wrong quesion=" << wrongWeight << endl;
        cout << "Your net score is = " << score << endl;
    }
    friend void so(testResult arr[], int);
    friend bool cmp(testResult, testResult);
};
bool cmp(testResult a, testResult b)
{
    return a.score > b.score;
}
void so(testResult arr[], int n)
{
    sort(arr, arr + n, cmp);
}
int main()
{
    testResult obj[3];
    obj[0].set_value(1, 10, 2, 10, 2);
    obj[1].set_value(2, 80, 2, 10, 2);
    obj[2].set_value(3, 120, 2, 10, 2);

    for (int i = 0; i < 3; i++)
    {
        obj[i].display();
    }
    cout << "After sorting---------" << endl;
    so(obj, 3);
    for (int i = 0; i < 3; i++)
    {
        obj[i].display();
    }
    return 0;
}