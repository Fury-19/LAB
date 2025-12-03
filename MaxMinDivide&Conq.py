def get_min_max(arr, left, right):
    if left == right:
        return arr[left], arr[left]

    if right == left + 1:
        return (min(arr[left], arr[right]), max(arr[left], arr[right]))

    mid = (left + right) // 2

    left_min, left_max = get_min_max(arr, left, mid)
    right_min, right_max = get_min_max(arr, mid + 1, right)

    return min(left_min, right_min), max(left_max, right_max)

arr = [5, 2, 9, 1, 7]
mn, mx = get_min_max(arr, 0, len(arr) - 1)
print(mn, mx)