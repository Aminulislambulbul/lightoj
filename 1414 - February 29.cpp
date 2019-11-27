#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,t,y1,y2,v1,v2,count=0,j;
    string m1,m2,c1,c2,month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cin>>t;
    for(i=0; i<t; i++){
        cin>>m1>>c1>>y1;
        cin>>m2>>c2>>y2;
        for(j=0; j<12; j++){
            if(m1 == month[j])
                v1=j;
            if(m2 == month[j])
                v2=j;
        }
         v1=((y1)/4)-((y1)/100)+((y1)/400);
        v2=((y2-1)/4)-((y2-1)/100)+((y2-1)/400);
        count=v2-v1;
        if(y1%400==0 || y1%4==0 && y1%100!=0){
        if(v1<=1 && y1<y2 || v1<=1 && y1==y2 && v2>1)
            count++;
        }
        if(y2%400==0 || y2%4==0 && y2%100!=0){
        if(v2>1 && y1<y2)
            count++;
        if(v2==1 && c2=="29,")
            count++;
        }
        cout<<"Case "<<i+1<<": ";
        cout<<count<<endl;
        count=0;

    }
}
