all: out

out: printerarray.o second_task.o magic_matrix.o 
	g++ second_task.o printerarray.o magic_matrix.o  -o out

second_task.o: second_task.cpp
	g++ -c second_task.cpp

printerarray.o: printerarray.cpp
	g++ -c printerarray.cpp

magic_matrix.o: magic_matrix.cpp
	g++ -c magic_matrix.cpp
	
clean:
	rm -rf *.o out