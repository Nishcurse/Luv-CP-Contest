/*"Too Lazy to name the question" By Nishkarsh */
#include <bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    int c;
    for(int i=2;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            c=i;
            break;
        }
    }
    return c;
}
int main() {
    int a,b,c,thnum;
    cin>>a>>b>>c;
    for(int i=2; c>0;i++){
        if(i%a==0 || i%b==0){
            c--;
            thnum = i;
        }
    }
    int step;
    if(thnum%a==0 && thnum%b==0){
        step = lcm(a,b);
    }else if(thnum%a==0){
        step = a;
    }else{
        step = b;
    }
    while(thnum>=0){
        cout<<thnum<<" ";
        thnum -= step ;
    }
    return 0;
}