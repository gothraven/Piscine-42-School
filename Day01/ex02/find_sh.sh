find . -type f -name "*.sh" | sed 's/\.sh$//1' | sed 's/.*\///'
