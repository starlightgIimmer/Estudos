#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista1 = {3, 8, 7, 2, 9, 6, 5, 3, 1, 6, 4, 9, 7};
    
    for(auto x:lista1)
    {
        cout<<x<<" ";
    }
    
    cout<<"\n";
    
    //.sort() ordena os elementos: nomedalista.sort();
    lista1.sort();
    
    for(auto x:lista1)
    {
        cout<<x<<" ";
    }
    
    cout<<"\n";
    
    //.unique() remove elementos duplicados da lista
    lista1.unique();
    
    for(auto x:lista1)
    {
        cout<<x<<" ";
    }
    
    cout<<"\n";
    
    return 0;
}
