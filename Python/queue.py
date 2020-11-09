queue = []


def enqueue(item):
    queue.append(item)


def deque():
    if queue:
        print(queue.pop(0), "popped!")
    else:
        print("Queue is empty")


def display():
    if queue:
        print(*queue)
    else:
        print("Queue is empty")


print("\n1. Insert an element\n2. Delete an element\n3. Display the elements\n4. Exit\n")

while True:
    op = int(input("Enter your choice : "))
    if op == 1:
        enqueue(input("Enter your input : "))
    elif op == 2:
        deque()
    elif op == 3:
        display()
    elif op == 4:
        quit()
    else:
        print("Wrong choice !!! Try again\n")
