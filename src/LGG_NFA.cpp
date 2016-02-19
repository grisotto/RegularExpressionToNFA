//============================================================================
// Name        : LGG_NFA.cpp
// Author      : rafael
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stack>          // std::stack
#include <list>				//std::list
using namespace std;

/*
 * Esquema da minha linguagem livre de contexto
 * S0 -> <ER>V<ER> | <ER>A<ER> | <ER>* | <(ER)> | <SIMB>
 * <SIMB> -> alfabeto[0] | alfabeto[1]
 *
 *
 *

 *
 */

//Variaveis globais
string regularExpression;
char alfabeto[2] = {'0','1'};
char operadores[3] = {'+', '-' , '*'};

void InfixToPosfix(string infix){
	//crio uma pilha vazia para guarda a Prefix
	stack<char> pilhaPrefix;

	//crio uma lista vazia para ajudar na conversao
	list<int> auxList;

	char aux;


	//comeco o for varrendo cada elmento
	// pop remove o elemento do top.
	for(int i=0;i<infix.size();i++){
	      // cout << infix[i] << "\n";
	    //   pilhaPrefix.push(infix[i]);
	      // cout << "Top of the stack " << pilhaPrefix.top() << endl;

	 //varrendo todo o alfabeto
	       for(int j =0; j < alfabeto.size();j++){
	       if(infix[i] == alfabeto[j] ){
	    	   // adicionando o alfabeto em uma lista
	    	   auxList.push_back(infix[i]);

	       }


	       }

	       //verificar se tem abertura de parenteses
	       if (infix[i] == '(') {
	    	   //guarda na pilha abertura de parenteses
	    	   pilhaPrefix.push(infix[i]);

		}else if(infix[i] == ')') {
			aux = pilhaPrefix.pop();

		}



	}


}

int main() {



	cout << "Alfabeto:" << endl;
	for (int var = 0; var < 2; ++var) {
		cout << alfabeto[var] << "\t";
	}

	cout << endl << "Operadores:" << endl;
	cout << "Uniao: " << operadores[0] << endl;
	cout << "Concatenacao: " << operadores[1] << endl;
	cout << "Estrela: " << operadores[2] << endl;


	cout<< endl << "Digite a string: "<< endl;
	cin >> regularExpression;

	InfixToPosfix(regularExpression);









	return 0;
}
