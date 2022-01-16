#!/usr/bin/bash

echo "How many times have ABC held?"
read input
mkdir ABC/$input
echo https://atcoder.jp/contests/abc$input/ > ABC/$input/README.md
cp template/Makefile ABC/$input/Makefile
echo "What file do you want to make?"
echo "When to finish you type end"
while true
do
	read file_name
	if [ $file_name = "end" ]; then
  		exit
	else
		cp template/main.c ABC/$input/$file_name.c
	fi
done

