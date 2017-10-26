/*#include "sort.h"

C_array::C_array(){
  this->root=NULL;
  //cout << "constructor"<<endl;
}
C_array::~C_array(){
  //cout << "constructor"<<endl;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}





bool C_Heap::CreateHeap(int capacity, int heap_type){
  S_Heap *h;
  h = new S_Heap;

  h->heap_type=heap_type;
  h->count=0;
  h->capacity=capacity;
  h->array=capacity;

  return true;
}

  if(root==NULL){
    cout << "Error de memoria" << endl;
  }else{
    bool bandera=true;
    S_node *paux=root;
    while(bandera){
      if(mi_dato<paux->dato){
        if(paux->left){
          paux=paux->left;
        }else{
          paux->left=temp;
          bandera=false;
        }
      }else{
        if(paux->right){
          paux=paux->right;
        }else{
          paux->right=temp;
          bandera=false;
        }
      }
    }
  }
	return true;
}

void C_Heap::preorder(){
  preorder(this->root);
}

void C_Heap::preorder(struct S_node *node){
  if(node){
    cout << node -> dato << endl;
    preorder(node -> left);
    preorder(node -> right);
  }
}

void C_Heap::inorder(){
   inorder(this->root);
}

void C_Heap::inorder(struct S_node *node){

  if(node){
      inorder(node -> left);
      cout << node -> dato << endl;
      inorder(node -> right);
    }
}

void C_Heap::postorder(){
  postorder(this->root);
}

void C_Heap::postorder(struct S_node *node){

  if(node){
    postorder(node -> left);
    postorder(node -> right);
    cout<< node -> dato << endl;
  }
}

void C_Heap::height(){
  height(this->root);
}

int C_Heap::height(struct S_node *node){

  if(node==NULL){
    return 0;
  }else{
    int rheight = height(node->right);
    int lheight = height(node->left);
    if(lheight>rheight){
      return(lheight + 1);
    }else{
      return(rheight + 1);
    }
  }
}
*/
