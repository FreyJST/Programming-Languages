#! /bin/bash 

fish=beta
case $fish in 
  "tuna" )
    echo "man this is tuna fish" ;;
    "catfish" )
      echo "this is cat fish" ;;
    "beta" )
      echo "this is beta" ;;
    "wale" )
      echo "lol this is a wale" ;;
    * )
      echo "this is something else but not a fish" ;;
  esac
