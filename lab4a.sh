#!/bin/bash
echo "Enter filename : "
read filename

l=`grep [0-9] $filename`

echo $l

