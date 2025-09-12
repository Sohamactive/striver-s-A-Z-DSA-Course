#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);q.push(2);q.push(3);q.push(4);
    cout << q.back()<<"   "<<q.front();
    q.pop();
    cout <<"\n"<< q.back() << "   " << q.front();
}