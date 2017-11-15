CPPFLAGS += -I inc -std=c++11

LIB_SRCS := $(wildcard lib/*.cpp)

bin/% : src/%.cpp $(LIB_SRCS)
	$(CXX) $(CPPFLAGS) -o $@ $^ $(LDFLAGS) $(LDLIBS)

all : bin/main_triangle