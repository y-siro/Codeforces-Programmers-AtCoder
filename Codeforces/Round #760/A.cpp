#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define vc vector
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
 
int t;
 
int main(void){
    fast;
    cin>>t;
    while(t--){
        vector<int> v(7);
        for(int i=0;i<7;++i) cin>>v[i];
        int a,b,c;
        a=v[6]-v[5];
        b=v[6]-v[4];
        if(a+b+(v[6]-v[3])==v[6]) c=v[2];
        if(a+b+(v[6]-v[2])==v[6]) c=v[3];
 
        cout<<a<<' '<<b<<' '<<c<<"\n";
    }
}
