# Shell Scripting Language (Bash / OS)

## Experiment Number 2

**Write a program in shell for printing table of any number.**

```bash
#Swayam Terode SITA45
echo "Enter a Number"
read n
i=1

while [ $i -le 10 ]
do
    echo " $n x $i = $(( n * i ))"
    i=$(( i + 1 ))
done
```

**Program** - [**Link**](https://github.com/swayamterode/Codes/blob/main/Languages/Shell-Scripting/Experiments/Experiment2.sh)

**Output** - [**Link**](https://github.com/swayamterode/Codes/blob/main/Languages/Shell-Scripting/Experiments/Output/Expeeriment2.png)

---

## Experiment Number 3 

**a) Shell script to find factorial of a number**

```bash

#To find factorial of given number
# Swayam Terode SITA45
echo "Enter a number"
read num

fact=1

while [ $num -gt 1 ]
do
    fact=$((fact * num))  #fact = fact * num
    num=$((num - 1))      #num = num - 1
done

echo $fact

```

**Program** - [**Link**](https://github.com/swayamterode/Codes/blob/main/Languages/Shell-Scripting/Experiments/Experiment3a.sh)

**Output** - [**Link**](https://github.com/swayamterode/Codes/blob/main/Languages/Shell-Scripting/Experiments/Output/Experiment3a.png)

**b) To find greatest of three number**

```cpp
# To find greatest of three number
# Swayam Terode SITA45
echo "Enter Num1"
read num1
echo "Enter Num2"
read num2
echo "Enter Num3"
read num3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
    echo "The greatest of three number is: "$num1
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
    echo "The greatest of three number is: " $num2
else
    echo "The greatest of three number is: " $num3
fi
```

