#!/bin/bash
# Program to check success status

./a.out
if [ $? -eq 0 ]
    then
    echo "Program executed successfully"
else
    echo "Program exitted with FAILURE"
fi
