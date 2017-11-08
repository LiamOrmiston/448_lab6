#include "TestSuite.h"

TestSuite::TestSuite(){}

void TestSuite::test() const {
  IsEmpty_EmptyList();
  IsEmpty_PopList();
  addBack_AddToEmpty();
  addBack_IncreaseSize();
}
  // given an empty list. Should return true.
  bool TestSuite::IsEmpty_EmptyList() const {
    std::cout << "Test 1 - isEmpty given an empty list: ";
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
  bool TestSuite::IsEmpty_PopList() const {
    std::cout << "Test 2 - isEmpty is given a list of size 1: ";
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

  // given an empty list, add 1 element.
  // should return true if the correct element appears, false otherwise.
  bool TestSuite::addBack_AddToEmpty() const {
    std::cout << "Test 3 - addBack to empty list: ";
    LinkedListOfInts list;
    list.addBack(42);
    list.toVector();
    std::vector<int> expected_element = {42};
    if (expected_element == list.toVector()) {
      std::cout << "passed.\n";
      return true;
    }
    else {
      std::cout << "failed!\n";
      return false;
    }
  }

  bool TestSuite::addBack_IncreaseSize() const {
    std::cout << "Test 4 - addBack increases size correctly: ";
    LinkedListOfInts list;
    int size = 10;
    for (int i = 0; i < size; i++) {
      list.addBack(i);
    }
    if (list.size() == size) {
      std::cout << "passed.\n";
      return true;
    }
    else {
      std::cout << "failed!\n";
      return false;
    }
  }
