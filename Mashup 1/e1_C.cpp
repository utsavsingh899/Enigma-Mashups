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

	string s;
	cin >> s;

	unordered_map<char, int> mp;
	for (char x : s)
		mp[x]++;

	if (mp['4'] == 0 && mp['7'] == 0)
		cout << -1;
	else if (mp['4'] >= mp['7'])
		cout << 4;
	else
		cout << 7;

	return 0;
}