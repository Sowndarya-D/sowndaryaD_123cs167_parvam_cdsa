#include<stdio.h>
#include<stdlib.h>
 struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node* createNode(int data){
    struct Node* node =(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=node->right=NULL;
    return node;
}
struct Node* insert(struct Node*root,int data){
    if(root==NULL)return createNode(data);
    if(data<root->data){
        root->left=insert(root->left,data);
        printf("%d",root->left);
        preorderTraversal(root->left) ;
        preorderTraversal(root->right) ;
       
    }
       
    }
    else if (data<=root->data){
    root->left=insertNode(root->left,data);
    }
    else{
        root->right=insertNode(root->right,data);
    }
    return root;
   
}
void inorder(struct Node* root){
    if(root!=NULL){
    inorder(root->left);
    printf("%d",root->left);
    inorder(root->right);
    }
}
void postorder(struct Node* root){
    if(root!=NULL){
        postodrer(root->left);
        postodrer(root->right);
        printf("%d",root->data);
    }
}
void preorder(struct Node* root){
    if(root!=NULL){
        printf("%d",root->data);
        preodrer(root->left); 
        preodrer(root->right;
    }
}
int main(){
   struct Node* root=NULL;
   int values[]={5,3,7,2,4,6,8};
   int n=sizeof(values)/sizeof(values[0]);

   for(int i=0;i<h;i++){
    root =insert(root,values[i]);
    printf("In-order traversal:");
    inorder(root);
     printf("\n");
   
   printf("pre-order traversal:");
   preorder(root);
   printf("\n");
   
    return 0;
        
}