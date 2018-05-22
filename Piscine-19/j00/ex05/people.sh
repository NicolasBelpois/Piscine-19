#!/bin/sh
ldapsearch -QLLL | grep -i "cn: z" | sort -fr

