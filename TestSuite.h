#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "LinkedListOfInts.h"
#include <vector>
#include <string>

class TestSuite {
public:
  TestSuite();
  void test() const;
private:
  bool IsEmpty_EmptyList() const;
  bool IsEmpty_PopList() const;
}
