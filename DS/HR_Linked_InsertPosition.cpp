/*
 * =====================================================================================
 *
 *       Filename:  InsertPosition.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/07/2017 00:54:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
Node* InsertNth(Node *head, int data, int position)
{
    Node **p = &head;
    for(int i = 0 ; i < position ; i++) p = &(*p)->next;
    *p = new Node{data, *p};
    return head;
}
