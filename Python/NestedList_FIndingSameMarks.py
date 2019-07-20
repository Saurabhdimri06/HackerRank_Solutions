#TASK

#Given the names and grades for each student in a Physics class of N students, store them in a nested list and print the name(s) of any student(s) 
#having the second lowest grade.
#Note: If there are multiple students with the same grade, order their names alphabetically and print each name on a new line.

#=========================================================================================================

#SOLUTION

marksheet=[]
scorelist=[]
if __name__ == '__main__':
        for _ in range(int(input())):
                name = input()
                score = float(input())
                marksheet+=[[name,score]]
                scorelist+=[score]
        b=sorted(list(set(scorelist)))[1] 

        for a,c in sorted(marksheet):
             if c==b:
                    print(a)