#To print given number in reverse order
# Swayam Terode SITA45

echo "Enter a number"
read n
sd=0
rev=0

while [ $n -gt 0 ]
do
    sd=$(( $n % 10 ))
    rev=`expr $rev \* 10 + $sd` 
    n=$(( $n / 10 ))
done

echo "Reverse number of entered digit is $rev"