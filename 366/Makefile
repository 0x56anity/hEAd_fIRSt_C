hfcal.o: hfcal.c
	gcc -I./include -c hfcal.c -o hfcal.o
elliptical.o: elliptical.c
	gcc -I./include -c elliptical.c -o elliptical.o
libhfcal.a: hfcal.o elliptical.o
	ar -rcs ./libs/libhfcal.a hfcal.o
elliptical: libhfcal.a
	gcc elliptical.o -L./libs -lhfcal -o elliptical
