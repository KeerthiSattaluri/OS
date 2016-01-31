#!/bin/bash
echo "Enter a and b: "
read a b
add=`expr $a + $b`
sub=`expr $a - $b`
mul=`expr $a \* $b`
echo "addition of $a and $b is $add"
echo "subtraction of $b from $a is $sub"
echo "multiplication of $a and $b is $mul"
