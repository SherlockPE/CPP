#!/bin/bash

i=0;

while [ $i -le 3 ]
do
    mkdir -p "ex0$i"
    touch "ex0$i/main.cpp"
    touch "ex0$i/Makefile"
    cat prot > "ex0$i/Makefile"
    i=$(($i + 1))
done
