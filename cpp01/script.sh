#!/bin/bash

i=0;

while [ $i -le 6 ]
do
    touch "ex0$i/main.cpp"
    touch "ex0$i/Makefile"
    i=$(($i + 1))
done
