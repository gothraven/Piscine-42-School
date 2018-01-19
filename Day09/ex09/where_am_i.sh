
IP=$(ifconfig | grep 'inet ' | cut -d " " -f 2 | tr ' ' '\n')

if test -z "$IP"
then
		echo "Je suis perdu!"
	else
			echo "$IP"
fi
