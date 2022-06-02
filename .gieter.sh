#!/usr/bin/env bash

#add self to .gitignore:
echo $0 # >> .gitignore
#make sure we so it only once!
echo 


function gitmit() {
	git commit -am ""
	}