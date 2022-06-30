all: main.out

run: main.out
	./main.out

main.out: main.cpp Date.cpp calcDays.cpp
	g++ -std=c++11 -Wall main.cpp Date.cpp calcDays.cpp -o main.out

clean: 
	rm -f main.out