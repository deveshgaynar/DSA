#include<bits/stdc++.h>
using namespace std;
void explainmultimap(){
    //everything same as map ,only it can store multiple keys
    //only mpp [key]cannot be used here
}


void explainunorderedmap(){
    // same as set and unordered set differance

}


bool comp(<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;
    //they are same

    if(p1.first>p2.first)return true;
    return false;
}

void explainextra(){
    sort(a,a+n);
    sort(v.begin(),end());

    sort(a+2,a+4);

    sort(a,a+n, greater<int>);

    pair<int,int>a[]={{1,2},{2,1},{4,1}};

    //sort it according to second element
    //if second element is same,then sort
    //it according to first element but in descending

    sort(a,a+n,comp);
    //{4,1},{2,1,{1,2}};

int num=7;
int cnt=__builtin_popcount();

long long num=165786578687;
int cnt=__builtin_popcountll();


string s="123";
sort(s.begin(),s.end());

do{
    cout<<s<<endl;
}while(next_permutation(s.begin(),s.end()));

int maxi=*max_element(a,a+n);



}




