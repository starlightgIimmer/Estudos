#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista1 = {1, 2, 3, 4, 5};
    
    //emplace adiciona elementos no inicio/fim da lista: nomedalista.emplace_front(valor) para o inicio e nomedalista.emplace_back(valor) para o final
    lista1.emplace_front(0);
    lista1.emplace_back(6);
    
    for(auto x:lista1)
    {
        cout<< x <<" ";
    }
    
    cout<<"\n";
    
    return 0;
}
