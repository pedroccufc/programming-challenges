#include <iostream>
#include <list>

using namespace std;

int main(){

	// Número de casos de teste:
	int t;
	cin >> t;

	// Qtd de linhas: 6 <= n
	int n;

	// Qtd de colunas: m <= 10000
	int m;

	list<int> sondas;
	int div_n;
	int div_m;
	for(int i = 0; i < t; i++){
		cin >> n >> m;
		div_n = (n/3);
		div_m = (m/3);
		sondas.push_back(div_n * div_m);
	}

	for(list<int>::iterator it = sondas.begin(); it != sondas.end(); it++){
		cout << *it << endl;
	}


	return 0;
}