
#include<bits/stdc++.h>
using namespace std;

// void print3(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<n-i+1; j++){
//             cout<<j<<"";
//         }
//    cout<<endl;
//     }
// }







// int main(){
    
//     int n;
//     cin>>n;
// print3(n);
// }


int main(){
int n;
cin>>n;
for(int i=1; i<=n;i++){
  for(int j=1; j<=n-i+1; j++){
    cout<<j;
  }
  cout<<endl;
}
}

