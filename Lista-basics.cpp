#include <iostream>
#include <list>

using namespace std;

int main()
{
    //para declarar uma lista: list<tipo>nomedalista 
    list<int> lista; //vazia
    
    //para preencher a lista existem algumas maneiras:
    list<int> lista1(10, 0); //list<tipo> nome(tamanho, elemento). nesse caso é uma lista de tamanho 10 com todos os elementos iguais a 0.
    list<int> lista2(lista1);//list<tipo> nome(outra lista).
    list<int> lista3 = {1, 2, 3, 4};//list<tipo> nome = {elementos}.
    
    cout<<"Tamanho da lista 3: "<< lista3.size()<<"\n";
    cout<<"Capacidade máxima da lista 3: "<< lista3.max_size()<<"\n";
    cout<<"Primeiro elementno da lista 3: "<< lista3.front()<<"\n";
    cout<<"Último elemento da lista 3: "<< lista3.back()<<"\n\n";
    
    if(lista3.empty())
    {
        cout<<"A lista 3 está vazia.\n";
    }else
    {
        cout<<"A lista 3 não está vazia.\n";
    }
    return 0;
}
