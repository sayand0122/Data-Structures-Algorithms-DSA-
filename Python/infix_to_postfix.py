operator = {'+', '-', '*', '/', '(', ')', '^'}
priority = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}


def infix_to_postfix(expression):

    stack = []

    postfix = ''

    for ch in expression:

        if ch not in operator:
            postfix += ch

        elif ch == '(':
            stack.append('(')
            print(stack)

        elif ch == ')':

            while stack and stack[-1] != '(':

                postfix += stack.pop()

            stack.pop()
            print(stack)

        else:
            while stack and stack[-1] != '(' and priority[ch] <= priority[stack[-1]]:

                postfix += stack.pop()

            stack.append(ch)
            print(stack)

    while stack:

        postfix += stack.pop()

    return postfix


exp = input('Enter infix expression: - ')

print('infix expression: ', exp)

print('postfix expression: ', infix_to_postfix(exp))
