#include<bits/stdc++.h>
using namespace std;
#define pb push_back



struct PriorityQueue{
    private:
    vector<int>A;
    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return 2*i+2;
    }

    void heapify_down(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        
        if(l < size() && A[l] < A[i])smallest = l;
        if(r < size() && A[r] < A[smallest]) smallest = r;
        if(smallest != i){
            swap(A[i],A[smallest]);
            heapify_down(smallest);
        } 
    }

    void heapify_up(int i)
    {
        if(i && A[parent(i)] > A[i]){
            swap(A[i], A[parent(i)]);
            heapify_up(parent(i));
        }
    }

    public:
    unsigned int size(){
        return A.size();
    }
    bool empty(){
        return size()==0;
    }
     
     void push(int key)
     {
         A.push_back(key);
         int index = size()-1;
         heapify_up(index);
     }
     void pop()
     {
         if(size()==0)return ;
         A[0] = A.back();
         A.pop_back();
         heapify_down(0);

     }
     int top()
     {
         if(size()==0)return 67676;
          return A.at(0);
     }

};

int main()
{
    int t;cin >>t;
    while(t--){
    PriorityQueue pq;
    
    int n,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;cin >> x;
        pq.push(x);
    }
    cin >> k;
    for(int i=0;i<k-1;i++)
    pq.pop();
    cout<<pq.top()<<"\n";
    }
}
