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
