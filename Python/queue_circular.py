front, rear = -1, -1
n = int(input("Enter the size of the queue : "))
queue_c = [None for _ in range(n)]


def enqueue():
    global front, rear
    if front == -1 and rear == -1:
        front, rear = 0, 0
        x = int(input("Enter the element : "))
        queue_c[rear] = x
    elif (rear + 1) % n == front:
        print("Queue is full")
    else:
        rear = (rear + 1) % n
        x = int(input("Enter the element : "))
        queue_c[rear] = x


def deque():
    global front, rear
    if front == -1 and rear == -1:
        print("Queue is empty")
    elif front == rear:
        front = -1
        rear = -1
    else:
        front = (front + 1) % n
        print("First element is removed from the queue")


def display():
    i = front
    if front == -1 and rear == -1:
        print("Queue is empty")
    else:
        while i != rear:
            print(queue_c[i], end=" ")
            i = (i + 1) % n
        print(queue_c[rear])


print("\n1. Insert an element\n2. Delete an element\n3. Display the elements\n4. Exit\n")
while True:
    op = int(input("Enter your choice : "))
    if op == 1:
        enqueue()
    elif op == 2:
        deque()
    elif op == 3:
        display()
    elif op == 4:
        quit()
    else:
        print("Wrong choice !!! Try again")
