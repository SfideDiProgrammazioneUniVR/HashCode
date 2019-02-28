#!/bin/bash
pssh -h IP.txt -i -O 'StrictHostKeyChecking no' -p 2222 $@
