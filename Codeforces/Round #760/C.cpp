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

ll gcd(ll a, ll b){
    while(b){
        ll r=a%b;
        a=b; b=r;
    }
    return a;
}

ll isbt(vector<ll> &A){
    ll f1=A[0], f2=A[1];
    for(int i=2;i<A.size();i+=2){
        f1=gcd(max(f1,A[i]),min(f1,A[i]));
    }
    for(int i=3;i<A.size();i+=2){
        f2=gcd(max(f2,A[i]),min(f2,A[i]));
    }
    bool c1=true,c2=true;
    for(int i=0;i<A.size();i+=2){
        if(A[i]%f2==0) c2=false;
    }
    for(int i=1;i<A.size();i+=2){
        if(A[i]%f1==0) c1=false;
    }
    if(c1) return f1;
    else if(c2) return f2;
    else return 0;
}

int main(void){
    fast;
    ll t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> A(n);
        for(int i=0;i<n;i++) {
            cin>>A[i];
        }
        cout<<isbt(A)<<"\n";
    }
}
