#include <iostream>
#include <string>

using namespace std;

int num_inversoes(string cadeia){

	int count = 0, k;
	for(int i = 0; i < cadeia.length(); i++){
		k = i+1;
		for(int j = k; j < cadeia.length(); j++){
			if(cadeia[j] < cadeia[i]){
				count++;
			}
		}
	}

	return count;
}

bool order(string s1, string s2){
	return num_inversoes(s1) < num_inversoes(s2);
}

int main(){
	// comprimento das cadeias de DNA
	int n;
	// número de cadeias
	int m;

	cin >> n >> m;

	string cadeias[100];
	string input;
	for(int i = 0; i < m; i++){
		cin >> input;
		cadeias[i] = input;
	}

	string aux;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			if(order(cadeias[i], cadeias[j])){
				aux =  cadeias[i];
				cadeias[i] = cadeias[j];
				cadeias[j] = aux;
			}
		}
	}

	for(int i = 0; i < m; i++){
		cout << cadeias[i] << endl;
	}

	return 0;
}