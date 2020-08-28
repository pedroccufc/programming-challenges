#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	std::vector<int> soma_primos;

	soma_primos.push_back(-1);
	soma_primos.push_back(-1);

	for (int i = 2; i < 1e6; i++) {
		int count = i/7;
		int resto = i%7;

		if (resto > 0) {
			if (resto%2 == 0 && resto > 2) {
				count += 2;
			} else {
				count++;
			}
		}
		soma_primos.push_back(count);
	}

	// Número de casos de teste (1 <= T <= 100)
	int T;
	cin >> T;

	while (T--) {
		// Valor de entrada (1 <= X <= 10^6)
		int X;
		cin >> X;

		cout << soma_primos[X] << endl;
	}

	return 0;
}