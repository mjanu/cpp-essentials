#include "box.h"
Box::Box() : m_length(0), m_breadth(0), m_height(0) {}
Box::Box(int l, int b, int h) : m_length(l), m_breadth(b), m_height(h) {}
int Box::length() const { return m_length; }
int Box::breadth() const { return m_breadth; }
int Box::height() const { return m_height; }
