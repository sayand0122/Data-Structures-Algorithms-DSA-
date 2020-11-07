def bubble_sort(a):
    for i in range(len(a)-1):
        for j in range(len(a)-i-1):
            if a[j] < a[j+1]:
                a[j], a[j+1] = a[j+1], a[j]
    return a


a = list(map(int, input().split()))
a1 = a
a1.sort()
sort_a = bubble_sort(a)
print("Sorted array = ", a)

if a == a1:
    print("Both inbuilt and my logic have same output")
else:
    print("Answers are not the same")
