#include <bits/stdc++.h>
using namespace std;

void casoEspecifico(int tam)
{
    vector<int> a;
    for(int i = 1; i <= tam; i++) {a.push_back(i);}

    //Execucao
	reverse(a.begin(), a.end());

    bool removeuPrimeiro = false;
	cout << "Discarded cards:";
	while(tam != 1){
	    if(!removeuPrimeiro){ cout << " " << *(a.end() - 1); removeuPrimeiro = true;}  //Imprimir elemento a ser removido
        else  cout << ", " << *(a.end() - 1);
        a.pop_back(); //Remover elemento do topo da pilha
        tam--; // Diminuir o contador de tamanho
        a.insert(a.begin(), *(a.end() - 1)); //Pegar o ultimo elemento e coloca-lo na base da pilha
        a.pop_back(); //Tirar o elemento movido
	}
    
    cout << endl;
    cout << "Remaining card: " << a.at(0) << endl;
}

int main()
{
	//Entrada (Leitura)
    vector<int> entradas;
    int numEntradas = 0;
    int k = 0;
	while(cin >> k){entradas.push_back(k); numEntradas++;}
	//Removendo o zero da entrada
	entradas.pop_back();
	numEntradas--;
    
	for(int i = 0; i < numEntradas; i++)
	{
	    casoEspecifico(entradas[i]);
	}
	
	return 0;
}