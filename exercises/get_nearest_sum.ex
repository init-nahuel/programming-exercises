defmodule Recursion do

  def get_nearest_sum([head_1 | tail_1], [head_2 | tail_2], value) do
    diff = value - (head_1 + head_2)
    if diff == 0 do
      {head_1, head_2}
    else
      recursion_list2(head_1, tail_2, diff, value, head_1, head_2, tail_1, [head_2 | tail_2])
    end
  end

  # Recursion over items of list_2
  def recursion_list2(i, [head_2 | tail_2], diff, value, list_1_candidate, list_2_candidate, tail_1, list_2) do
    new_diff = value - (i + head_2)
    cond do
      new_diff == 0 -> {i, head_2}
      abs(diff) > abs(new_diff) -> recursion_list2(i, tail_2, new_diff, value, i, head_2, tail_1, list_2)
      true -> recursion_list2(i, tail_2, diff, value, list_1_candidate, list_2_candidate, tail_1, list_2)
    end
  end

  def recursion_list2(_i, [], diff, value, list_1_candidate, list_2_candidate, tail_1, list_2) do
    recursion_list1(tail_1, list_2, diff, value, list_1_candidate, list_2_candidate)
  end

  # Recursion over items of list_1
  def recursion_list1([head_1 | tail_1], [head_2 | tail_2], diff, value, list_1_candidate, list_2_candidate) do
    new_diff = value - (head_1 + head_2)
    cond do
      new_diff == 0 -> {head_1, head_2}
      abs(diff) > abs(new_diff) -> recursion_list2(head_1, tail_2, new_diff, value, head_1, head_2, tail_1, [head_2 | tail_2])
      true -> recursion_list2(head_1, tail_2, diff, value, list_1_candidate, list_2_candidate, tail_1, [head_2 | tail_2])
    end
  end

  def recursion_list1([], _list2, _diff, _value, list_1_candidate, list_2_candidate) do
    {list_1_candidate, list_2_candidate}
  end

end