#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long 

int main(void) {
	fast;

	int t; cin >> t;
	while (t--) {
		int N; cin >> N;
		vector<int>A(N);
		for (int i = 0; i < N; ++i) cin >> A[i];
		string s; cin >> s;
		
		vector<int> blue, red;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'B') blue.push_back(A[i]);
			else red.push_back(A[i]);
		}
		sort(blue.begin(), blue.end());
		sort(red.begin(), red.end(),greater<>());

		bool flag = true;
		for (int i = 0; i < blue.size(); ++i) {
			if (blue[i] < i + 1) flag = false;
		}
		for (int i = 0; i < red.size(); ++i) {
			if (red[i] > N - i) flag = false;
		}
		if (flag) cout << "YES" << '\n';
		else cout << "NO" << '\n';

		blue.clear(); red.clear();
	}
}
