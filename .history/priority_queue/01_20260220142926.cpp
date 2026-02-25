/*
 - priority queue is a special type of queue where elements are accessed on basic of priority,not the insertion order
 - by default it has highest element priority
 - internally it is implemented using heap(CBT) and max heap by default ( largest element will be always on top)


*/

#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> pq_max; // (max heap)

    priority_queue<int,vector<int>,greater<int>> pq_min; // (min heap)

    pq_max.push(10);
    pq_max.push(10);
    pq_max.push(10);
    
}