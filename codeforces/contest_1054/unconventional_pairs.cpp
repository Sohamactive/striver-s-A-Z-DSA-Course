#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int test=0;test<tc;test++){
    int alen;
    cin >> alen;
    int arr[alen];
    for(int i=0;i<alen;i++){
        cin >> arr[i];
    }
    sort(arr,arr+alen);
    int maximum=0;
    for(int i=1;i<alen;i+=2){
        maximum=max(maximum,(arr[i]-arr[i-1]));
    }
    cout<<"\n" << maximum << "\n\n";
    }
    return 0;
}
