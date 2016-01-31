#!/bin/bash
echo "Enter the four integer numbers : "
read a b c d
echo `expr $a + $b + $c + $d ` 
echo `expr $a \* $b \* $c \* $d`
echo `expr $a + $b + $c + $d` / 4
