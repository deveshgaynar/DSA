#include<bits/stdc++.h>
using namespace std;

// void print3(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i; j++){
//             cout<<" ";
//         }

//         for(int j=0; j<2*n -(2*i+1); j++){
//             cout<<"*";
//         }

//         for(int j=0;j<i; j++){
//             cout<<" ";
//         }
//      cout<<endl;
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
    for(int i=0; i<n; i++){
        for(int j=0;j<i; j++){
            cout<<" ";
        }

        for(int j=0; j<2*n -(2*i+1); j++){
            cout<<"*";
        }

        for(int j=0;j<i; j++){
            cout<<" ";
        }
     cout<<endl;
    }
}