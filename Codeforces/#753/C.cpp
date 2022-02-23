#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 
 
int main(void) {
	fast;
 
	int t; cin >> t;
	while (t--) {
		int N; cin >> N;
		vector<ll> A(N);
		for (int i = 0; i < N; ++i) cin >> A[i];
		if (N == 1) {
			cout << A[0] << '\n'; continue;
		}
		sort(A.begin(), A.end(), greater<ll>());
		if (N == 2) {
			cout << max(A.back(), A[0] - A[1])<<'\n'; continue;
		}
		if (A.back() < 0) {
			int res = A.back();
			A.pop_back();
			for (int i = 0; i < A.size(); ++i) A[i] -= res;
		}
 
		ll dif = A.back();
		for (int i = 0; i < A.size() - 1; ++i) {
			dif = max(dif, A[i] - A[i + 1]);
		}
 
		cout << dif << '\n';
	}
}
