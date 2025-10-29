#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n!=0){
        int n1;
        cin >> n1;
        string s,l;
        cin >> s>> l;
        map<char,int> mpp1,mpp2;
        for(auto i : s){
            mpp1[i]++;
        }
        for(auto i : l){
            mpp2[i]++;
        }
        if(mpp1==mpp2) cout << "yes"<<endl;
        else cout <<"no"<<endl;
        n--;
    }
}