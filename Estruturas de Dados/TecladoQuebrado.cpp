#include <bits/stdc++.h>

using namespace std;

int main()
{
    string texto = "";

    //Para cada caso de teste
    while(getline(cin, texto))
    {
        //Execucao ---------------------------
        int tam = texto.length();
        vector<string> trechos(1);
        string resp = "";
        bool inserirNoInicio = false;
        
        //Analisar string linearmente
        for(int i = 0; i < tam; i++)
        {
            //Home
            if(texto[i] == '['){inserirNoInicio = true; trechos.insert(trechos.begin(), "");}
            //End
            if(texto[i] == ']'){ inserirNoInicio = false;}
            
            //Acoes
            if(texto[i] != '[' && texto[i] != ']'){
                if(inserirNoInicio) {trechos.front() += texto[i];}
                else *(trechos.end() - 1) += texto[i];
                
            }
        }
        
        //-------------------------------------
        
        //Impressao
        for(int i = 0; i < trechos.size(); i++)
        cout << *(trechos.begin() + i);
        cout << endl;
        
        trechos.clear();
    }

    return 0;
}