#include <iostream>
#include <list>

using namespace std;

int f(int x){

	// Exemplo 255
	int resto = x % 10;
	int div = x / 10;
	
	if(x < 10){
		return x;
	}else{
		return resto + f(div);
	}
}

int main(){

	int input;
	cin >> input;

	list<int> numbers;
	numbers.push_back(input);

	while(input != 0){
		cin >> input;
		numbers.push_back(input);
	}
	numbers.pop_back();

	int gn, new_number;
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
		gn = f(*it);
		if(gn < 10){
			cout << gn << endl;
		}else{
			gn = f(*it);
			while(!(gn < 10)){
				new_number = f(gn);
				gn = new_number;
			}
			cout << gn << endl;
		}
	}

	return 0;
}