#!/bin/sh
ldapsearch -xLLL  "(sn=*bon*)" | grep "sn:" | wc -l
