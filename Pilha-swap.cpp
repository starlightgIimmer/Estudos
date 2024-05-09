#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //declara a pilha 1
    stack<int> pilha1;
    
    //preennche a pilha 1
    pilha1.push(15);
    pilha1.push(30);
    pilha1.push(60);
    
    //imprime o tamanho, elementos e declara qual o elemento do topo  da pilha 1
    cout<<"O tamanho da primeira pilha é: "<<pilha1.size();
    cout<<"\nO topo da pilha 1 é: "<<pilha1.top();
    
    //declara a pilha 2
    stack<int> pilha2;
    
    //preenche a pilha 2
    pilha2.push(20);
    pilha2.push(40);
    pilha2.push(80);
    pilha2.push(160);
    
    //imprime o tamanho, elementos e declara qual o elemento do topo  da pilha 2
    cout<<"\n\nO tamanho da segunda pilha é: "<<pilha2.size();
    cout<<"\nO topo da pilha 2 é: "<<pilha2.top();
    
    //troca os elementos das pilhas
    pilha2.swap(pilha1);
    //exibe as pilhas trocadas
    cout<<"\n\nO novo tamanho da primeira pilha é: "<<pilha1.size();
    cout<<"\nO novo topo da pilha 1 é: "<<pilha1.top();
    cout<<"\n\nO novo tamanho da segunda pilha é: "<<pilha2.size();
    cout<<"\nO novo topo da pilha 2 é: "<<pilha2.top();
    
    
    return 0;
}
