//problema A save luke
//https://codeforces.com/contest/624/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){

    cout<<setprecision(20)<<fixed;

    setprecision(10);

    int d,l,v1,v2;
    cin>>d>>l>>v1>>v2;

    float ans = 1.0*(l-d)/(v1+v2);

    cout<<ans<<endl;

    return 0;

}

//int n; 2e9 64 bits
//long long n; 4e18 128
//char c; //caracter
//string s; //texto s[i] indexado 0
//vector<tipo de dato> vector<int> v(tamaño)
