#!/bin/bash
# How to use:
# $nmap.sh ${ip_address}
# $nmap.sh &{ip_address}/${mask}

# Output if host is up:
# ${ip_addr} Up

# There is no output if host is down

nmap -sn $1 -oG - | awk '$4=="Status:" && $5=="Up" {print $2, $5}'
