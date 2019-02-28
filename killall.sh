#!/bin/bash
pssh -h IP.txt -i -O 'StrictHostKeyChecking no' 'export PID=$(pgrep current); kill -9 $PID'
