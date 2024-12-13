MaximumProductSubarray: MaximumProductSubarray.o
	g++ -g -o MaximumProductSubarray.exe MaximumProductSubarray.o -pthread    

MaximumProductSubarray.o: MaximumProductSubarray/MaximumProductSubarray.cpp
	g++ -g  -c -pthread MaximumProductSubarray/MaximumProductSubarray.cpp
