L=landslide -cr -l table -x tables,abbr --debug
CC=gcc 

build: 
	$(L) babbyc.md 
	$(CC) hello.c -o hello 

clean: 
	rm -f hello
	rm -f presentation.html
	rm -rf ./theme
