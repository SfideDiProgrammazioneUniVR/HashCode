#!/bin/bash
pssh -h IP.txt -i -O 'StrictHostKeyChecking no' "./current $1 $2" '$(cat /tmp/sh_id)'
