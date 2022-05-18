#!/usr/bin/env bash
printf "interval: 0.1s | Current CPU Freq: "
while :

do
	cpupower frequency-info |cat -n|grep 12 | awk '{print "\x1b[40G\x1b[31m",$5,$6}'| cat | xargs -n1 printf
	sleep 0.1
	cpupower frequency-info |cat -n|grep 12 | awk '{print "\x1b[40G\x1b[38m",$5,$6}'| cat | xargs -n1 printf
		sleep 0.1
done

