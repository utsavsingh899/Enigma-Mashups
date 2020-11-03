//Utsav
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<bool> primes(1e6 + 5, true);

void precompute() {

	primes[0] = false;
	primes[1] = false;

	for (int i = 2; i * i <= primes.size(); ++i)
		if (primes[i])
			for (int j = i * i; j <= primes.size(); j += i)
				primes[j] = false;
}

void solve() {

	int n;
	cin >> n;

	int t = sqrt(n);

	cerr << t << '\n';

	if (n == 1 || t * t != n)
		cout << "NO\n";
	else
		cout << (primes[t] ? "YES\n" : "NO\n");

	return;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	precompute();

	int t;
	cin >> t;

	while (t--)
		solve();

	return 0;
}