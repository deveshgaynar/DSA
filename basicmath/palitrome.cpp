#include<bits/stdc++.h>
using namespace std;

int palit(int n){

int revnum=0;
int dup=n;

while(n>0){
    int ld=n%10;
    n=n/10;

    revnum=(revnum*10)+ld;
}
if(dup==revnum){
    cout<<"palindrome number";
}
else{
    cout<<"not palindrome";
}

}


int main(){
    int n=7789;
    
    int digit=palit(n);

   
}