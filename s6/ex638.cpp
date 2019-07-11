#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
auto arrPtr(int i) -> int (&)[5] {
  return i % 2 ? odd : even;
}

int main() {
  int i;
  std::cin >> i;
  int (&arr)[5] = arrPtr(i);//arr is a ref. to an array of 5 ints.
  int *arr2 = arrPtr(i);//arr2 is a pointer points to an int.
  //int arr3[5] = arrPtr(i);  // Error
  //int (*arr4)[5] = arrPtr(i);  // Error
  std::cout << arr[0] << " " << arr2[0] << std::endl;

  for(const auto &elem:arr)
      std::cout<<elem<<'\t';
  std::cout<<std::endl;

  std::cout<<"arr2 "<<*arr2<<std::endl;
  return 0;
}

