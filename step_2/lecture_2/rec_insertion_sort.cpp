#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int i,int n){
    if(i==n) return ;
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }

    insertion_sort(arr,i+1,n);
}
int main(){
    int arr[4]={4,3,2,1};
    insertion_sort(arr,0,4);
    
    for(auto i : arr){
        cout << i << " " ;
    }
}