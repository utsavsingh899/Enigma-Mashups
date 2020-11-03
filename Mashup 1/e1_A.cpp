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

	string a, b;
	cin >> a >> b;

	reverse(b.begin(), b.end());

	if (a == b)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}