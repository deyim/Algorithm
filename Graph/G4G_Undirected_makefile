TARGET = Undirected_Graph

$(TARGET): Graph.o MakeGraph.o
	gcc -o $(TARGET) Graph.o MakeGraph.o

Graph.o : Graph.c
	gcc -c -o Graph.o Graph.c

MakeGraph.o : MakeGraph.c
	gcc -c -o MakeGraph.o MakeGraph.c

clean:
	rm *.o $(TARGET)
