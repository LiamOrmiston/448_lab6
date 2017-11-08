#include "TestSuite.h"

TestSuite::TestSuite(){}

void TestSuite::test() const {
  IsEmpty_EmptyList();
  IsEmpty_PopList();
  addBack_AddToEmpty();
  addBack_IncreaseSize();
  addBack_AddToBack();
  addFront_AddToEmpty();
  addFront_IncreaseSize();
  addFront_AddToFront();

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

  // calls addBack once. Checks size of list. If size is correct return true.
  // False otherwise.
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
  // calls addBack twice. Checks order. Returns true if order is correct.
  // False otherwise
  bool TestSuite::addBack_AddToBack() const {
    std::cout << "Test 5 - addBack actually adds to the back: ";
    LinkedListOfInts list;
    list.addBack(1);
    list.addBack(42);
    std::vector<int> expected = {1, 42};
    std::vector<int> actual = {1, 42};

    if (expected == actual) {
      std::cout << "passed.\n";
      return true;
    }
    else {
      std::cout << "failed!\n";
      return false;
    }
  }
  bool TestSuite::addFront_AddToEmpty() const {
    std::cout << "Test 6 - addFront to empty list: ";
    LinkedListOfInts list;
    list.addFront(42);
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
  bool TestSuite::addFront_IncreaseSize() const {
    std::cout << "Test 7 - addFront increases size correctly: ";
    LinkedListOfInts list;
    int size = 10;
    for (int i = 0; i < size; i++) {
      list.addFront(i);
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
  bool TestSuite::addFront_AddToFront() const {
    std::cout << "Test 8 - addFront actually adds to the front: ";
    LinkedListOfInts list;
    list.addFront(1);
    list.addFront(42);
    std::vector<int> expected = {1, 42};
    std::vector<int> actual = {1, 42};

    if (expected == actual) {
      std::cout << "passed.\n";
      return true;
    }
    else {
      std::cout << "failed!\n";
      return false;
    }
  }
//   void TestSuite::printVector(std::vector<int> myVector) const{
//   std::cout << "(";
//   for (std::size_t i = 0; i < myVector.size()-1; i++){
//     std::cout << myVector[i] << ", ";
//   }
//   std::cout << myVector[myVector.size()-1] << ')';
// }
//      std::cout << "expected: "; printVector(expected); std::cout << "\n";
//      std::cout << "actual: "; printVector(actual); std::cout << "\n";
