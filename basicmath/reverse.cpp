#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cout<<"write n:";
//     cin>>n;
//     int revnum=0;
//     while(n>0){
//         int rev=n%10;
//         revnum=(revnum*10)+rev;
//         n=n/10;
//     }
//     cout<<revnum;
// }

int main(){
    int n=7789;
    int revnum=0;
    
while(n>0){
    int last=n%10;
    n=n/10;
    revnum=(revnum*10)+last;
}
  cout<<revnum;
}