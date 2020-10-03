'''
This script finds the sum of all the digits of a number input by user
'''

def find_sum(n):
    sum_all = 0

    while n>0:
        sum_all+=n%10
        n = int(n/10)

    return sum_all

num = int(input("Enter the number : "))
print("Sum of all its digits is : "+str(find_sum(num)))