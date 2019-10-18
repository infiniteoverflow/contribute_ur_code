def quicksort(arr)
  b, a = [], []
  a[0] = 0
  b[0] = arr.size
  i = 0
  while i >= 0 do
    l = a[i]
    r = b[i] - 1;
    if l < r
      pivot = arr[l]
      while l < r do
        r -= 1 while (arr[r] >= pivot && l < r)
        if (l < r)
          arr[l] = arr[r]
          l += 1
        end
        l += 1 while (arr[l] <= pivot && l < r)
        if (l < r)
          arr[r] = arr[l]
          r -= 1
        end
      end
      arr[l] = pivot
      a[i + 1] = l + 1
      b[i + 1] = b[i]
      b[i] = l
      i += 1
    else
      i -= 1
    end
  end
  arr
end
