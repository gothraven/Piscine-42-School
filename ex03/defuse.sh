touch -A -000001 -a bomb.txt | stat -t %r bomb.txt | cut -d '"' -f 2
