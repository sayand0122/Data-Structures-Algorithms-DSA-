def merge_sort(arr):
    n=len(arr)
    if n>1:
        mid=n//2
        l=arr[:mid]
        r=arr[mid:]
        merge_sort(l)
        merge_sort(r)
        merge(l,r,arr)

def merge(l,r,arr):
    i=j=k=0
    while i<len(l) and j<len(r):
        if l[i]<r[j]:
            arr[k]=l[i]
            i+=1
        else:
            arr[k]=r[j]
            j+=1
        k += 1
    while i < len(l):
        arr[k] = l[i]
        k += 1
        i += 1

    while j < len(r):
        arr[k] = r[j]
        k += 1
        j += 1


array=[9,3,6,1,4,2,7,25,0,-5,1]
merge_sort(array)
print(array)