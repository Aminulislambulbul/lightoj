#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

string s, subs;
int b[1000005];

void kmpPreprocess()
{
    int m=subs.size();
    int i=0, j=-1;

    b[0]=-1;
    while(i<m)
    {
        while(j>=0 && subs[i]!=subs[j])
            j = b[j];

        i++;
        j++;
        b[i]=j;
    }
}

int kmp()
{
    int i=0, j=0, count=0;
    int n = s.size();
    int m = subs.size();

    kmpPreprocess();
    while (i<n)
    {
        while (j>=0 && s[i]!=subs[j])
            j=b[j];

        i++;
        j++;

        if (j==m)
        {
            count++;
            j=b[j];
        }
    }
    return count;
}


int main()
{
    int t, k=0;
    cin >> t;
    while(t--){
        cin >> s >> subs;
        cout << "Case " << ++k << ": " << kmp() << endl;
    }

    return 0;
}
