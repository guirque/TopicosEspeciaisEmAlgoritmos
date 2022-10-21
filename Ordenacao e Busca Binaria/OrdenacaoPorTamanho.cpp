#include <bits/stdc++.h>

using namespace std;

int ordernarPorTamanho(string a, string b)
{
    if(a.length() > b.length()) return true;
    else if(a.length() < b.length()) return false;
    else return 0;
}

int main()
{
    //Leitura
    int numCasos;
    cin >> numCasos;
    vector<string> casos(numCasos);
    cin >> ws;
    //Lendo cada caso e trabalhando com ele
    for(int i = 0; i < numCasos; i++){
            getline(cin, casos[i]);
            //cout << "casos[" << i << "]: " << casos[i] << endl;

            //Criando vetor de palavras
            vector<string> palavras(55, "1"); //comeca em 1
            
            istringstream ss(casos[i]);
            int j = 0;
            while(ss >> palavras[j]) j++;
            //j = numero de palavras
            
            stable_sort(palavras.begin(), palavras.end(), ordernarPorTamanho);
            
            for(int k = 0; k < j; k++) {
                if(palavras[k] != "1"){
                if(palavras[k + 1] != "1") {cout << palavras[k] << " ";}
                else cout << palavras[k] << endl;}
                
                //cout << "\n palavras[" << k + 1 << "] foi acessada (" << palavras[k + 1] << "). ";
            }
    }

    return 0;
}
