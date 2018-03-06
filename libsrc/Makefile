#######################
# Makefile
#######################

# compile and lib parameter
CC      := g++
LIBS    :=
LDFLAGS :=
DEFINES :=
INCLUDE := -I.
CFLAGS  := 
CXXFLAGS:= 

# link parameter
LIB := libtest_library.so

#link
$(LIB):test_library.o
	$(CC) -shared -o -fPIC -o $@ $^
#compile
test_library.o:test_library.cc
	$(CC) -c -fPIC $^ -o $@ 

# clean
clean:
	rm -fr *.o