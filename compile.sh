#!/bin/bash
#Worker 0
MAINWORKER=157.27.93.147
scp -P 2222 "$1" id395ljt@$MAINWORKER:/home/accounts/studenti/id395ljt/current.cpp
ssh id395ljt@$MAINWORKER -p 2222 g++ current.cpp -O2 -o current

# pssh -h IP.txt -i -O 'StrictHostKeyChecking no'
