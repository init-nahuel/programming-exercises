#include <stdio.h>
#include <assert.h>

/*
* Given an array, calculate the sum of all possible subarrays such as none of the subarrays are have not consecutive values of 
* the original array.
* Ex: [1,2,3] -> 20
* Explanation: Given the array [1,2,3] the only possible subarrays are [], [1], [2], [3], [1,2,3], [1,2] and
* [2,3], so the sum of all this subarrays are 0 + 1 + 2 + 3 + 6 + 3 + 5 = 20.
*/

int sub_array_sum(int* L, int n);
int sum(int* L, int n);

int main() {
  int l1[] = {1,2,3};
  assert(sub_array_sum(l1, sizeof(l1)/sizeof(int)) == 20);
  int l2[] = {0};
  assert(sub_array_sum(l2, sizeof(l1)/sizeof(int)) == 0);
  int l3[] = {2,3,6,1};
  assert(sub_array_sum(l3, sizeof(l1)/sizeof(int)) ==  66);

  return 0;
}

int sum(int* L, int n) {
  int total = 0;
  for (int i=0; i<n; i++) {
    total += L[i];
  }
  return total;
}

int sub_array_sum(int* L, int n) {
  int j = n-1;
  total = 0;
  int i = 0;
  do {
    total += sum(L+i, j+1-i);
    if (i == j) {
      i = 0;
      j--;
    }
    i++;
  } while(i != j);
  return total;
}