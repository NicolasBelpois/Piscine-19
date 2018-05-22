#!/bin/sh
cat /etc/passwd | sed /^\#/d | sed -n 'n;p' | sort -r | sed -n "$FT_LINE1, $FT_LINE2 p" | cut -d : -f1 | tr '\n' ' ' | rev | sed -e 's/_ /_, /g' | cut -c 2- | sed 's/[^.]$/&./'


