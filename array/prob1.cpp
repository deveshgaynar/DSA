#include<bits/stdc++.h>
using namespace std;
int findlargestelement(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    return large;
}

int main(){
    int arr1[]={2,5,1,3,0};
    int n=5;
    int large=findlargestelement(arr1,n);
    cout<<"the largest element in the arry is: "<<large<<endl;
}
