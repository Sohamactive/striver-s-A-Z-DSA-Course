#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    if(n==1) return ;
    int ds=0;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            ds++;
        }
    }

    bubble_sort(arr,n-1);
}
int main(){
    int arr[4]={4,3,2,1};
    bubble_sort(arr,4);
    
    for(auto i : arr){
        cout << i << " " ;
    }
}