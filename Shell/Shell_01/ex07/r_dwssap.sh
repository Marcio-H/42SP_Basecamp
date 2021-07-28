#!/bin/bash
cat /etc/passwd | awk -F ":" '{print $1}' | sed '1!n;d'  \
| rev | sort --reverse | sed -n "$(echo $FT_LINE1),$(echo $FT_LINE2)p" | \
sed ':a;$!N;s/\n/, /;ta;' | tr -s '\n' '.'
