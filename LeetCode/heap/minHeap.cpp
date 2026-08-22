#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class heap{
    private:
        vector<int> pq;
    public:
    void push(int num)
    {
        pq.push_back(num);
        int index=pq.size()-1;
        while(index>0)
        {
            int parent=((index-1)/2);
            if(pq[index]<pq[parent])
            {
                swap(pq[index],pq[parent]);
                index=parent;
            }
            else break;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"Heap is empty"<<endl;
            return;
        }
        pq[0]=pq.back();
        pq.pop_back();
        int i=0;
        int size=pq.size();
        while(true)
        {
            int leftIndex=2*i+1;
            int rightIndex=2*i+2;
            int smallest=i;
            if(leftIndex<size && pq[leftIndex]<pq[smallest])
            {
                smallest=leftIndex;
            }
            if(rightIndex<size && pq[rightIndex]<pq[smallest])
            smallest=rightIndex;
            if(i!=smallest)
            {
                swap(pq[i],pq[smallest]);
                i=smallest;
            }
            else break;
        }
    }
    int size()
    {
        return pq.size();
    }
    int top()
    {
        return pq[0];
    }
    bool empty()
    {
        return pq.size()==0;
    }
};
int main()
{
    heap pq;

pq.push(10);
pq.push(20);
pq.push(30);
pq.push(40);
pq.push(50);

while(!pq.empty())
{
    cout << pq.top() << " ";
    pq.pop();
}

}