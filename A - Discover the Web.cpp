#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, i,counter =1,top=1,j;
    char c[1000];
    string s[1000];
    s[0]="http://www.lightoj.com/";
    cin>>t;
    for(i=0; i<t; i++){
        cout<<"Case "<<i+1<<":"<<endl;
        counter =1;
        top=1;
        while(1){
            cin>>c;
            if(c[0]=='V'){
                cin>>s[counter];
                counter++;
                if(counter>top)top = counter;
                cout<<s[counter-1]<<endl;
            }

            else if(c[0]=='B'){
                if(counter>1){
                    cout<<s[counter-2]<<endl;
                    counter--;
                }
                else{
                    cout<<"Ignored"<<endl;
                }
            }

            else if(c[0]=='F'){
                if(top>counter){
                    cout<<s[counter]<<endl;
                    counter++;
                }
                else{
                    cout<<"Ignored"<<endl;
                }
            }

            else break;
        }
    }
}
