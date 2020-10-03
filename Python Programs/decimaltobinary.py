#This program calculates the binary equivalent of a decimal number'''

def decimalToBinary(n):
   if n > 1:
       decimalToBinary(n//2)
   print(n % 2,end = '')

if __name__ == '__main__':
    userInput = int(input('Enter the decimal number to find its binary equivalent: '))
    decimalToBinary(userInput)
    print()