#!/bin/bash
echo "Enter Value for a : "
read a
echo "enter value for b : "
read b
clear

a=`expr $a + $b`
b=`expr $a - $b`
a=`expr $a - $b`

echo a = $a
echo b = $b


