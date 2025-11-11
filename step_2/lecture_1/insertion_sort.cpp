//O(n^2)
#include<bits/stdc++.h>

using namespace std;
void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b =temp;
}

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);

            j--;
        }
    }
}
void insertion_sort_swap(int arr[],int n){
    for(int i=1;i<n;i++){
        // int didit = 0;
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            // didit=1;
            j--;
        }
        // if(!didit) break;
        arr[j+1]=key;
    }
}
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++){ cin >> arr[i];}
    insertion_sort_swap(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0; 
}