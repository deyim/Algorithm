/*
 * =====================================================================================
 *
 *       Filename:  PrintLink.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/07/2017 00:52:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    while(head){
        printf("%d\n", head->data);
        head = head->next;
    }
}
