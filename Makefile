
all:
	g++ main.cpp -lgtest -lgtest_main -o app
	./app
clean:
	rm app
