run : bin/tazo
	./bin/tazo
run Mem : bin/mem
	./bin/mem

bin/tazo : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

bin/mem :
	bin/tazo : src/memoria.cpp
	g++ src/memoria.cpp -Iinclude -o bin/tazo

assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje
