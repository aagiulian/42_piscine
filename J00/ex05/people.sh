ldapsearch -xLLL uid='z*' cn | grep -i "cn:" | sed "s/cn: //" | sort -r
