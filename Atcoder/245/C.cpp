#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL)
#define ll long long
 
int N, K;
vector<int> A, B;
bool flag = true;		
 
int main(void) {
	fast;
 
	cin >> N >> K;
	A.resize(N); B.resize(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	for (int i = 0; i < N; ++i) cin >> B[i];
 
	bool a = true, b = true;
	for (int i = 0; i < N - 1; ++i) {
		int ac = 0, bc = 0;
		if (!a and !b) {
			flag = false; break;
		}
		if (a) {
			if (abs(A[i + 1] - A[i]) <= K) ac++;
			if (abs(B[i + 1] - A[i]) <= K) bc++;
 
		}
		if (b) {
			if (abs(A[i + 1] - B[i]) <= K) ac++;
			if (abs(B[i + 1] - B[i]) <= K) bc++;
		}
		if (ac) a = true;
		else a = false;
 
		if (bc) b = true;
		else b = false;
	}
	if (!a and !b) flag = false;
	if (flag)cout << "Yes";
	else cout << "No";
}
