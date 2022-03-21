#! /bin/bash 

hello=3

# -gt is for greater than 
# -ne is for not equal too 
# -eq is eual 
# you can also use angle brackets

if (( $hello < 2 ))
then
  echo " Damn! "
else 
  echo "No Damn !"
fi
