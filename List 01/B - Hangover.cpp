#include <iostream>
#include <list>

using namespace std;

int main(){

	// p é a variável de input dos valores recebidos
	float p;
	// values é uma lista para armazenar os valores de input
	list<float> values;

	// cin é o método para input do c++
	cin >> p;
	// push_back é um método da estrutura de dados list para adicionar valores ao final de uma lista
	values.push_back(p);

	// condicional para verificar se o usuário recebeu algum valor
	if(p == 0.00){
		// cout é o método do c++ para imprimir texto no console
		cout << "Não possui elementos" << endl;

	// else significa que o primeiro condicional falhou
	}else{
		// while é uma estrutura que repete até a quebra da condição
		while(p != 0.0){
			// enquanto verdade o usuário pode enviar valores para o console
			cin >> p;
			// em adicionar ao vetor de valores
			values.push_back(p);
		}
		// removemos o ultimo elemento com o uso do método pop_back
		// neste caso removemo, pois, o último valor adicionado é 0
		values.pop_back();
	}

	// criei uma nova lista de inteiros para adicionar a quantidade de cartas que serão utilizadas
	list<int> output;

	// iteramos então sobre o vetor de valores com uso do método iterator
	for(list<float>::iterator it = values.begin(); it != values.end(); ++it){
		// intanciando algumas variáveis que serão utilizadas
		float soma = 0, n = 2, count = 0;
		// nesse passo, identificaremos a quantidade de cartas que será necessário para cumprir a premissa
		while(soma <= *it){
			// faremos então o somatório
			soma += (1/n);
			// incrementamos tanto o n que é a variável do denominador
			n++;
			// quanto a variável count que nos dirá a quantidade de cartas
			count++;
		}
		// após terminar o while, adionaremos count ao nosso vetor de cartas
		output.push_back(count);
	}

	// iteramos então sobre nosso vetor de cartas para mostrarmos o resultado
	for(list<float>::iterator it = output.begin(); it != output.end(); ++it){
		cout << *it << " card(s)" << endl;
	}


	return 0;
}