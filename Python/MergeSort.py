def merge_sort(nums, start, end):
    if start < end:
        mid = (start + (end-1)) // 2
        merge_sort(nums, start, mid)
        merge_sort(nums, mid + 1, end)
        merge(nums, start, mid, end)


def merge(nums, start, mid, end):
    n1 = mid - start + 1
    n2 = end - mid

    left = [0] * (n1)
    right = [0] * (n2)

    for i in range(n1):
        left[i] = nums[start + i]
    for j in range(n2):
        right[j] = nums[mid + 1 + j]

    i, j = 0, 0
    k = start

    while i < n1 and j < n2:
        if left[i] <= right[j]:
            nums[k] = left[i]
            i += 1
        else:
            nums[k] = right[j]
            j += 1
        k += 1

    while i < n1:
        nums[k] = left[i]
        i += 1
        k += 1

    while j < n2:
        nums[k] = right[j]
        j += 1
        k += 1


if __name__ == "__main__":
    nums = [5, 2, 4, 6, 1, 3]
    merge_sort(nums, 0, len(nums) - 1)
    print(nums)
