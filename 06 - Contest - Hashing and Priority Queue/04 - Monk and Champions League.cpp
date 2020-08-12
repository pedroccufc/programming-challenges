#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	// M: Número de fileiras de assentos
	// N: Número de torcedores

	priority_queue<ll> fila;

	ll M, N;
	cin >> M >> N;


	ll x;
	for (ll i = 0LL; i < M; i++) {
		cin >> x;
		fila.push(x);
	}

	ll cont = 0LL;
	for (ll i = 0LL; i < N; i++) {
		x = fila.top();
		fila.pop();

		cont += x;
		fila.push(--x);
	}

	cout << cont << endl;



	return 0;
}