'''
This program takes user input and removes vowels from it
'''

def isVowel(ch):
    vowels = "aeiouAEIOU"
    if ch in vowels:
        return True
    else:
        return False


user_inp = input("Enter String consisting of vowels : ")

print("Vowels removed from the string : ",end="")

for x in range(len(user_inp)):
    if not isVowel(user_inp[x]):
        print(user_inp[x],end="")