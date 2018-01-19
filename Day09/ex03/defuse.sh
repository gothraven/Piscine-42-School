touch -r bomb.txt -A -000001 -a bomb.txt && stat -r bomb.txt | cut -d ' ' -f 9
