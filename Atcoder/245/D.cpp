#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
 
int N, M;
 
int main(void) {
	fast;
 
	cin >> N >> M;
	vector<int> A(N + 1), C(N + M + 1);
	for (int i = 0; i < A.size(); ++i) cin >> A[i];
	for (int i = 0; i < C.size(); ++i) cin >> C[i];
 
	reverse(A.begin(), A.end()); reverse(C.begin(), C.end());
	vector<int> B;
	for (int i = 0; i <= M; ++i) {
		int dif = C[i] / A[0];
		B.push_back(dif);
 
		for (int j = 0; j < A.size(); ++j) {
			C[i + j] -= dif * A[j];
		}
	}
	reverse(B.begin(), B.end());
	for (int i = 0; i < B.size(); ++i) cout << B[i] << ' ';
}
