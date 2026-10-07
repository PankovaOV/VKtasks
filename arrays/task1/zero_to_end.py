def zero_to_end(arr):
    pos = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[pos], arr[i] = arr[i], arr[pos]
            pos += 1

    return arr

print(zero_to_end([0, 0, 1, 0, 3, 12]))
print(zero_to_end([0, 33, 57, 88,  60, 0, 0, 80, 99]))
print(zero_to_end([0, 0, 0, 18, 16, 0, 0, 77, 99]))
