##include "TestSuite.h"

TestSuite::test(){}

void TestSuite::test() const {
  // given an empty list. Should return true.
  bool TestSuite::IsEmpty_EmptyList() const {
    std::cout << "Test 1 - isEmpty given an empty list: "
    LinkedListOfInts list;
    if (list.isEmpty()) {
      std::cout << "passed.\n";
      return true;
    }
    else {
      std::cout << "failed!\n";
      return false;
    }
  }

  // given a populated list. Should return false.
  bool  TestSuite::IsEmpty_PopList() const {
    std::cout << "Test 2 - isEmpty is given a list of size 1: "
    LinkedListOfInts list;
    list.addBack(1);
    if (list.isEmpty()) {
      std::cout << "failed!\n";
      return true;
    }
    else {
      std::cout << "passed.\n";
      return false;
    }
  }
}
