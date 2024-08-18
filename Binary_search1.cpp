// r
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define optimize()                \
    ;                             \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = right;
    }
};
void Recursilve_PreOrder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    Recursilve_PreOrder(root->left);
    Recursilve_PreOrder(root->right);
}
void Recursilve_PostOrder(Node *root){
    if(root==NULL){
        return;
    }
    Recursilve_PostOrder(root->left);
    Recursilve_PostOrder(root->right);
    cout<<root->val<<" ";

}
void Recursilve_InOrder(Node *root){
    if(root==NULL){
        return;
    }
    Recursilve_InOrder(root->left);
      cout<<root->val<<" ";
    Recursilve_InOrder(root->right);
 

}
int32_t main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left = a; // 20
    root->right = b;// 30
    a->left = c;// 40
    b->right = d;// 50;
    c->right= e;// 60
    d->left= f;// 70
    d->right=g;//80
    a->right=h;//90
    h->right=i;//100
    cout<<"Pre-Order Traversal"<<"\n";
    Recursilve_PreOrder(root);
    cout<<"\nPost-Order Traversal"<<"\n";
    Recursilve_PostOrder(root);
    cout<<"\n In-Order Traversal"<<"\n";
    Recursilve_InOrder(root);
    return 0;
}
