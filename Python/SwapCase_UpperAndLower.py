#You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and vice versa.

#=================================================================================================

#SOLUTION

def swap_case(s):
    new = ""
    for i in s:
        if i.isupper():
            new+=(i.lower())
        else:
            new+=(i.upper())
    return new

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)