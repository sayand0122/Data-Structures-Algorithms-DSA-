def insertion_sort(a):
    for i in range(1, len(a)):
        k = a[i]
        j = i-1
        while j >= 0 and k <= a[j]:
          a[j+1] = a[j]
          j -= 1
        a[j+1] = k
    return a


a = list(map(int, input().split()))
a1 = a
a1.sort()
sort_a = insertion_sort(a)
print("Sorted array = ", a)

if a == a1:
    print("Both inbuilt and my logic have same output")
else:
    print("Answers are not the same")
