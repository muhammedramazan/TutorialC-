all:Build

main.o: main.cpp
	g++ -c main.cpp
type.o: type.cpp 
	g++ -c type.cpp 
builtInType.o: builtInType.cpp
	g++ -c builtInType.cpp

Build: main.o type.o
	g++ main.o type.o builtInType.o -o ./../../Build/typeExecutable
Run:
	./../../Build/typeExecutable
cleanRun:
	rm -rf *o ../../Build/typeExecutable 