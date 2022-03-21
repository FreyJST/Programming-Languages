#! /bin/bash 

a=5

# ir can put && operator insted of -a
if [ "$a" -gt 3 -a "$a" -lt 6 ]
then 
  echo "true"
else 
  echo "false"
fi
