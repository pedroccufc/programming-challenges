#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	// Número de casos de teste
	ll T;
	cin >> T;

	ll A, B, C, K, x;

	for (int i = 0; i < T; i++) {
		cin >> A >> B >> C >> K;

		x = 0;
		while (true) {
			if ((A*x*x + B*x + C) >= K) {
				cout << x << endl;
				break;
			}
			x++;
		}
	}

	return 0;
}