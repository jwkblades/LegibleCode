FLAGS:=-Wall -pedantic -std=c++11 -pthread
CC:=g++

EXE=LegibleCode

.cpp.o:
	${CC} ${FLAGS} -c $^ -o $@

${EXE}: main.o TestClass.o RAIIMutex.o
	${CC} ${FLAGS} -o $@ $^

.Phony: clean

clean:
	@rm -f *.o ${EXE}
