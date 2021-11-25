CPP=g++ --std=c++11
CFLAGS= -Wall

Objet : main.o ObjetAbst.o ObjetAtomique.o
	$(CPP) $(CFLAGS) -o $@ $^

main.o : main.cpp ObjetAbst.hpp
	$(CPP) $(CFLAGS) -c $<

ObjetAtomique.o : ObjetAtomique.cpp ObjetAtomique.hpp ObjetAbst.hpp
	$(CPP) $(CFLAGS) -c $<

ObjetAbst.o : ObjetAbst.cpp ObjetAbst.hpp
	$(CPP) $(CFLAGS) -c $<

clean :
	rm *.o
