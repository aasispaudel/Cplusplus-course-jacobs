/*
CH08-320143
a1_p4.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

/**

 * @list: tail->elem_s->head
 * @push_back-> tail->elem_s->prev_head->head
 * @push_front-> tail->prev_tail->elem_s->head

 */
#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

/**
 * Behaves as a doubly linkedlist to store the values for our
 * List 
 */
template <class T>
class Node {
 public:
  Node* next;
  Node* prev;
  T val;
};

template <class T>
class List {
 private:
  Node<T>* tail;
  Node<T>* head;
  int size;

 public:
  // Constructor
  List() {
    this->size = 0;
  }

  // Getsize
  int getSize() {
    return this->size;
  }

  // Returns the first element
  T get_front() {
    return (this->tail)->val;
  }

  // Returns the last element
  T get_last() {
    return (this->head)->val;
  }
  
  // Return and remove the last element
  T r_last() {
    T val = (this->head)->val; 
    this->head = (this->head)->prev;
    (this->size)--;
    return val;
  }

  // Return and remove the first element
  T r_front() {
    T val = (this->tail)->val; 
    this->tail = (this->tail)->next;
    (this->size)--;
    return val;
  }

  // push_back (adds element to the last)
  void push_back(T val) {
    Node<T>* nelem = new Node<T>;

    nelem->val = val;
  
    if (size == 0) {
      nelem->next = NULL;
      nelem->prev = NULL;
      this->head = nelem;
      this->tail = nelem;
    }
    
    nelem->next = NULL;
    nelem->prev = this->head;
    this->head = nelem;

    (this->size)++;

  }

  // Adds element to the first
  void push_front(T val) {
    Node<T>* nelem = new Node<T>;

    nelem->val = val;

    if (size == 0) {
      nelem->next = NULL;
      nelem->prev = NULL;
      this->head = nelem;
      this->tail = nelem;
    }
  
    nelem->prev = NULL;
    nelem->next = this->tail;
    this->tail = nelem;

    (this->size)++;
  }
  
  // Destructor
  ~List() {
    Node<T>* nelem = this->tail;

    while((this->tail) != NULL) {
      nelem = (this->tail)->next;
      delete this->tail;
      this->tail = nelem;
    }
  };
};
#endif
