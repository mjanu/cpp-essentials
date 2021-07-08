#include "wcbox.h"
WCBox::WCBox() : m_color(BLACK), m_weight(0) {}
WCBox::WCBox(int l, int b, int h, color_t color, int weight)
    : Box(l, b, h), m_color(color), m_weight(weight) {}
color_t WCBox::color() const { return m_color; }
int WCBox::weight() const { return m_weight; }
int WCBox::volume() const { return length() * breadth() * height(); }
int WCBox::totalSurfaceArea() const {
  return 2 * length() * breadth() + 2 * breadth() * height() +
         2 * length() * height();
}
