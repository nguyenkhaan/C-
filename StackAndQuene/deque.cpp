#include <bits/stdc++.h>
using namespace std; 
//stack: LIFO 
//queue: FIFO 
//deque: double end queue 
//size(), push_back(), push_front(), pop_front(), pop_back(), front(), back(). 
int main() 
{
    //deque (double - end queue) 
    deque<int> dq; 
    dq.push_back(-1); 
    dq.push_back(-2);
    dq.push_back(-3); 
    dq.push_front(1); 
    dq.push_front(2); 
    dq.push_front(3); 
    // cout<<dq.front();
    // cout<<dq.back(); 
    dq.pop_front(); 
    // cout<<"\n"<<dq.front()<<endl; 
    dq.pop_back(); 
    // cout<<dq.back(); 
    priority_queue<long> qq; 
    qq.

}