#ifndef __BOX_H_
#define __BOX_H_

class Box {
private:
  int m_length;
  int m_breadth;
  int m_height;

public:
  Box();
  Box(int, int, int);
  int length() const;
  int breadth() const;
  int height() const;
  virtual int volume() const = 0;
  virtual int totalSurfaceArea() const = 0;
};

/* Note:- Though we can implement volume, totalSurfaceArea in Box class only
*  for Polymorhic demo purpose made pur virtual and implemented in WCBox 
*/

#endif
