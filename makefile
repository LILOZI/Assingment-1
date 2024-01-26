# Compiler
CC = gcc
AR = ar

# Flags
CFLAG = -Wall -g #For adding warnings
STAT = -rcs
DYN = -shared -o

# Object files
OBJECTFILESLOOPS = basicClassification.o advancedClassificationLoop.o
OBJECTFILESREC = basicClassification.o advancedClassificationRecursion.o

all: loops recursives recursived loopd basicClassification.o advancedClassificationLoop.o advancedClassificationRecursion.o main.o libclassrec.a mains maindrec maindloop
loops: $(OBJECTFILESLOOPS)
	$(AR) $(STAT) libclassloops.a $(OBJECTFILESLOOPS) 

recursives: $(OBJECTFILESREC)
	$(AR) $(STAT) libclassrec.a $(OBJECTFILESREC) 

recursived: $(OBJECTFILESREC)
	$(CC) $(CFLAG) $(DYN) libclassrec.so $(OBJECTFILESREC) 

loopd: $(OBJECTFILESLOOPS)
	$(CC) $(CFLAG) $(DYN) libclassloops.so $(OBJECTFILESLOOPS) 

mains: main.o libclassrec.a
	$(CC) $(CFLAG) $< ./libclassrec.a -o $@
maindrec: main.o libclassrec.so
	$(CC) $(CFLAG) $< ./libclassrec.so -o $@
maindloop: main.o libclassloops.so
	$(CC) $(CFLAG) $< ./libclassloops.so -o $@

main.o: main.c NumClass.h
	$(CC) -c main.c 

basicClassification.o: basicClassification.c NumClass.h
	$(CC) -c basicClassification.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) -c advancedClassificationRecursion.c

advancedClassificationLoop.c: advancedClassificationLoop.c NumClass.h
	$(CC) -c advancedClassificationLoop.c

.PHONY: make clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
