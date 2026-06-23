// forward list is mainly a singly linked list
// list is work as doubly linked list

#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l={1,2,3};
    forward_list<int> l1 = {4, 5, 6};
    // insert the element at the begin
    l.push_front(0);
    l.push_front(-1);

    // delete the first element
    l.pop_front();

    l.remove(10); // remove all node having 10

    l.assign({4, 5, 6}); // initilize the list with new items first clear then assign new items

    l.assign(l1.begin(), l1.end());// l assign by item of l1

    l.assign(5, 10);// assign 10 5 times in l list

    for(int i:l)
        cout << i << " ";
    return 0;
}