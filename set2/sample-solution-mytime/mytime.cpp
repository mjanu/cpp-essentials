#include "mytime.h"

MyTime::MyTime() : m_hours(0), m_minutes(0), m_seconds(0) {}
MyTime::MyTime(int hh, int mm, int ss)
    : m_hours(hh), m_minutes(mm), m_seconds(ss) {}
MyTime(int totalSeconds) {
  // TODO
}
MyTime::MyTime operator+(const MyTime &ref) {
  int th, tm, ts;
  // TODO: your logic here
  return MyTime(th, tm, ts);
}
MyTime::MyTime operator-(const MyTime &ref) {
  int th, tm, ts;
  // TODO: your logic here
  return MyTime(th, tm, ts);
}
MyTime::MyTime operator+(int nsecs) {
  int th, tm, ts;
  // TODO: your logic here
  return MyTime(th, tm, ts);
}
MyTime::MyTime operator-(int nsecs) {
  int th, tm, ts;
  // TODO: your logic here
  return MyTime(th, tm, ts);
}
MyTime::MyTime &operator++() {
  // TODO: your logic here
  return *this;
}
MyTime::MyTime operator++(int) {
  MyTime orig(*this);
  // TODO: your logic here
  return orig;
}
MyTime::MyTime &operator+=(const MyTime &ref) {
  // update m_hours, m_mins, m_secs based on ref
  return *this;
}
bool MyTime::operator==(const MyTime &ref) {
  // TODO: return true/false on comparing m_hours, m_mins, m_secs
  //      from current object and ref
}
bool MyTime::operator<(const MyTime &ref) {
  // TODO: return true/false on comparing m_hours, m_mins, m_secs
  //      from current object and ref
}
bool MyTime::operator>(const MyTime &ref) {
  // TODO: return true/false on comparing m_hours, m_mins, m_secs
  //      from current object and ref
}

void MyTime::dispay() const {
  // TODO: print m_hours, m_mins, m_secs in hh:mm:ss format
}
std::ostream &operator<<(const std::ostream &rout, const MyTime &ref) {
  // TODO: print m_hours, m_mins, m_secs in hh:mm:ss format, using rout and ref
}

#endif
