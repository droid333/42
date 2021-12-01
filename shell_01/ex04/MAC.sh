#!/bin/sh
ifconfig | grep 'ether' | cut -f 2 | cut -d " " -f 2
