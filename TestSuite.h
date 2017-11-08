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
  bool addBack_AddToEmpty() const;
  bool addBack_IncreaseSize() const;
  bool addBack_AddToBack() const;
  bool addFront_AddToEmpty() const;
  bool addFront_IncreaseSize() const;
  bool addFront_AddToFront() const;
  bool removeBack_RemoveOnEmpty() const;
  bool removeBack_DecreaseSize() const;
  bool removeBack_RemovesTheBack() const;
  bool removeFront_RemoveOnEmpty() const;
  bool removeFront_DecreaseSize() const;
  bool removeFront_RemovesTheFront() const;
  void printVector(std::vector<int> myVector) const;
};
#endif
