ldapsearch -Q cn | grep cn | cut -d ' ' -f3 | grep BON | wc -l | bc
