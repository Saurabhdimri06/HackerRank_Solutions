#Conditions in Bash

read x
read y
read z

if [ $x -eq $y ] && [ $y -eq $z ]
then
    echo "EQUILATERAL"
fi
if [ $x == $y ] || [ $y == $z ]
then
    if [ $y != $z ] || [ $x != $z ]
    then
    echo "ISOSCELES"
    fi
fi
if [ $x != $y ] && [ $y != $z ]
then
    echo "SCALENE"
fi