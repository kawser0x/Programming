#include<bits/stdc++.h>
using namespace std ;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // 1st type  , 0 element declaration ;
    // vector<int> v ;  

    // 2nd type , declare with N element ;
    // vector<int> v(n) ;

    // 3rd type ,   declare N elements with value V.
    // vector<int> v(5,10) ;
    // for(int i=0; i<v.size(); i++){
    //     cout << v[i] << " " ;
    // }

    // 4th type , declare a vector into another vector .
    // vector<int> v(5,-1) ;
    // vector<int> v2(v);
    // for(int i=0; i<v2.size(); i++){
    //     cout << v2[i] << " " ;
    // }


    // 5th type , declare a vector using an array . 
    int arr[5] = {1,2,3,4,5};
    vector<int> v(arr,arr+5);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout <<'\n' << "Size : "<< v.size();


    return 0 ;
}