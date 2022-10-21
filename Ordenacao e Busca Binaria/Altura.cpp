#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    
    for(int i = 0; i < casos; i++)
    {
        int numAlturas;
        cin >> numAlturas;
        vector<int> alturas(numAlturas);
        for(int j = 0; j < numAlturas; j++) cin >> alturas.at(j);

        stable_sort(alturas.begin(), alturas.end());
  
        for(int j = 0; j < numAlturas; j++)
        {
            if(j != numAlturas - 1) cout << alturas.at(j) << " ";
            else cout << alturas.at(j) << endl;
        }
    }
    
    return 0;
}