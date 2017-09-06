/*
 * =====================================================================================
 *
 *       Filename:  InsertHeadNode.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/07/2017 00:54:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *newNode = (struct Node*)malloc(sizeof(Node));
    newNode->data = data;
    
    if(!head){
        head = newNode;
        return head;
    }

    newNode->next = head;
    return newNode;
    
    
}
