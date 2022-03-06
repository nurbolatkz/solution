all: out

out: first_task.o arraycleaner.o arraycreator.o searchKvalue.o  
	g++ first_task.o arraycleaner.o arraycreator.o searchKvalue.o -o out

first_task.o: first_task.cpp
	g++ -c first_task.cpp
arraycleaner.o : arraycleaner.cpp
	g++ -c arraycleaner.cpp

arraycreator.o: arraycreator.cpp
	g++ -c arraycreator.cpp

searchKvalue.o: searchKvalue.cpp
	g++ -c searchKvalue.cpp
clean:
	rm -rf *.o out