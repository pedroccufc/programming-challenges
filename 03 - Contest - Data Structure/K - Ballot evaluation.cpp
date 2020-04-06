#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	// Número de partidos: 1 <= p <= 50 
	int p;
	cin >> p;

	// Número de suposições: 1 <= g <= 10000
	int g;
	cin >> g;

	int v1, v2;
	char d;

	string partidos[51];
	int percentes[51];

	for(int i = 0; i < p; i++){
		cin >> partidos[i] >> v1 >> d >> v2;
		percentes[i] = v1*10 + v2;
	}

	string palpites[10001];
	for(int i = 0; i <= g; i++){
		getline(cin, palpites[i]);
	}
	
	for(int i = 1; i <= g; i++){
		string palpite_split[10001];
		string palpite = palpites[i];
		int pos = 0;
		int j = 0;
		while(j <= palpite.length()){
			if(palpite[j] != ' '){
				palpite_split[pos].push_back(palpite[j]);
				j++;
			}else{
				pos++;
				j++;
			}
		}

		float soma = 0.0;
		string aux[51];

		for(int k = 0; k < p; k++){
			aux[k] = partidos[k];
		}

		for(int k = 0; k < pos - 1; k++){
			for(int v = 0; v < p; v++){
				if(palpite_split[k] == aux[v]){
					soma += percentes[v];
					aux[v] = "-";
				}
			}
		}

		int value = atoi((palpite_split[pos]).c_str()) * 10;

		if(palpite_split[pos-1] == "<"){
			if(soma < value){
				cout << "Guess #" << i << " was correct." << endl;
			}else{
				cout << "Guess #" << i << " was incorrect." << endl;
			}
		}else if(palpite_split[pos-1] == ">"){
			if(soma > value){
				cout << "Guess #" << i << " was correct." << endl;
			}else{
				cout << "Guess #" << i << " was incorrect." << endl;
			}
		}else if(palpite_split[pos-1] == "<="){
			if(soma <= value){
				cout << "Guess #" << i << " was correct." << endl;
			}else{
				cout << "Guess #" << i << " was incorrect." << endl;
			}
		}else if(palpite_split[pos-1] == ">="){
			if(soma >= value){
				cout << "Guess #" << i << " was correct." << endl;
			}else{
				cout << "Guess #" << i << " was incorrect." << endl;
			}
		}else if(palpite_split[pos-1] == "="){
			if(soma == value){
				cout << "Guess #" << i << " was correct." << endl;
			}else{
				cout << "Guess #" << i << " was incorrect." << endl;
			}
		}

	}



	return 0;
}