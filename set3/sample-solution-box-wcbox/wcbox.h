#ifndef __WCBOX_H
#define __WCBOX_H

#include "box.h"

typedef enum { RED, GREEN, BLUE, BLACK, WHITE } color_t;

class WCBox : public Box {
  color_t m_color;
  int m_weight;

public:
  WCBox();
  WCBox(int x, int y, int z, color_t, int);
  color_t color() const;
  int weight() const;
  int volume() const;
  int totalSurfaceArea() const;
};

#endif
