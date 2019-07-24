#TASK
#In this challenge, the user enters a string and a substring. You have to print the number of times that the substring occurs in the given string. 
#String traversal will take place from left to right, not from right to left. 

#=====================================================================================================

#SOLUTION

def count_substring(string, sub_string):
    count=0
    for i in range(0, len(string)-len(sub_string)+1):
        if string[i] == sub_string[0]:
            f=1
            for j in range (0, len(sub_string)):
                if string[i+j] != sub_string[j]:
                    f=0
                    break
            if f==1:
                count += 1
    return count
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)