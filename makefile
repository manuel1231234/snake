run : bin/programa
	./bin/programa

bin/programa : main.cpp include/*.hpp
	g++ main.cpp -Include -o bin/programa