#
# Makefile
#
# Kelvin Wong
# kwong691@gmail.com
#

CC=cc

all: any htoi squeeze

any: any.c Makefile
	$(CC) -ggdb3 -O0 -std=c99 -Wall -Werror -o any.out any.c

htoi: htoi.c Makefile
	$(CC) -ggdb3 -O0 -std=c99 -Wall -Werror -o htoi.out htoi.c

squeeze: squeeze.c Makefile
	$(CC) -ggdb3 -O0 -std=c99 -Wall -Werror -o squeeze.out squeeze.c

clean:
	rm -f *.out
