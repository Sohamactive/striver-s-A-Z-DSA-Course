#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n!=0){
        int a,b,c,d;
        cin >> a >> b>>c>>d;
        if(a==b && b==c && c==d && a==d )cout << "yes"<<endl;
        else cout <<"no"<<endl;
        n--;
    }
}