/*Jiya's Squence By Nishuu */
#include <bits/stdc++.h>
typedef long long int in;
using namespace std;
int main() {
    in t;cin>>t;
    while(t--){
        in c,mplt=1,p;cin>>c;
        for(int i=0;i<c;i++){
            cin>>p;
            mplt *= p;
        }
        cout<<mplt<<"\n";
        if((mplt%10)==2 || (mplt%10)==3 || (mplt%10)==5){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}