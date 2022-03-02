all: out

out: printerarray.o second_task.o   
	g++ second_task.o printerarray.o -o out

second_task.o: second_task.cpp
	g++ -c second_task.cpp

printerarray.o: printerarray.cpp
	g++ -c printerarray.cpp
clean:
	rm -rf *.o out