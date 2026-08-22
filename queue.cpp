//problema A. Queue on Bus Stop
//https://codeforces.com/contest/712079/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {

    int size=0, groups=0;
    
    cin>>groups>>size;

    vector<int>grupos(groups);

    for(int i=0;i < grupos.size();i++){

        cin>>grupos[i];


    }

    int contador=1;

    int bus=0;

    for (int j=0;j<grupos.size();j++){

        bus=bus+grupos[j];

        if(bus>size){

            contador=contador+1;

            bus=0;

            j--;

        };

    }

    cout<<contador;

    return 0;

}
