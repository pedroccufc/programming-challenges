#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);

	// Número de casos de teste (1 <= T <= 10)
	int T;
	cin >> T;

	// Quantidade de dias (1 <= N <= 10^5)
	int N;

	// Intervalos de dias para voos do avião A (1 <= p <= 10^5)
	int p;

	// Intervalos de dias para voos do avião B (1 <= p <= 10^5)
	int q;

	// Intervalos de dias para voos do avião C (1 <= p <= 10^5)
	int r;

	while (T--) {
		cin >> N >> p >> q >> r;

		int voos_sucesso = 0;
		for (int i = 1; i <= N; i++) {
			int voos_por_dia = 0;
			
			if ((i%p) == 0) voos_por_dia++;
			if ((i%q) == 0) voos_por_dia++;
			if ((i%r) == 0) voos_por_dia++;

			if (voos_por_dia == 1) voos_sucesso++;
		}

		cout << voos_sucesso << endl;

	}

	return 0;
}