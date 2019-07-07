#Capping the Floating value

read A
printf "%.3f" $(echo "$A" | bc -l)