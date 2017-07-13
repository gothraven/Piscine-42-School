#touch -A -000001 -a bomb.txt | stat -t %r bomb.txt | cut -d '"' -f 2
#touch -A -000001 bomb.txt && stat -r bomb.txt | cut -d ' ' -f 9
touch -r bomb.txt -A -000001 -a bomb.txt && stat -r bomb.txt | cut -d ' ' -f 9
