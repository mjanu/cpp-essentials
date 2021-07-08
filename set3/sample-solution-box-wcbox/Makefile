all: all.out 
all.out : box.o wcbox.o box-test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
box-test.o: box-test.cpp box.h wcbox.h
	g++ $< -c
wcbox.o : wcbox.cpp wcbox.h box.h
	g++ $< -c    
box.o : box.cpp box.h
	g++ $< -c
clean:
	rm -rf *.o *.out
