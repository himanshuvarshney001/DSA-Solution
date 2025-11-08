#include <bits/stdc++.h>
using namespace std;

// Pairs
void explainpairs()
{
    pair<int, int> a = {1, 2};
    cout << a.first << " " << a.second << endl;

    pair<int, pair<int, int>> b = {1, {2, 3}};
    cout << b.first << " " << b.second.first << " " << b.second.second << endl;
    // cout<<b.second<<endl  Wrong statement

    pair<int, int> c[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << c[0].first << " " << c[0].second << endl;
}
void explainvector()
{
    vector<int> v;
    // Method of vector
    v.push_back(1);
    v.emplace_back(2); // Faster than push_back()

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vec1 = {1, 2, 3, 4, 5}; // All values of vector intilized with 100
    vector<int> vec2(vec1);

    // iterator in vector
    for (vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (vector<int>::iterator it = vec1.end() - 1; it != vec1.begin() - 1; it--)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto i : vec1)
        cout << i << " ";

    // delete element
    vec1.erase(vec1.begin() + 1);
    cout << endl
         << "Delection is done" << endl;
    for (auto i : vec1)
        cout << i << " ";

    // delete multiple element
    cout << endl
         << "Delection of multiple element is done" << endl;
    // int this delection the start in included and ending is not included
    vec1.erase(vec1.begin() + 2, vec1.begin() + 4);
    for (auto i : vec1)
        cout << i << " ";
    cout << endl
         << "All elements are deleted....";
    vec1.erase(vec1.begin(), vec1.end());
    for (auto i : vec1)
        cout << i << " ";
    if (vec1.empty())
        cout << endl
             << "Vector is empty...." << endl;

    // insertion of element in vector
    cout << "Insert element in vector." << endl;
    vec1.insert(vec1.begin(), 1);          // [1]
    vec1.insert(vec1.begin() + 1, 2, 100); //[1,100,100]
    for (auto i : vec1)
        cout << i << " ";
    cout << endl;

    vector<int> copy(2, 50);
    vec1.insert(vec1.begin(), copy.begin(), copy.end()); //[50,50,1,100,100]

    vec1.size(); // 5

    vec1.pop_back(); // Delete the last element

    vec1.swap(copy); // swap the content of vector

    vec1.clear(); // clear the content of vector
}
void explainList()
{
    // Similar to vector, but the difference is that list allows efficient
    // insertion and deletion from both the front and the back (and even in the middle),
    // thanks to its doubly linked list structure.

    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);//{2,4}
    
    ls.push_front(5);//{5,2,4}
    ls.emplace_front(7);

    // for(int i=0;i<ls.size();i++)
    // cout<<ls{i}<<" "; you can not list iterate like that because it behave like a double linked list.
    for(auto i:ls)
    cout<<i<<" ";
    cout<<endl;
    for(auto it=ls.begin();it!=ls.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    // rest of all operation like insert,swap,erase same as vector.
}
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(5);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
}

void explainStack()
{
    //There is mainly use three operation
    // 1)push
    // 2)pop
    // 3)top
                                
    stack<int> st;
    st.push(1);
    st.push(2);//{2,1};
    st.push(3);//{3,2,1}
    st.emplace(4);//{4,3,2,1}
    
    cout<<st.top();//prints 4 st[2] is invalid

    st.pop(); //Delete top element {3,2,1}
    cout<<endl;
    st.size();//prints 3
    cout<<st.empty();//return true/false
    
    stack<int> st1,st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);// {1}
    q.push(2);//{1,2}
    q.emplace(3);//{1,2,3};

    q.back()+=5;
    cout<<endl<<q.back();//prints 5+3=8
    cout<<" "<<q.front();//prints 1
    q.pop();//{2,8}

    cout<<" "<<q.front();//print 2
    //size swap empty same as stack
}
void explainpq()
{
    //Behave just like stack we can store the element in pq priority wise higher element higher priority.
    priority_queue<int> pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(1);//{5,2,1}
    pq.push(8);//{8,5,2,1}

    cout<<endl<<pq.top();//prints 8
    
    pq.pop();//{5,2,1};

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(5);//{5}
    pq1.push(8);//{5,8}
    pq1.push(1);//{1,5,8};
    pq1.emplace(10);//{1,5,8,10}
    
    cout<<pq.top();//prints 1
}
void explainset()
{
    //Everything in sorted order and store the unique element
    set<int> st;
    st.insert(1);//{1}
    st.insert(2);//{1,2}
    st.insert(3);//{1,2,3}
    st.insert(2);//{1,2,3}
    st.emplace(4);//{1,2,3,4}

    auto it=st.find(1);// return the address of 1 in set
    auto it1=st.find(4);// not in and set so return st.end()

    st.erase(5);//simply erase the element 5
                // if Element are not present than not generate the error
    int cnt=st.count(1);//simply count in set count either 1 or 0

    //it takes constant time
    // cout<<endl<<*(it2); element deleted so that is not refer any element 
    auto it2 = st.find(3);
    if (it2 != st.end()) {
    cout << endl<<"Erasing: " << *it2 << endl;
    // st.erase(it2);
}

    
    auto it3=st.find(3);
    auto it4=st.find(2);
    st.erase(it3,it4);
    
    // upper_bound,lower_bound
}
void explainMultiset()
{
    //Everything is same as set
    //Only stores duplicate elements also
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.erase(1);//erase all 1's
    int cnt=ms.count(1);//count all ones in multiset

    ms.erase(ms.find(1));//delete single element
    // ms.erase(ms.find(1),ms.find(1)+2);

    //Rest all function same as set
    
}
void explainUset()
{
    unordered_set<int> st;
    //Everything same as set
    //only difference it is not stores in any 
    //particular order store randomly
    //it has better complexity
}
void explainMap()
{
    cout<<"Map.....";
    //store the {key,value} key always is unique,and store in map in sorted order
    map<int,int> mpp;
    map<pair<int,int>,int>mpp1;
    mpp[1]=2;
    mpp.insert({3,1});
    mpp.insert({5,1});
    // mpp.emplace({4,1});
    mpp1[{3,1}]=10;
    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mpp[1]<<" ";
    cout<<mpp[5];
    auto it =mpp.find(3);
    cout<<it->second;
    
    // erase,swap size,empty are same as above

}
void explainMultiMap()
{
    //everything same as map, only it can store multiple key
    //only mpp[key] cannot be used here
    multimap<int,int> mp;
}
void explainUnorderedMap()
{
    // store the key not duplicate and not in sorted order
}
int main()
{
    explainpairs();
    explainvector();
    explainList();
    explainStack();
    explainset();
    explainMultiset();
    explainUset();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    string str="123";//always in sorted order
    do
    {
        cout<<str<<endl;
    } while (next_permutation(str.begin(),str.end()));
    
}