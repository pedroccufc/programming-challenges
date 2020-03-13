#include <iostream>

using namespace std;

int main(){

	ios::sync_with_stdio(false);

	// Número de casos de teste: n <= 20
	int n;
	cin >> n;

	// Número de agricultores: 0 < f < 20
	int f;

	// Tamanho da fazenda em metros quadradros
	int x;

	// Número de animais do fazendeiro
	int y;

	// Simpatia do agricultor
	int z;

	while(n--){
		double premio = 0;
		cin >> f;
		while(f--){
			cin >> x >> y >> z;
			premio += (int)(x*z);
		}
		cout << premio << endl;
	}


	return 0;
}