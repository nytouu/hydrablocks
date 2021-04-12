.POSIX:

PREFIX = /usr/local
CC = gcc

hydrablocks: main.o
	$(CC) main.o -lX11 -o hydrablocks
main.o: main.c config.h
	$(CC) -c main.c
clean:
	rm -f *.o *.gch hydrablocks
install: hydrablocks
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f hydrablocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/hydrablocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/hydrablocks

.PHONY: clean install uninstall
