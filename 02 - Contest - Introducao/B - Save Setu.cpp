#include <iostream>
#include <string>

using namespace std;

int main(){

	// Número de operações: 1 <= T <= 100
	int T;
	cin >> T;

	// Valor adicionado a conta;
	long long K;

	// Montante
	long long montante = 0;

	string op;

	while(T--){
		cin >> op;

		if(op.compare("donate") == 0){
			cin >> K;
			montante += K;
		}else{
			cout << montante << endl;
		}
	}


	return 0;
}