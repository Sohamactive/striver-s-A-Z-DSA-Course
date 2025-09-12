#include<iostream>
using namespace std;
int main(){
    pair<int,int> p;
    p={1,1};
    cout<< p.first <<" "<< p.second<<" ";
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout <<arr[1].first<<" ";
    cout << make_pair(100,1).first;
    cout << make_pair(100,"hello").second;
    auto my_pair=make_pair(100,"hello");
    cout << "\n" << my_pair.first << " "<< my_pair.second;

    return 0;
}