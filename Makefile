#
# Makefile
#
# Kelvin Wong
# kwong691@gmail.com
#

all: htoi

htoi: htoi.c Makefile
	cc -ggdb3 -O0 -std=c99 -Wall -Werror -o htoi.out htoi.c

clean:
	rm -f *.out
