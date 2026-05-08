#!/bin/bash

fruit="apple"

case $fruit in

apple)
    echo "Red fruit"
    ;;

banana)
    echo "Yellow fruit"
    ;;

*)
    echo "Unknown fruit"
    ;;

esac

