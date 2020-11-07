class Node:
    def __init__(self, data):

        self.left = None
        self.right = None
        self.data = data

    def insert(self, data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data

    def display(self):
        if self.left:
            self.left.display()
        print(self.data)
        if self.right:
            self.right.display()


root = Node(0)
print("\n1. Insert an element\n2. Display the elements\n3. Exit\n")

while True:
    op = int(input("Enter your choice : "))
    if op == 1:
        root.insert(int(input("Enter your choice : ")))
    elif op == 2:
        root.display()
    elif op == 4:
        quit()
    else:
        print("Wrong choice !!! Try again")
