cat $1 | grep -i 'Nicolas	Bauer' | cut -d '	' -f 3 | sed -n 'p;n'
