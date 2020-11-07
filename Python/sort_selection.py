def selection_sort(a):
    for i in range(len(a)):
        min_index = i
        for j in range(i+1,len(a)):
            if a[min_index] > a[j]:
                min_index = j
        tmp = a[i]
        a[i] = a[min_index]
        a[min_index] = tmp
    return a


a = list(map(int, input().split()))
a1 = a
a1.sort()
sort_a = selection_sort(a)
print("Sorted array = ", a)

if a == a1:
    print("Both inbuilt and my logic have same output")
else:
    print("Answers are not the same")