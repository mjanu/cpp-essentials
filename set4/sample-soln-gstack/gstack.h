#ifndef __GSTACK_H
#define __GSTACK_H

#define MAX_SIZE 50  //better choice : constexpr , added in C++11

template <typename T> class MyStack {
  T m_arr[MAX_SIZE];
  int m_top;
  const int m_maxlen;

public:
  MyStack();
  MyStack(int len);
  void push(T val);
  T pop();
  T peek() const;
  bool isEmpty() const;
  bool isFull() const;
};

/* Note:- In case of templates it's OK to have definitions in header only */

template <typename T> MyStack<T>::MyStack() : m_top(-1), m_maxlen(MAX_SIZE) {}

template <typename T>
MyStack<T>::MyStack(int len) : m_top(-1), m_maxlen(len) {} // len < MAX_SIZE

template <typename T> void MyStack<T>::push(T val) {
  // TODO:overflow check
  m_arr[++top] = val;
}

template <typename T> T MyStack<T>::pop() {
  // TODO:underflow check
  return m_arr[top--];
}

template <typename T> T MyStack<T>::peek() const {
  return m_arr[top];
}

template <typename T> T MyStack<T>::isEmpty() { return top == -1; }

template <typename T> T MyStack<T>::isFull() { return top == maxlen - 1; }

#endif
