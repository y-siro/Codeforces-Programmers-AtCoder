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
 
int main(void){
    fast;
    int t;cin>>t;
    while(t--){
        int N; cin>>N;
        string ans;
        for(int i=0;i<N-2;++i){
            string s; cin>>s;
            if(ans.empty()) ans+=s;
            else{
                if(ans.back()==s.front()) ans+=s[1];
                else ans+=s;
            }
        }
        while(ans.size()<N) ans+='a';
        cout<<ans<<"\n";
        ans.clear();
    }
}
