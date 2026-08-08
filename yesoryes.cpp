//problema 1703A yesoryes
//https://codeforces.com/problemset/problem/1703/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cant=0;

    cin>>cant;

    for(int i=0;i<cant;i++){

        string s="noo";

        cin>>s;

        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::toupper(c);
        }); 

        if(s=="YES"){

            cout<<"YES"<<endl;

        }

        else{

            cout<<"NO"<<endl;
        }

    }

    return 0;

    }
    

