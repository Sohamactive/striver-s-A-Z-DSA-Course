//O(n^2)
#include<bits/stdc++.h>

using namespace std;
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b =temp;
}

void bubble_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int didswap =0;
        for(int j=0;j<=n-i-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            didswap =1;
        }
        if(!didswap) break; 
    }
}
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++){ cin >> arr[i];}
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0; 
}