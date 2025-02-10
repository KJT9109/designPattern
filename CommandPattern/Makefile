CC = clang++
CXXFLAGS = -std=c++17 -g -W -Wall -O2 -I/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1
TARGET = test
SOURCE = $(wildcard ./*.cpp)
OBJECT = $(patsubst %.cpp, %.o, $(SOURCE))

all : $(TARGET)

$(TARGET) : $(OBJECT)
	$(CC) $(CXXFLAGS) -o $@ $^

%.o : %.cpp
	$(CC) $(CXXFLAGS) -o $@ -c $^

clean :
	rm -f *.o $(TARGET)

