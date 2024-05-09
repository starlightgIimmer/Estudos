#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //declara a pilha
    stack<int> numeros;
    
    cout<<"Tamanho: "<<numeros.size();
    
    if(numeros.empty())
    {
        cout<<"\nA pilha está vazia.";
    }
    
    //adiciona um elemento à pilha
    numeros.push(19);
    
    //mostra o tamanho da pilha
    cout<<"\n\nTamanho: "<<numeros.size();
    
    if(!numeros.empty())
    {
        cout<<"\nA pilha possui elementos.";
    }
    
    //mostra o elemento no topo da pilha
    cout<<"\nO número no topo da pilha é: "<<numeros.top();
    
    numeros.push(8);
    numeros.push(15);
    
    cout<<"\n\nTamanho: "<<numeros.size();
    cout<<"\nO número no topo da pilha é: "<<numeros.top();
    
    //remove o elemento do topo (esse elemento é perdido se nao for salvo antes)
    numeros.pop();
    
    cout<<"\n\nO novo topo é: "<< numeros.top();
    cout<<"\nTamanho: "<< numeros.size();
    
    //adicionando o topo antigo novamente
    numeros.push(15);
    
    //criando uma variável para salvar esse valor
    int popped_value = numeros.top();
    
    //removendo o topo novamente
    numeros.pop();
    
    //mostrando o novo topo outra vez
    cout<<"\n\nO novo topo é: "<< numeros.top();
    cout<<"\nTamanho: "<< numeros.size();
    
    //imprimindo o topo removido
    cout<<"\nO valor removido foi: "<<popped_value;
    
    return 0;
}
