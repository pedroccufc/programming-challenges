#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste (1 <= T <= 10)
	int T;
	cin >> T;

	// Comprimento do array (1 <= N <= 10^5)
	int N;

	// Quantidade de valores únicos
	int K;

	std::vector<int> A;

	while (T--) {
		cin >> N >> K;

		A.resize(N);
		for (int i = 0; i < N; i++) {
			cin >> A[i];
		}

		queue<int> fila;
		map<int, int> subs;

		int min_size = N;
		for (int i = 0; i < N; i++) {

			subs[A[i]]++;
			fila.push(A[i]);

			if (subs.size() == K) {
				if (fila.size() < min_size)
					min_size = fila.size();

				subs[fila.front()]--;
				if (subs[fila.front()] == 0) {
					subs.erase(fila.front());
				}
				fila.pop();

				while (subs.size() == K) {
					if (fila.size() < min_size)
						min_size = fila.size();

					subs[fila.front()]--;
					if (subs[fila.front()] == 0) {
						subs.erase(fila.front());
					}
					fila.pop();
				}
			}
		}
		cout << min_size << endl;
	}

	return 0;
}