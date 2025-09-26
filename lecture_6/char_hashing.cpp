#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    cin >> str1;

    // int hash[256]={0};
    // for(auto i : str){
    //     hash[int(i)]+=1;
    // }

    unordered_map<char,int> mpp;
    for(auto i : str1){
        mpp[i]++;
    }
    for(auto i: mpp){
        cout << i.first << " - " << i.second << endl ;
    }

}