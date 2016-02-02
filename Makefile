all: qvector

qvector: main.o QVector.o
	g++ -std=c++11 -o qvector main.o QVector.o

main.o: main.cpp QVector.h
	g++ -std=c++11 -c main.cpp

QVector.o: QVector.cpp QVector.h
	g++ -std=c++11 -c QVector.cpp

clean:
	rm -f main.o QVector.o qvector
