#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste (1 <= t <= 100)
	int t;
	cin >> t;

	// Sequência de caracteres (1 <= |p| <= 1000)
	string p;

	while (t--) {
		cin >> p;

		std::map<char, int> m;

		int cont = -1;
		for (int i = 0; i < p.size(); i++) {
			if (m.count(p[i]) == 0) {
				m[p[i]] = 1;
				cont++;
			} else {
				if (m[p[i]] == 0) {
					m[p[i]]++;
					cont++;
				} else {
					m[p[i]]--;
					cont--;
				}
			}
		}

		if (cont < 0) {
			cout << 0 << endl;
		} else {
			cout << cont << endl;
		}

	}

	return 0;
}