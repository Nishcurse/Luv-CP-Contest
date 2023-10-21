/*"Monk and his love for prime" By NishKarsH */
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main () {
    string s;cin>>s;
    long long int sumu = 0,suml=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            sumu+=(int(s[i])-32);
        }else{
            suml+=((int)s[i]+32);
        }
    }
    if(isPrime(abs(sumu-suml))) {
        cout<<1;
    }else{
        cout<<0;
    }
    return 0;
}