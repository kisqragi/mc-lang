CXX = clang++
CXXFLAGS = `/usr/local/Cellar/llvm/9.0.0_1/bin/llvm-config --cxxflags --ldflags --system-libs --libs all`

.PHONY: mc

mc: src/mc.cpp
	$(CXX) $(CXXFLAGS) src/mc.cpp -o mc
clean:
	rm mc output.o
