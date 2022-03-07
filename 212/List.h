#pragma once

template<typename T>
class List{
public:
  const T & operator[](unsigned index);
    void insertFront(const T & data);
    List() : head_(nullptr){}
private:
  class ListNode{
    public:
      const T & data;
      ListNode *next;
      ListNode(const T & data) : data(data),next(nullptr){}
  };
  ListNode *head_;
};
#include "List.hpp"