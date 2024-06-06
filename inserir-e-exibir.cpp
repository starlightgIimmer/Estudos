#include <iostream>
using namespace std;

struct Node 
{
    int value;
    Node* left;
    Node* right;
    Node(int val) : value(val), left(nullptr), right(nullptr){}
};

Node* insert(Node* root, int key)
{
    if(root == nullptr)
    {
        return new Node(key);
    }
    
    if(key < root -> value)
    {
        root->left = insert(root->left, key);
    }else
    {
        root->right = insert(root->right, key);
    }

    return root;
}

void preOrderTreeWalk(Node* root)
{
    if (root != nullptr)
    {
        cout<< root->value <<" ";
        preOrderTreeWalk(root->left);
        preOrderTreeWalk(root->right);
    }
}

void inOrderTreeWalk(Node* root)
{
    if(root != nullptr)
    {
        inOrderTreeWalk(root->left);
        cout<< root->value <<" ";
        inOrderTreeWalk(root->right);
    }
}

void postOrderTreeWalk(Node* root)
{
    if (root != nullptr)
    {
        preOrderTreeWalk(root->left);
        preOrderTreeWalk(root->right);
        cout<< root->value <<" ";
    }
}

int main()
{
    int C;
    cout<<"Insira o número de casos: ";
    cin >> C;
    cout<<"\n";
    
    for(int caso = 1; caso <= C; ++caso)
    {
        int N;
        cout<<"Insira a quantidade de valores desse caso: ";
        cin >> N;
        cout<<"\nInsira os valores: ";
        
        Node* root = nullptr;
        for(int i = 0; i<N; i++)
        {
            int value;
            cin>>value;
            root = insert(root, value);
        }
        
        cout<<"Caso "<<caso<<":\n";
        cout<<"Pre.: ";
        preOrderTreeWalk(root);
        
        cout<<"\nIn.: ";
        inOrderTreeWalk(root);
        
        cout<<"\nPost: ";
        postOrderTreeWalk(root);
    }
    
    return 0;
}
