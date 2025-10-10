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
    int count =0;
    for(int i=1;i<alen;i++){
        if (arr[i]==0){
            arr[i]==1;
            count++;
        }
        if(arr[i-1]==1) continue;
        else if(arr[i-1]==0){
            count++;                
            arr[i-1]++;
        }
        else{
            count+=2;
            arr[i-1]+=2;
        }
        
        if(arr[i]==-1){
            if(arr[i-1]==-1) continue;
            else if(arr[i-1]==1){
                count+=2;
                arr[i]+=2;
            }

        }

    }
    cout << count << endl;
    }
    return 0;
    
}
