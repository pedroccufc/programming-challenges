#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Quantidade de números (1 <= N <= 10^5)
	int N;

	// Quantidade de elementos a serem removidos (1 <= K <= N)
	int K;

	std::vector<ll> A;
	std::vector<ll> maximus;

	std::stack<ll> pilha;
	std::queue<ll> fila;

	cin >> N >> K;

	A.resize(N);
	maximus.resize(K);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = N-1; i >= 0; i--) {
		pilha.push(A[i]);
		fila.push(A[i]);
	}

	ll max_sum = 0LL;
	ll soma = 0LL;

	soma += pilha.top();
	maximus[0] = pilha.top();
	pilha.pop();

	for (int i = 1; i < K; i++) {
		soma += fila.front();
		maximus[i] = fila.front();
		fila.pop();
	}

	max_sum = max(max_sum, soma);

	for (int i = 1; i < K; i++) {

		soma = soma - maximus[K-i] + pilha.top();

		maximus[K-i] = pilha.top();
		pilha.pop();

		max_sum = max(max_sum, soma);
		
	}

	cout << max_sum << endl;

	return 0;
}
