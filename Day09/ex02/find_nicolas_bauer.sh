cat $1 | grep -i 'Nicolas' | grep -i 'Bauer' | cut -d "	" -f 3 | grep '[0-9]'
