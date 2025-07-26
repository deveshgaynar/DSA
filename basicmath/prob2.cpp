#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){

int cnt=0;

while(n>0){

cnt =cnt+1;

n=n/10;

}
return cnt;
}


int main(){
    int n=7789;
   int digit= countdigit(n);

    cout<<"n: "<<n<<endl;
    cout<<"number of digits n:"<<digit<<endl;
    return 0;
}