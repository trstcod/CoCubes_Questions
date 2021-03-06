#include<iostream>
using namespace std;

 struct node{
 int data;
 node *right,*left;
 };

 node* newNode(int data)
 {
     node *head=new node();
     head->data=data;
     head->left=head->right=NULL;
     return head;
 }
 //LCA OF A BINARY TREE
/*
 node *lca(node *head,int n1,int n2)
 {
    if(head==NULL)return NULL;
    if(head->data>n1 && head->data>n2)
        return lca(head->left,n1,n2);
     if(head->data<n1 && head->data<n2)
        return lca(head->right,n1,n2);

    return head;
}
*/
int Calculate(node* head,int key)
{
    if(head==NULL)
        return 0;
    key = key - head->data;
    if(head->left != NULL)
        return Calculate(head->left, key);
    else
        return Calculate(head->right, key);

}
int main()
 {//int sum;
     int key;
      node *head=newNode(20);
      head->right=newNode(50);
      head->left=newNode(15);
      head->left->left=newNode(10);
      head->left->left->left=newNode(6);
      head->left->left->right=newNode(12);
      head->left->right=newNode(17);
      cin>>key;
      if(Calculate(head,key))
        cout<<"Yes";
      else
        cout<<"No";
      return 0;



 }
