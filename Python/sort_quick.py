def part(a, low, high):
    i = (low-1)
    p = a[high]
    for j in range(low, high):
        if a[j] < p:
            i = i+1
            a[i], a[j] = a[j], a[i]

        a[i+1], a[high] = a[high], a[i+1]
        return (i+1)


def quick_sort(a, low, high):
    if low < high:
        pi = part(a, low, high)
        quick_sort(a, low, pi-1)
        quick_sort(a, pi+1, high)


a = list(map(int, input().split()))
n = len(a)
a1 = a.sort()
sort_a = quick_sort(a, 0, n-1)
print("Sorted array = ", a)

if a == a1:
    print("Both inbuilt and my logic have same input")
else:
    print("Answers are not the same")
