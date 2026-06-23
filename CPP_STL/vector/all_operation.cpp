#include <bits/stdc++.h>
using namespace std;
int main()
{
    // all type of declaration
    // empty vector
    // vector<int> v1;

    // vector with predefined size and default value
    // vector<int> v1(size, default_Value);

    // vector with values
    // vector<int> v1={1,2,3,4,5};

    // vector<int> v1(v2);here v2 is also a vector and copy to v1
    // vector<int> v1 = v2;

    // 2D vector;
    // vector<vector<int>> v1(row, vector<int>(col));

    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{6, 7, 8};
    for (int i : v1)
    {
        cout << i << endl;
    }

    // insertion at the end of the vector;
    v1.push_back(6);

    // delete last element
    v1.pop_back();

    // return first element;
    cout << (v1.front());
    cout << v1.back();

    v1.insert(v1.begin(), 100);
    vector<int> v = {1, 2, 5};

    v1.insert(v1.begin() + 2, 3, 10); // insert 10 three times at the index 2

    // insert another vector in v1 vector;
    v1.insert(v1.begin() + 2, v2.begin(), v2.end());

    cout << "final elements" << endl;
    cout << endl;
    for (int i : v1)
    {
        cout << i << endl;
    }
    // remove element at any position;
    v1.erase(v1.begin() + 1); // remove element at index 1
    v1.erase(v1.begin(), v1.begin() + 2);//Delete in range last index not include
    cout << endl<< "After remove element" << endl;
    for (int i : v1)
    {
        cout << i << endl;
    }

    // Delete all elements of the array
    cout << "Remove all elements" << endl;
    return 0;
    return 0;
}