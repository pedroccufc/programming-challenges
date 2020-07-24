#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste (1 <= T <= 100)
	int T;
	cin >> T;

	// Sequência de 0's e 1's
	string S;

	// Número de elementos consecutivos que podem ser alterados
	int K;

	while (T--) {
		cin >> S >> K;

		int count = 0;
		bool tem_zero = false;
		for (int i = 0; i < S.size(); i++) {
			if (i <= (S.size() - K)) {
				if (S[i] == '0') {
					for (int j = i; j < i+K; j++) {
						S[j] = S[j] == '0' ? '1' : '0';
					}
					count++;
				}
			} else {
				for (int j = i; j < S.size(); j++) {
					if (S[j] == '0') {
						tem_zero = true;
						break;
					}
				}
				if (tem_zero) {
					cout << -1 << endl;
					break;
				} else {
					cout << count << endl;
					break;
				}
			}
		}
	}

	return 0;
}