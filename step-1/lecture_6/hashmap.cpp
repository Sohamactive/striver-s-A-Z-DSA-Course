#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    //pre commpute
    
    for(int i=0;i<n;i++){
    }
    for(auto i : mpp){
        cout << i.first<< " - " << i.second <<endl;
    }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number]<<endl;
    }
}