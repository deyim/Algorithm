/*
 * =====================================================================================
 *
 *       Filename:  DeletePosition.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/07/2017 00:54:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node **p = &head;
    Node *toDelete;
    
    for(int i = 0 ; i < position ; ++i) p = &(*p)->next;

    //delete
    toDelete = (*p);
    (*p) = (*p)->next;
    delete(toDelete);
    
    return head;
    
}

