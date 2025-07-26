#include<bits/stdc++.h>
using namespace std;
int countdigits(int n){
    // Initialize a counter variable
    // 'cnt' to store the count of digits.
    int cnt = 0;
    // While loop iterates until 'n'
    // becomes 0 (no more digits left).
    while(n > 0){
        // Increment the counter
        // for each digit encountered.
        cnt = cnt + 1;
        // Divide 'n' by 10 to
        // remove the last digit.
        n = n / 10;
    }
    // Return the
    // count of digits.
    return cnt;
}


int main(){
    int n=12345;

    cout<<"n:"<<n<<endl;
    int digits= countdigits(n);
    cout<<"number of digits in n:"<<digits<<endl;
    return 0;

}