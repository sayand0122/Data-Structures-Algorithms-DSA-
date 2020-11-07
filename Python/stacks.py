def push(stack, n, size):
    if len(stack) == size:
        print("Stack is in overflow condition")
    else:
        stack.append(n)
        return stack


def pop():
    if len(stack)==0:
        print('Stack is empty!!! Operation terminated')
    else:
        stack.pop()
        return stack


def display():
    print(stack)


stack = list(input().split())
size = int(input('Enter the maximum size of stack: - '))

while True:
    print('\n')
    print('Enter 1 for pushing in stack')
    print('Enter 2 for removing element in stack')
    print('Enter 3 for displaying current status of stack')
    print('Enter 4 for exit')
    c = int(input())
    print('\n')
    if c == 1:
        n = int(input('Enter the element tp push: - '))
        stack = push(stack, n, size)
    elif c == 2:
        stack=pop()
    elif c == 3:
        display(stack)
    elif c == 4:
        exit()
    else:
        print('Verify your input')
