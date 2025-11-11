#include<bits/stdc++.h>
using namespace std;

//brute force
// int main(){
//     int arr[]={1,1,2,2,3,3,4,4};
//     set<int> s1;
//     int index=0;
//     for(auto i : arr){
//         s1.insert(i);
//     }
    
//     for(auto i : s1){
//         arr[index]=i;
//         index++;

//     }
//     for(auto i : arr){
//         cout << i<< " ";
//     }

// }

// optimal
int main(){
    int arr[]={1,1,2,2,2,3,3,4,4};
    // int k=1;
    int j=0;
    int i =1;
    for(i; i<8;i++){
        // if(arr[i]!=arr[j]){
        //     arr[k]=arr[i];
        //     j=i;
        //     k++;
        // }
        if(arr[i]!=arr[j]){
            arr[j+1]=arr[i];
            j++;
        }
    }
    for(auto in : arr){
        cout << in << " ";
    }
    cout << j;

}