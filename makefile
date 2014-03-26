default:
	gcc -Wall -pedantic -o coinflip coinflip.c

clean:
	rm -f coinflip

install:
	install -m 755 coinflip /usr/bin/
	install -m 644 coinflip.1 /usr/share/man/man1/
	mkdir /usr/share/doc/coinflip
	install -m 644 README /usr/share/doc/coinflip/
	install -m 644 LICENSE /usr/share/doc/coinflip/
	
uninstall:
	rm -f /usr/bin/coinflip
	rm -f /usr/share/man/man1/coinflip.1
	rm -rf /usr/share/doc/coinflip
	
.PHONY: install