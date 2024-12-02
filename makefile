CXX = g++
CXXFLAGS = -Wall -std=c++11
# Updated SRC to reflect the new file structure
SRC = Player.cpp Set.cpp Utility.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = tennis_set

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) -c $< $(CXXFLAGS)

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean

#after using make to compile, use ./tennis_set to run the code
