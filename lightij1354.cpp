#include<bits/stdc++.h>
using namespace std;

int bin(char cc[],int a,int b){
   int i,j,p=1,sum=0;
   for(i=b; i>=a; i--){

     if(cc[i]=='1'){
       sum=sum+p;
     }
     p=p*2;
   }
   return sum;
}

int intconv(char cv[], int a, int b){
   int i,j,count=1,p,sum=0;
   for(i=b; i>=a; i--){
     p = cv[i];
     p = p - 48;
     sum = sum + p * count;
     count = count * 10;
   }
   return sum;
}

int main(){

   int t,i,j,c=0,ara[100],ar[100],num[10],m, k=1;
   cin>>t;
   for(i=1; i<=t; i++){
        char a[100],b[100];
     cin>>a;
     cin>>b;
   int c=0;
     for(j=0; j< strlen(a); j++){
       if(a[j]=='.'){
         ara[c]=j;
         c++;
       }
     }
     num[1]= intconv(a,0,ara[0]-1);
     num[2]= intconv(a,ara[0]+1,ara[1]-1);
     num[3]= intconv(a,ara[1]+1,ara[2]-1);
     num[4]= intconv(a,ara[2]+1,strlen(a)-1);
    c=0;
        for(j=0; j< strlen(b); j++){
       if(b[j]=='.'){
         ar[c]=j;
         c++;
       }
     }

     int mim[10];
     mim[1]=bin(b,0,ar[0]-1);
     mim[2]=bin(b,ar[0]+1,ar[1]-1);
     mim[3]=bin(b,ar[1]+1,ar[2]-1);
     mim[4]=bin(b,ar[2]+1,strlen(b)-1);
     int v=0;
     for(j=1; j<5; j++){
       if(mim[j] != num[j]){
         v++;
       }

     }

       cout<<"Case "<<i<<": ";
       if(v==0)
       cout<<"Yes"<<endl;
       else cout<<"No"<<endl;


   }
}
