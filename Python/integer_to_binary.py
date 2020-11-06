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


def convert_int_to_bin(dec_num):
    s = Stack()

    while dec_num > 0:
        remainder = dec_num % 2
        s.push(remainder)
        dec_num = dec_num // 2

    bin_num = ""
    while not s.isEmpty():
        bin_num += str(s.pop())

    return bin_num


num = int(input("Enter the decimal integer : "))
print(convert_int_to_bin(num))
