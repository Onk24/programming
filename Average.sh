read n
m=$n
sum=0
while [ $m -gt 0 ]
do
    read s
    sum=$((s + sum))
    m=$((m - 1))
done
calc=$(echo "$sum / $n"|bc -l)
printf "%0.3f\n" $calc
