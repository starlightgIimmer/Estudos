#include <iostream>
#include <queue>

using namespace std;

int main()
{
    //declara a fila
    queue<int> numeros;
    
    //imprime o tamanho da fila
    cout<<"O tamanho da fila é: "<< numeros.size()<<"\n";
    
    if(numeros.empty())
    {
        cout<<"A fila não possui elementos.\n";
    }
    
    //add um elemento a fila e imprime o novo tamanho
    numeros.push(15);
    cout<<"\nO tamanho atualizado da fila é: "<< numeros.size()<<"\n";
    
    //verifica se a fila está vazia ou possui algum elemento
    if(numeros.empty())
    {
        cout<<"A fila não possui elementos.\n";
    }else
    {
        cout<<"A fila possui elementos.\n";
    }
    
    //retorna o valor na frente da fila(o que foi adicionado antes de todos, primeiro a sair)
    cout<<"O elemento na frente da fila é: "<< numeros.front()<<"\n";
    //retorna o valor no final da fila(ultimo valor adicionado, ultimo a sair)
    cout<<"O elemento no final da fila é: "<< numeros.back()<<"\n";
    
    //add mais elementos
    numeros.push(30);
    numeros.push(60);
    
    cout<<"\nO tamanho atualizado da fila é: "<< numeros.size()<<"\n";
    cout<<"O elemento na frente da fila é: "<< numeros.front()<<"\n";
    cout<<"O elemento no final da fila é: "<< numeros.back()<<"\n";
    
    //remove o primeiro elemento adicionado
    numeros.pop();
    cout<<"\nO tamanho atualizado da fila é: "<< numeros.size()<<"\n";
    cout<<"O elemento na frente da fila é: "<< numeros.front()<<"\n";
    cout<<"O elemento no final da fila é: "<< numeros.back()<<"\n";
    
    //adiciona um novo elemento
    numeros.push(120);
    //para salvar o valor do primeiro elemento(que agora é o segundo adicionado no geral(30):
    int popped_value = numeros.front();
    cout<<"\nO tamanho atualizado da fila é: "<< numeros.size()<<"\n";
    cout<<"O elemento na frente da fila é: "<< numeros.front()<<"\n";
    cout<<"O elemento no final da fila é: "<< numeros.back()<<"\n";
    
    numeros.pop();
    cout<<"\nO tamanho atualizado da fila é: "<< numeros.size()<<"\n";
    cout<<"O elemento na frente da fila é: "<< numeros.front()<<"\n";
    cout<<"O elemento no final da fila é: "<< numeros.back()<<"\n";
    cout<<"O elemento removido foi: "<< popped_value;
    
    
    return 0;
}
