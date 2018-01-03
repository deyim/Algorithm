/*
 * =====================================================================================
 *
 *       Filename:  InsertNode.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/07/2017 00:53:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *iterhead = head;
    Node *newNode = (struct Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if(head == NULL){ 
        head = newNode;
        return newNode;
    }
    
    while(iterhead->next){
        iterhead = iterhead->next;
    }
    iterhead->next = newNode;
    return head;
}
