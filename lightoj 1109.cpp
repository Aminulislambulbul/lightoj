#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ans{
    ll x,y;
};
bool cmp(ans a,ans b){
    if(a.x==b.x){
        return a.y > b.y;
    }
    else{
        return a.x < b.y;
    }
}
int main(){
    ans data[100];
    ll nm,cnt=0;
    for(ll i=0; i<1000; i++){
        for(ll j=1; j<i+1; j++){
            if((i+1)%j==0){
                cnt++;
            }
            data[i].x=cnt;
            data[i].y = i+1;
            cnt=0;
        }
    }
    sort(data,data+1000,cmp);
    cin>>nm;
    ll tst,cas=0;
    while(nm--){
         cin>>tst;
         cout<<"Case "<<++cas<<": "<<data[tst-1].y<<endl;
    }
    return 0;
}
