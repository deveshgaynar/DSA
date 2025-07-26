#include<bits/stdc++.h>
using namespace std;
void explain(){
    map<int,int>map;
    map<int, pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;

    map[1]=2;
    map.emplace({3,1});
    map.insert({2,4});

    mpp[{2,3}]=10;

    for(auto it:mpp){
        cout<<it.first<<""<<it.second<<endl;
    }
    cout<<mpp[1];
    cout<<mpp[5];
    auto it=mpp.find(3);
    cout<<*(it).second
    auto it=map.find(5);

    //this is the syntax
    auto it = map.lower_bound(2);

    auto it=map.upper_bound(3);

    //erase, swap, size,empty, are same as above
}