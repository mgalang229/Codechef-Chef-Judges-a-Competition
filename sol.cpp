/**
 *	author: jasonpogi
 *	created: 14.07.2020 15:49:38
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int a[100], b[100], n;
		cin >> n;
		int alice_max = 0, bob_max = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			alice_max = max(alice_max, a[i]);
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			bob_max = max(bob_max, b[i]);
		}
		int alice = 0, bob = 0;
		for (int i = 0; i < n; i++) {
			alice += a[i];
		}
		for (int i = 0; i < n; i++) {
			bob += b[i];
		}
		int final_alice = abs(alice - alice_max);
		int final_bob = abs(bob - bob_max);
		if (final_alice < final_bob) cout << "Alice";
		else if (final_alice > final_bob) cout << "Bob";
		else cout << "Draw";
		cout << '\n';
	}
	return 0;
}
