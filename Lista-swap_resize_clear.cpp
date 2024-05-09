#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista1 = {1, 2, 3, 4, 5};
    list<int> lista2 = {6, 7, 8, 9, 10};
    
    //para trocar os elementos das listas (swap):
    lista1.swap(lista2);
    
    //para redimensionar uma lista, ela corta os ultimos elementos ate ficar no tamanho requerido: nomedalista.resize(tamanho desejado);
    lista2.resize(3);
    
    for(auto x:lista1)
    {
        cout<< x <<" ";
    }
    
    cout<<"\n";
    
    for(auto x:lista2)
    {
        cout<<x<<" ";
    }
    
    //para "zerar" ou limpar os elementos de uma lista: nomedalista.clear();
    
    return 0;
}
