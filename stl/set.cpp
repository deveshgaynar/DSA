#include<bits/stdc++.h>
using namespace std;
void explainset(){
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}
 
    //functionality of insert of vector
    //can be used also,that only increase 
    //efficiently

    // begin(),end(),rbegin()size()
    //empty()and swap( )are same as those of above

//{1,2,3,4,5}
auto it=st.find(3);
//{1,2,3,4,5}
auto it=st.find(6);
//{1,4,,5}
st.erase(5);//erase 5 take logarthmic time

int cnt=st.count(1);

auto it=st.find(3);
st.erase(it); //it take constant time

//{1,2,3,4,5}
auto it1=st.find(2);
auto it2=st.find(4);
st.erase(it1,it2);//after erase {1,4,5}{first,last}
//lower_bound and upper_bound function in same way
///as this is the syntax
auto it=st.lower_bound(2);

auto it=st.upper_bound(3);}