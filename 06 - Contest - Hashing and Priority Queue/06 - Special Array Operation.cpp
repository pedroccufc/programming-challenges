#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll N, Q;

	cin >> N >> Q;

	priority_queue<ll, vector<ll>, less<ll> > maximo;
	priority_queue<ll, vector<ll>, greater<ll> > minimo;

	ll soma = 0LL;
	for (ll i = 0LL; i < N; i++) {
		ll x;
		cin >> x;
		soma += x;
		maximo.push(x);
		minimo.push(x);
	}

	std::vector<ll> v;
	v.resize(N);

	v[0] = soma;

	for (ll i = 1LL; i < N; i++) {

		ll maior = maximo.top();
		ll menor = minimo.top();
		ll diferenca = maior - menor;

		soma -= maior;
		soma -= menor;
		soma += diferenca;

		maximo.pop();
		minimo.pop();

		maximo.push(diferenca);
		minimo.push(diferenca);

		v[i] = soma;
	}

	for (ll i = 0LL; i < Q; i++) {
		ll K;
		cin >> K;

		cout << v[K] << endl;

	}


	return 0;
}