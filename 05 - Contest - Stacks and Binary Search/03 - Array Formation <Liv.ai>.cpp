#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de inteiros no array (1 <= N <= 10^6)
	int N, input;

	// Sequência de números (2 <= A_i <= 10^6)
	std::vector<int> A;

	std::stack<int> pilha;
	std::queue<int> fila;

	cin >> N;

	for (int i = 0; i < N; i++) {

		cin >> input;

		if (input <= 1) {
			pilha.push(input);
		} else {
			bool primo = 1;
			int divisor = 2;

			while (primo == 1 && divisor <= sqrt(input)) {
				if ((input % divisor) == 0) {
					primo = 0;
				} else {
					divisor++;
				}
			}

			if (primo) {
				fila.push(input);
			} else {
				pilha.push(input);
			}
		}
	}

	while (!fila.empty()) {
		cout << fila.front() << " ";
		fila.pop();
	}
	cout << endl;

	while (!pilha.empty()) {
		cout << pilha.top() << " ";
		pilha.pop();
	}
	cout << endl;

	return 0;
}