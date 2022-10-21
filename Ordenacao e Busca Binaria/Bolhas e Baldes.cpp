#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

long long Merge(int v[], int ini, int metade, int fim)
{
    int i = ini;
    int j = metade;
    int k = 0;
    long long contador = 0;
    int ajudante[(fim - ini + 1)];
    //for(int l = ini; l <= fim; l++) ajudante[l] = v[l];

    while (i < metade && j <= fim)
    {
        if (v[i] <= v[j]) { ajudante[k] = v[i]; k++; i++; }
        else { ajudante[k] = v[j]; contador += (metade - i); k++; j++; }

    }
    while (i < metade) { ajudante[k] = v[i]; k++; i++; }
    while (j <= fim) { ajudante[k] = v[j]; k++; j++; }

    for (int l = ini, k = 0; l <= fim; l++, k++) v[l] = ajudante[k];

    return contador;
}

long long MergeSort(int v[], int ini, int fim)
{
    long long contador = 0;
    if (ini < fim)
    {
        int meio = (ini + fim) / 2;

        contador = MergeSort(v, ini, meio); //Primeira metade
        contador += MergeSort(v, meio + 1, fim); //Segunda metade

        contador += Merge(v, ini, meio + 1, fim); //Combinar primeira e segunda metade
    }
    return contador;
}
  
  
 int main()
{
    //Marcelo, Carlos
    //1 5 3 4 2 -> Marcelo
    
    
    //Enquanto houver entrada
    int N = 1;
    while(N != 0)
    {
        long long nums[100000];
        cin >> N;
        
        if(N != 0){
        for(int i = 0; i < N; i++) {cin >> nums[i];}
        
        //Testes
        /*
        cout << "Caso teste : " << N;
        for(int i = 0; i < N; i++) cout << nums[i];
        cout << " ";
        */
        
        //Calculando o resultado
        int inversoes = mergeSort(nums, 0, N-1);
        
        for(int i = 0; i < N; i++) cout << nums[i] << " ";
        cout << endl;
        
        //Impressao
        cout << inversoes << " ";
        if(inversoes % 2 == 0) cout << "Carlos" << endl;
        else cout << "Marcelo" << endl;
        }
        
    }
    
    return 0;
}