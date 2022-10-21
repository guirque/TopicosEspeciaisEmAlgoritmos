#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    string texto = "";
    map<string, pair<int, bool>> arvore; //Nome do assassino; numero de assassinatos pelos quais e responsavel; se esta vivo
    //vector<string> assassinos;

    cout << "HALL OF MURDERERS" << endl;
    int qtd = 0;
    while(getline(cin, texto))
    {
        string assassino = "";
        string vitima = "";

        //Uso de istringstream para separar os nomes
        istringstream ss(texto); 
        ss >> assassino;
        ss >> vitima;
        
        //Atualizando dados ---
        //Assassino
        if(arvore.count(assassino) == 0) {arvore[assassino].first = 1; if(arvore[assassino].second == NULL) arvore[assassino].second = true; qtd++; /*assassinos.push_back(assassino);*/} //Primeiro assassinato
        else{arvore[assassino].first++;}
        //Vitima
        arvore[vitima].second = false; //Adicionando a vitima a lista de assassinados 
        
        //---------------------
    }
    
    //Imprimindo
    for(map<string, pair<int, bool>>::iterator i = arvore.begin(); i != arvore.end(); i++)
    {
        //Caso o assassino nao tenha sido assassinado, imprima
        string nome = i -> first;
        if(arvore[nome].second) cout << nome << " " << arvore[nome].first << endl;
        
        //cout << i -> first << endl;
        //if(arvore[assassinos[i]].second) cout << assassinos[i] << " " << arvore[assassinos[i]].first << endl;
    }
        
    return 0;
}