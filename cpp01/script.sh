#!/bin/bash

i=0;

while [ $i -le 6 ]
do
    mkdir "ex0$i"
    i=$(($i + 1))
done
