#!/bin/bash
echo "Enter a :"
read a
echo "Enter b :"
read b
c=$a$b
echo $c
echo `expr length "$c"`
