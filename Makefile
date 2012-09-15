L=landslide -cr -l table -x tables,abbr
CC=gcc 

build: 
	$(L) babbyc.md -o babbyc
	$(CC) hello.c -o hello 

clean: 
	rm -f hello
	rm -f babbyc 
