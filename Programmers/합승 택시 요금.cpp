#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    int answer = 1e9;
    int m[222][222];
    memset(m,111111,sizeof(m));
    for(int i=1;i<=n;++i) m[i][i]=0;
    for(int i=0;i<fares.size();++i){
        m[fares[i][0]][fares[i][1]]=fares[i][2]; m[fares[i][1]][fares[i][0]]=fares[i][2];
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            for(int k=1;k<=n;++k){
                m[j][k]=min(m[j][k],m[j][i]+m[i][k]);
            }
        }
    }
    for(int i=1;i<=n;++i) answer=min(answer,m[s][i]+m[i][a]+m[i][b]);
    return answer;
}
