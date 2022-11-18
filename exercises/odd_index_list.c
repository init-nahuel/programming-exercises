#include <stdio.h>
#include <assert.h>

/*
* Given a list of numbers, return the rest value of iterate over the list extracting only the values of odd index
* Ex: [1,2,3,4] -> [2,4] -> [4] -> 4
*/

int odd_index_list(int* L, int n);

int main() {
  int l1[] = {1,2,3,4,5,6,7,8};
  assert(odd_index_list(l1, sizeof(l1)/sizeof(int)) == 8);
  int l2[] = {1,3,5};
  assert(odd_index_list(l2, sizeof(l2)/sizeof(int)) == 3);
  int l3[] = {0,1,2,3,4};
  assert(odd_index_list(l3, sizeof(l3)/sizeof(int)) == 3);
  int l4[] = {1};
  assert(odd_index_list(l4, sizeof(l4)/sizeof(int)) == 1);
  int l5[] = {1,2};
  assert(odd_index_list(l5, sizeof(l5)/sizeof(int)) == 2);
  
  return 0;
}

// Time complexity O(1)
int odd_index_list(int* L, int n) {
  if (n == 1) return L[0];
  if (n % 2 == 0) return L[(n-1)];
  return L[(n-1)-1];
}