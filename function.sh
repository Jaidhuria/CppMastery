#!/bin/bash

showtime(){
	up =$(uptime -p | cut -c4-)
	since=$(uptime -s)

	cat << EOF
------

this machine has been up for ${up}
It has been running since ${since}

------
EOF
}
showtime
