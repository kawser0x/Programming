#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.pop_back();

    cout << v.front() << " ";
    cout << v.back() << " ";
    cout << v[1] << endl ;
    return 0 ;
}