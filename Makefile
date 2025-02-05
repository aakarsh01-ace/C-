
all: main

CXX = clang++
override CXXFLAGS += -g -Wmost -Werror

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o "$@"

main-debug: main.cpp
	$(CXX) $(CXXFLAGS) -U_FORTIFY_SOURCE -O0 main.cpp -o "$@"

clean:
	rm -f main main-debug
