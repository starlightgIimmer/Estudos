#include <iostream>
#include <list>

using namespace std;

//função para verificar se um número é par
bool par(const int& valor)
{
    return ((valor%2)==0);
}

int main()
{
    list<int> lista1 = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9};
    
    //remove exclui elementos da lista: nomedalista.remove(valor)
    lista1.remove(0);
    
    for(auto x:lista1)
    {
        cout<< x <<" ";
    }
    
    cout<<"\n";
    
    list<int> lista2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    
    //remove_if exclui elementos dada uma determinada condição
    lista2.remove_if(par);
    
    for(auto x:lista2)
    {
        cout<< x <<" ";
    }
    
    //caso a condicao seja elementos impares basta substituir ((valor%2)==0) por ((valor%2)==1)
    
    return 0;
}
