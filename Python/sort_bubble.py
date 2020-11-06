def bubble_sort(a):
  for i in range(n-1):
    for j in range(n-i-1):
      if a[j]<a[j+1]:
        a[j],a[j+1]=a[j+1],a[j]
  return a
  
a=list(map(int, input().split()))
a1=a.sort()
sort_a=bubble_sort(a)
print("Sorted array = ",a)

if a == a1:
  print("Both inbuilt and my logic have same input")
else:
  print("Answers are not the same")
