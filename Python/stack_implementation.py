
import sys


class Stack():
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def peek(self):
        if not self.isEmpty():
            return self.items[-1]

    def getStack(self):
        return self.items


def menu(n):
    if n == 1:
        x = input("\nEnter the number to push : ")
        myStack.push(x)
        print(f"\n{x} pushed to Stack successfully.\n")

    elif n == 2:
        if not myStack.isEmpty():
            p = myStack.pop()
            print(f"\n{p} popped successfully from Stack.\n")
        else:
            print("\nStack is already empty.\n")

    elif n == 3:
        e = myStack.peek()
        print(f"\n{e} is at the top of the Stack.\n")

    elif n == 4:
        print("\nStack :", myStack.getStack())
        print("")

    elif n == 5:
        print("\nSayonara!\n")
        sys.exit()
    else:
        print("\nWrong Choice!!!\n")


if __name__ == "__main__":
    myStack = Stack()
    while(True):
        print("Welcome to myStack.\nHere's what you can do : ")
        print("1. Push an element")
        print("2. Pop an element")
        print("3. Peek")
        print("4. Display the Stack")
        print("5. Exit")
        print("")
        choice = int(input("Enter your choice : "))
        menu(choice)
