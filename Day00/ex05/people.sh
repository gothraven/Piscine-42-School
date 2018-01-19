ldapsearch -Q 'uid=z*' | grep 'cn:' | sort -r -f | sed 's/cn: //'
