#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
 
int main(void) {
	int N; cin >> N;
	vector<int> A(N);
	bool check[2020];
	memset(check, false, sizeof(check));
 
	for (int i = 0; i < N; ++i) {
		cin >> A[i]; check[A[i]] = true;
	}
	for (int i = 0; i < 2020; ++i) {
		if (!check[i]) {
			cout << i; return 0;
		}
	}
}
