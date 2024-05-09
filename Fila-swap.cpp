#include <iostream>
#include <queue>

using namespace std;

int main()
{
    //declara a fila 1
    queue<int> fila1;
    
    //imprime o tamanho da fila 1
    cout<<"O tamanho da fila 1 é: "<< fila1.size()<<"\n";
    
    //add elementos a fila 1 e imprime o novo tamanho
    fila1.push(15);
    fila1.push(30);
    fila1.push(60);
    fila1.push(120);
    cout<<"\nO tamanho atualizado da fila 1 é: "<< fila1.size()<<"\n";
    
    //retorna o valor na frente da fila 1 (o que foi adicionado antes de todos, primeiro a sair)
    cout<<"O elemento na frente da fila 1 é: "<< fila1.front()<<"\n";
    //retorna o valor no final da fila 1 (ultimo valor adicionado, ultimo a sair)
    cout<<"O elemento no final da fila 1 é: "<< fila1.back()<<"\n";
    
    //declara a fila 2
    queue<int> fila2;
    
    //imprime o tamanho da fila 2
    cout<<"O tamanho da fila 2 é: "<< fila2.size()<<"\n";
    
    //add elementos a fila 1 e imprime o novo tamanho
    fila2.push(20);
    fila2.push(40);
    fila2.push(80);
    cout<<"\nO tamanho atualizado da fila 2 é: "<< fila2.size()<<"\n";
    
    //retorna o valor na frente da fila 2 (o que foi adicionado antes de todos, primeiro a sair)
    cout<<"O elemento na frente da fila 2 é: "<< fila2.front()<<"\n";
    //retorna o valor no final da fila 2 (ultimo valor adicionado, ultimo a sair)
    cout<<"O elemento no final da fila 2 é: "<< fila2.back()<<"\n";
    
    //troca os elementos das filas
    fila2.swap(fila1);
    //imprime as novas filas
    cout<<"\nO tamanho atualizado da fila 1 é: "<< fila1.size()<<"\n";
    cout<<"O elemento na frente da fila 1 é: "<< fila1.front()<<"\n";
    cout<<"O elemento no final da fila 1 é: "<< fila1.back()<<"\n";
    
    cout<<"\nO tamanho atualizado da fila 2 é: "<< fila2.size()<<"\n";
    cout<<"O elemento na frente da fila 2 é: "<< fila2.front()<<"\n";
    cout<<"O elemento no final da fila 2 é: "<< fila2.back()<<"\n";
    
    return 0;
}
