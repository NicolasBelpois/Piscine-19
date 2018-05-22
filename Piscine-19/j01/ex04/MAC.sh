#!/bin/sh
ifconfig -a link | grep "ether" | cut -c7-

