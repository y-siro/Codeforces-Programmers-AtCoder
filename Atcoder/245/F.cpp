#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
 
int N, M;
vector<int> A[202020], d;
queue<int> q;
 
int main(void) {
	fast;
 
	cin >> N >> M;
	d.resize(N);
	for (int i = 0; i < M; ++i) {
		int u, v; cin >> u >> v;
		A[v-1].push_back(u-1); d[u-1]++;
	}
	int cnt = N;
	for (int i = 0; i < N; ++i) if (!d[i]) q.push(i);
	while (!q.empty()) {
		cnt--;
		auto cur = q.front(); q.pop();
		for (int i = 0; i < A[cur].size(); ++i) {
			d[A[cur][i]]--;
			if (!d[A[cur][i]]) q.push(A[cur][i]);
		}	
	}
	cout << cnt;
}
