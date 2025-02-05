CFLAGS=-O0
PROGS=binary-layout print-syms check-writes null gets-stack more more2 gets-malloc

all: $(PROGS)

clean:
	rm $(PROGS)

binary-layout: binary-layout.c
	cc $(CFLAGS) -o binary-layout binary-layout.c

print-syms: print-syms.c
	cc $(CFLAGS) -o print-syms print-syms.c

check-writes: check-writes.c
	cc -g $(CFLAGS) -o check-writes check-writes.c

null: null.c
	cc -g $(CFLAGS) -o null null.c

gets-stack: gets-stack.c
	cc -g $(CFLAGS) -o gets-stack gets-stack.c

more: more.c
	cc -g $(CFLAGS) -o more more.c

more2: more2.c
	cc -g $(CFLAGS) -o more2 more2.c

gets-malloc: gets-malloc.c
	cc -g $(CFLAGS) -o gets-malloc gets-malloc.c
