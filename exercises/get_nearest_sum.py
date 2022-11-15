# Search a pair of elements (one from list1 and the other from list2) whose sum is closest to value.

def get_nearest_sum(list1, list2, value):
  a = list1[0]
  b = list2[0]
  diff = value - (a+b)
  for i in list1:
    for j in list2:
      sum = i+j
      if (sum == value):
        a = i
        b = j
        return (a, b)
      if (abs(value-sum) < abs(diff)):
        diff = value - sum
        a = i
        b = j
  return (a, b)

list_1 = [7, 6, 10, -1]
list_2 = [8, 10, 29, 12]
value = 19
assert get_nearest_sum(list_1, list_2, value) == (7, 12)

list_1 = [24, 29, 9, 4, 21, 13, -2, 9, 10, 20]
list_2 = [14, 16, -3]
value = 23
assert get_nearest_sum(list_1, list_2, value) == (9, 14)

list_1 = [8, 13, 19, 24, 30]
list_2 = [20, 7, 28, 0]
value = 23
assert get_nearest_sum(list_1, list_2, value) == (24, 0)

list_1 = [21]
list_2 = [1]
value = 22
assert get_nearest_sum(list_1, list_2, value) == (21, 1)

list_1 = [0]
list_2 = [1]
value = 22
assert get_nearest_sum(list_1, list_2, value) == (0, 1)