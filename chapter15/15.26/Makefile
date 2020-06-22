objects = main.o quote.o bulk_quote.o limit_quote.o disc_quote.o
CPP = g++
CPPFLAGS = -std=c++11

test : $(objects)
	$(CPP) $(CPPFLAGS) $(objects) -o test

main.o : quote.h bulk_quote.h limit_quote.h

disc_quote.o : quote.h

bulk_quote.o : disc_quote.h

limit_quote.o : disc_quote.h

.PHONY:
clean:
	rm $(objects)
