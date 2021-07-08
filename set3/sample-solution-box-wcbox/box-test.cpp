#include "box.h"
#include "wcbox.h"
#include <gtest/gtest.h>
namespace {

class BoxTest : public ::testing::Test {

protected:
  void SetUp() { // override {
    bptr = new WCBox(10, 12, 5, RED, 100);
  }
  void TearDown() { delete bptr; }
  Box *bptr;
};

TEST_F(BoxTest, DefaultConstructor) {
  WCBox b1;
  EXPECT_EQ(0, b1.length());
  EXPECT_EQ(0, b1.breadth());
  EXPECT_EQ(0, b1.height());
  EXPECT_EQ(BLACK, b1.color());
  EXPECT_EQ(0, b1.weight());
}
TEST_F(BoxTest, ParameterizedConstructor) {
  WCBox w1(12, 8, 10, GREEN, 150);
  EXPECT_EQ(12, w1.length());
  EXPECT_EQ(8, w1.breadth());
  EXPECT_EQ(10, w1.height());
  EXPECT_EQ(960, w1.volume());
  EXPECT_EQ(592, w1.totalSurfaceArea());
  EXPECT_EQ(GREEN, w1.color());
  EXPECT_EQ(150, w1.weight());
}
TEST_F(BoxTest, ComputationTest) {
  EXPECT_EQ(600, bptr->volume());
  EXPECT_EQ(460, bptr->totalSurfaceArea());
}
TEST_F(BoxTest, AnotherTest) {
  WCBox w2(5, 8, 10, BLUE, 180);
  Box *uptr = &w2;
  EXPECT_EQ(5, w2.length());
  EXPECT_EQ(8, w2.breadth());
  EXPECT_EQ(10, w2.height());
  EXPECT_EQ(BLUE, w2.color());
  EXPECT_EQ(180, w2.weight());
  EXPECT_EQ(400, uptr->volume());
  EXPECT_EQ(340, uptr->totalSurfaceArea());
}
} // namespace
