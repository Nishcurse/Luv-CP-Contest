/*GPL by Noisuue*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int in;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    in t;
    cin >> t;
    while (t--)
    {
        in n,deckun=0;cin>>n;
        string s;cin>>s;
        for(int i=0;i<n;i++){
            if(s[n-i-1]=='1'){
                deckun += 1*(long long int)pow(2,i);
            }else{
                continue;
            }
        }
        cout<<deckun<<"\n";
    }
}