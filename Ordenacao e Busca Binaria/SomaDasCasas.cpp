#include <iostream>

using namespace std;

int buscaBinaria(int vetor[], int tamanho, int elemento)
{
    int inicio = 0;
    int fim = tamanho - 1;
    
    //Retorna o indice do elemento
    while(inicio <= fim)
    {
        int indiceEmAnalise = (inicio + fim)/2;

        //cout << "inicio: " << inicio << "   fim: " << fim << "  indice: " << indiceEmAnalise << endl;
        
        if(vetor[indiceEmAnalise] > elemento) fim = indiceEmAnalise - 1;
        else if(vetor[indiceEmAnalise] < elemento) inicio = indiceEmAnalise + 1;
        else return indiceEmAnalise;
    }
    
    return -1;
}

int main()
{
    //Leitura
    int casas;
    cin >> casas;
    int nums[100000];
    for(int i = 0; i < casas; i++) cin >> nums[i];
    int k;
    cin >> k;
    
    //Fixe um e procure o complementar que soma k, com busca binária
    for(int i = 0; i < casas; i++)
    {
        int par = buscaBinaria(nums, casas, k - nums[i]);
        if(par != -1)
        {
            printf("%d %d\n", nums[i], nums[par]);
            break;
        }
    }
    
    //int teste[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    //cout << buscaBinaria(teste, 10, 16);
    
    return 0;
}
