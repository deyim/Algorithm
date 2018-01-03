/*
 * =====================================================================================
 *
 *       Filename:  BinaryCheck.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/10/2017 00:24:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/* 

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
   
   Most importantly, you gotta check for each node, check if max value in left subtree is smaller than the node and min value in right subtree greater than the node.
*/
//int minVal=10000, maxVal=-100000;


//int isBSTUtil(struct node* node, int min, int max);
 
/* Returns true if the given tree is a binary search tree 
 (efficient version). */


bool checkBST(Node* root) {
    return(checkBSTwithMinMax(root, -999999, 999999));
}

bool checkBSTwithMinMax(Node *root, int min, int max){
     if(root == NULL) return true;
     
     if(root->data < min || root->data > max) return false;
    
     return checkBSTwithMinMax(root->left, min, root->data-1) && checkBSTwithMinMax(root->right, root->data+1, max);
    
    /*
     if(root->left != NULL){
         if(root->left->data <= root->data){
             //printf("going left  %d --> %d\n", root->data, root->left->data);
             checkBSTwithMinMax(root->left, min ,root->data);
         }
         else return false;
        
     }
    
     if(root->right != NULL){
         if(root->right->data > root->data){
             //printf("going right  %d --> %d\n", root->data, root->right->data);
             checkBSTwithMinMax(root->right, root->data, max);
         }
         else return false;
     }
     return true;
     */
}
