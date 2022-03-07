#include "List.h"
template <typename T>

const T & List<T>::operator[](unsigned index){
    ListNode *nd = head_;
    while(index > 0 && nd->next !=nullptr){
        nd = nd->next;
        index--;
    }
    return nd->data;
}

template <typename T>
void List<T>::insertFront(const T & data){
    ListNode *node = new ListNode(data);
    node->next = head_;
    head_ = node;
}