#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n,count=0;
//     cin >> n;
//     while(n!=0){
//         count+=1;
//         n/=10;
//     }
//     cout << count;
//     return 0;
// }

//avoid floating-point for precise integer operations because floating-point numbers have small approximation errors, which can lead 
//to wrong results. Integer-based solutions are exact and safe
int countDigits(int n){
    if(n==0) return 1; // special case
    n = abs(n);    // handles negative integer
    return (int)log10(n) + 1;
}

int main(){
    int n;
    cout  << "Enter a number ";
    cin >> n;
    cout << "\nNumber of digits = " << countDigits(n);
    return 0;

}