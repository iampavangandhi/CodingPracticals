'''
this script converts uuper case to lower 
ans lower case to upper letter wise
'''

def reverse_letter_case(s):
    ans = ""

    for x in range(len(s)):
        if s[x].isupper():
            ans += s[x].lower()
        elif s[x].islower():
            ans += s[x].upper()
        else:
            ans += s[x]

    return ans

inp = input("Enter a string : ")
print("Reversing cases : "+reverse_letter_case(inp))