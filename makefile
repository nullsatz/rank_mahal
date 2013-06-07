CFLAGS = $(shell R CMD config CFLAGS) $(shell R CMD config CPICFLAGS) $(shell R CMD config --cppflags)

LAPACK_LIBS = $(shell R CMD config LAPACK_LIBS)
BLAS_LIBS = $(shell R CMD config BLAS_LIBS)
FLIBS = $(shell R CMD config FLIBS)

smahal: main.o smahal.o
	gcc -lR $(LAPACK_LIBS) $(BLAS_LIBS) $(FLIBS) -o smahal main.o smahal.o

smahal.o: smahal.c smahal.h
	clang -std=gnu99 -c $(CFLAGS) -o smahal.o smahal.c

main.o: main.c smahal.h
	clang -std=gnu99 -c $(CFLAGS) -o main.o main.c

clean:
	rm *o smahal

.PHONY: clean