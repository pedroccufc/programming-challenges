#include <iostream>

using namespace std;

int f(int n){

	if(n < 10){
		return n;
	}else{
		return f(n%10 + n/10);
	}
}

int main(){
	ios::sync_with_stdio(false);

	// Valor de entrada
	int n;
	cin >> n;

	while(n != 0){
		cout << f(n) << endl;
		cin >> n;
	}


	return 0;
}