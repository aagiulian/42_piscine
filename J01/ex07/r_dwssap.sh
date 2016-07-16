cat /etc/passwd | sed '/^#/d' | awk 'NR%2==0' | rev | sort -r | rev | cut -d: -f1 | rev | sed -n "$FT_LINE1,$FT_LINE2 p" | sed 's/$/, /' | tr -d '\n' | rev | sed 's/ ,/./' | rev | tr -d '\n'
