/*
CH08-320143
a1_p3.cpp
Aashish Paudel
a.paudel@jacobs-university.de
*/

#ifndef _STACK_H_
#define _STACK_H_

/**
 * Template class to emulate the behavior of stacks
 * Works with any type
*/

template <class T>
class Stack {
 private:
  int size;
  int count;
  T *stack;

 public:
  // Constructors and destructors
  Stack(int size);
  Stack();
  Stack(const Stack&);
  ~Stack();

  // Push the element to the stack
  bool push(T element);
  // Pops the element from the stack |
  // Does out = stack[count-1]
  bool pop(T& out);
  // Returns current element at top of stack
  T back (void);
  // Total no of elements in teh stack
  int getNumEntries();
  // Resizes the stack | See for data loss!
  void resize(int size);
  // Returns the size
  int getSize();
};


#endif
