if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))

  
def max(arr):
    max_v = arr[0]
    for value in arr:
        if value > max_v:
            max_v = value
    return max_v


def max2(arr, max):
    revised = []
    for value in arr:
        if value != max:
            revised.append(value)
    max_v2 = revised[0]
    for value in revised:
        if value > max_v2:
            max_v2 = value
    return max_v2

print(max2(arr, max(arr)))
