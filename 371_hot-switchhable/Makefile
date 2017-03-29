hfcal.o: hfcal.c
	gcc -I./include -fPIC -c hfcal.c -o hfcal.o
libhfcal.ddl.a: hfcal.o
	gcc -shared hfcal.o -o ./libs/libhfcal.ddl.a
elliptical.o: elliptical.c
	gcc -I./include -c elliptical.c -o elliptical.o
elliptical: elliptical.o libhfcal.ddl.a
	gcc elliptical.o -L./libs -lhfcal.ddl -o ./libs/elliptical
