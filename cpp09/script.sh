#!/bin/bash

i=0;

while [ $i -le 2 ]
do
    mkdir -p "ex0$i"
    touch "ex0$i/main.cpp"
    cat ../cpp08/ex02/Makefile > "ex0$i/Makefile"
    i=$(($i + 1))
done
