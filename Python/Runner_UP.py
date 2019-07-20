#TASK

#Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given scores. 
#Store them in a list and find the score of the runner-up. 

#======================================================================================================

#SOLUTION

if __name__ == '__main__':
    n = int(raw_input())
    arr = list(map(int, raw_input().split()))
    l = max(arr)

    for i in range(n):
        if l == max(arr):
            arr.remove(l)
    
    print(max(arr))
