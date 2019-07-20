#Task

#You are given the year, and you have to write a function to check if the year is leap or not.
#Note that you have to complete the function and remaining code is given as template

#=========================================================================================================

#SOLUTION

def is_leap(year):
    return year % 4 == 0 and (year % 400 == 0 or year % 100 != 0)

year = int(raw_input())
print is_leap(year)