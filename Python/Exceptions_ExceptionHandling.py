'''
TASK
You are given two values A and B.
Perform integer division and print A/B . 

'''
#=========================================================================================================

#SOLUTION

for i in range(int(input())):
    try:
        a,b=map(int,input().split())
        print(a//b)
    except Exception as e:
        print("Error Code:",e)