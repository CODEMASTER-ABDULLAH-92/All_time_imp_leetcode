// 🚀 What is a deque?
//     - Deque = Double-Ended Queue
//     - It’s a dynamic sequence container like vector, but you can efficiently add/remove elements from both ends.

// Supports:
//     - push_back() / pop_back() ✅
//     - push_front() / pop_front() ✅


#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);

    dq.push_front(5);
    dq.push_front(10);

    auto it = dq.begin();
    advance(it,2);
    dq.insert(it,40);


    for(auto it: dq){
        cout<<it<<" ";
    }

    dq.pop_front();
    dq.pop_back();

    for(auto it = dq.begin(); it != dq.end(); it++){
        cout<<"\n "<<*it;
    }
     return 0;
}