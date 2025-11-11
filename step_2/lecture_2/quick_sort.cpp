#include<bits/stdc++.h>
using namespace std;

int part(int arr[],int low,int high){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<= pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
int qs(int arr[],int low,int high){
    if(low<high){
        int partition = part(arr,low,high);
        qs(arr,low,partition-1);
        qs(arr,partition+1,high);
    }
    return 1;
}

int main(){
    int arr[] = {4,6,2,5,7,9,1,3};
    qs(arr,0,7);
    for(auto i : arr){
        cout << i << " ";
    }
}