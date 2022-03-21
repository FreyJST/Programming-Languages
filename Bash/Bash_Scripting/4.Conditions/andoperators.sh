#! /bin/bash

age=16
money=5000

if [ $age -gt 18 ] 
then 
  echo "you are good to go in the sex club"
elif (( $age < 18 )) || [ $money -eq 5000 ]
then 
  echo "sir you are a minor,  but you got some cash so go on ! have fun"
  # mornal of the story money can buy you everything 
  #                                                 ~ Internetsboy 
else 
  echo "Get the fuck out of here you broke fuck" 
fi 
