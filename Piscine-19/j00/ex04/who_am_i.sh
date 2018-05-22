#!/bin/sh
ldapwhoami -Q | sed -e "s/dn://"
