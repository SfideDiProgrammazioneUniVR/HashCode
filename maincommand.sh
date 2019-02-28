#!/bin/bash
#Worker 0
MAINWORKER=157.27.93.147
ssh id395ljt@$MAINWORKER -p 2222 $@

# pssh -h IP.txt -i -O 'StrictHostKeyChecking no'
