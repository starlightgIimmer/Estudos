#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista1 = {1, 2, 3, 4};
    list<int> lista2;//vazia
    list<int> lista3;
    list<int> lista4 = {6, 7};
    
    //assign atribui valores para uma lista vazia e substitui os valores caso ela já esteja preenchida.
    lista2.assign(10, 0);
    
    //para inserir uma lista dentro de outra com o assign: lista2.assign(lista1.begin(), lista1.end());
    lista3.assign(lista1.begin(), lista1.end());
    
    //pode se utilizar push_back() para inserir um elemento na esquerda da lista e push_front() na direita da lista:
    lista4.push_back(8);
    lista4.push_front(5);
    //para remover basta substituir o push pelo pop: pop_back(), pop_front(), ...
    
    //para imprimir os valores das listas podemos utilizar for(auto x:lista){ cout<<x;}
    for(auto x:lista1)
    { 
        cout << x <<" ";
    }
    
    cout<<"\n";
    
    for(auto x:lista2)
    { 
        cout << x <<" ";
    }
    
    cout<<"\n";
    
    for(auto x:lista3)
    { 
        cout << x <<" ";
    }
    
    cout<<"\n";
    
    for(auto x:lista4)
    { 
        cout << x <<" ";
    }
    
    cout<<"\n";
    
    //pode-se utilizar o iterator para adicionar elementos em qualquer ponto da lista: list<tipo>::iterator nome;
    list<int>::iterator it;
    it = lista1.begin();
    
    lista1.insert(it, 0);//para inserir no inicio. para cada posicao a mais, colocamos it++ abaixo da sua declaracao
    //assim: it = lista1.begin();
    //       it++; 
    
    for(auto x:lista1)
    { 
        cout << x <<" ";
    }
    
    cout<<"\n";

    
    //para excluir qualquer elemento da lista, basta trocar o insert por erase:
    lista1.erase(it);
    
    for(auto x:lista1)
    { 
        cout << x <<" ";
    }
    
    return 0;
}
