def get_nearest_sum(list1, list2, value):
  a=b=0
  diff = value - (list1[0]+list2[0])
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
print(get_nearest_sum(list_1, list_2, value))

list_1 = [8, 13, 19, 24, 30]
list_2 = [20, 7, 28, 0]
value = 23
print(get_nearest_sum(list_1, list_2, value))