#include<bits/stdc++.h>

using namespace std ;

int main(){
    //inputing array
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(auto i: arr){
        cout << i<<" ";
    }
    //preprocessing
    //greatest number which can be entered is 12
    int hash[12]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    //fetching
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }



}