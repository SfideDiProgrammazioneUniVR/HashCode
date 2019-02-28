#!/bin/bash
pssh -h IP.txt -i -O 'StrictHostKeyChecking no' 'export PID=$(pgrep current); kill -SIGUSR1 $PID'
