#include<bits/stdc++.h>
using namespace std;
void print(int n){
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
            if((n%i)!=i)
                cnt++;
            
        } 
if(cnt==2){cout<<"true";
}else {cout<<"false";
    }
    
}
}
int main(){
    int n;
    
    cin>>n;
    print(n);
}

