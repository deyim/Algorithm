/*
 * =====================================================================================
 *
 *       Filename:  DetectCycle.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/07/2017 23:50:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head == NULL) return false;
    struct Node *fastPointer, *slowPointer;
    fastPointer = slowPointer = head;
    
    while(slowPointer && fastPointer){
        fastPointer = fastPointer -> next;
        if(fastPointer == slowPointer) return true;
        if(fastPointer == NULL) return false;
        fastPointer = fastPointer -> next;
        if(fastPointer == slowPointer) return true;
        slowPointer = slowPointer -> next;
    }
    
    return false;
    
}
