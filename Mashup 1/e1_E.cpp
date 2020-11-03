//Utsav
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, q;
	cin >> n >> q;

	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	sort(arr.begin(), arr.end(), greater<int>());

	vector<int> rank(n + 1, 0);
	while (q--) {
		int l, r;
		cin >> l >> r;

		rank[r]--;
		rank[l - 1]++;
	}

	for (int i = 1; i < n; ++i)
		rank[i] += rank[i - 1];

	sort(rank.begin(), rank.end(), greater<int>());

	int res = 0;
	for (int i = 0; i < n; ++i)
		res += rank[i] * arr[i];

	cout << res;

	return 0;
}