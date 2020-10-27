exe_so:main.c libmax.so libsum.so
	gcc main.c -L ../lib -lmax -lsum -I ../include -o exe_so
libmax.so:max.o
	gcc -shared -o libmax.so max.o
libsum.so:sum.o
	gcc -shared -o libsum.so sum.o
max.o:max.c
	gcc -fPIC max.c -I ../include -c
sum.o:sum.c
	gcc -fPIC sum.c -I ../include -c
