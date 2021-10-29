#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
#define For for(int i=0;i<n;i++)
#define lli long long int
#define li long int
#define lld long long double
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li t;
    cin>>t;
    while(t--){
        long long limit;
        cin>>limit;
        long a=0,b=1,c=1;
                for (int j=1;j<=limit;j++){
                        a=0,b=1;        
                for (int i=0;i<j;i++){
            cout<<c<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        c=1;
cout<<"\n";

    }
    }
    return 0;
    }