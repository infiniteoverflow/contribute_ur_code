def counting_sort(nums, k):
    count_occurrences = [0] * k
    output = [0] * len(nums)

    # count occurrences for each element in the array
    for i in range(len(nums)):
        count_occurrences[nums[i]] += 1

    # get the running sums
    # (The value of occurrenece at i and the value before it)
    for i in range(1, k):
        count_occurrences[i] += count_occurrences[i-1]

    # place each element where it supposed to be
    for i in range(len(nums)):
        output[count_occurrences[nums[i]] - 1] = nums[i]
        count_occurrences[nums[i]] -= 1

    return output


if __name__ == "__main__":
    # two test arrays
    nums = [2, 5, 3, 0, 2, 3, 0, 3]
    nums2 = [4, 2, 2, 8, 3, 3, 1]

    # k must be the range of the input numbers
    output = counting_sort(nums2, 9)
    # output = counting_sort(nums, 6)

    print(output)
