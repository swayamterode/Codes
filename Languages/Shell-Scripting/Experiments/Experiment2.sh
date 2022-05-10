echo "Swayam Terode SITA45"
echo "Enter a Number"
read n
i=1

while [ $i -le 10 ]
do
    echo " $n x $i = $(( n * i ))"
    i=$(( i + 1 ))
done