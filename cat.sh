#!/bin/bash
echo "enter first filename"
read first
echo "enter second filename"
read second
cat $first > fil cat $second >> fil

echo "after concatenation of contents of entered two files"
echo --------------------------
cat fil | more
echo --------------------------
