#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(3);
    dq.emplace_front(4);
    for(auto it : dq) cout << it <<" ";
    sort(dq.begin(),dq.end());
    cout <<"\n";
    for(auto it : dq) cout << it <<" ";
    return 0;
}