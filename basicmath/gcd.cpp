#include<bits/stdc++.h>
using namespace std;

int findgcd(int n1,int n2){

    int gcd=1;
for(int i=1;i<=min(n1,n2);i++){

    if(n1%i==0&&n2%i==0){
        gcd=i;
    }
}
return gcd;
}

int main(){
    int n1=20,n2=15;
    int gcd=findgcd(n1,n2);
    cout<<"gcd of "<<n1<<"and"<<n2<<"is"<<gcd<<endl;
}