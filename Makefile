CXX = g++

all : IO_stream.o File_stream.o Types_des.o test.o
	$(CXX) IO_stream.o -o IO_test
	$(CXX) File_stream.o -o File_test
	$(CXX) Types_des.o -o Types_test 
	$(CXX) test.o -o test_prog

IO_test : IO_stream.o
	$(CXX) IO_stream.o -o IO_test

File_test : File_stream.o
	$(CXX) File_stream.o -o File_test

Types_test : Types_des.o
	$(CXX) Types_des.o -o Types_test

test_prog : test.o
	$(CXX) test.o -o test_prog

IO_stream.o: IO_stream.cpp
	$(CXX) -c IO_stream.cpp

File_stream.o: File_stream.cpp
	$(CXX) -c File_stream.cpp

Types_des.o: Types_des.cpp
	$(CXX) -c Types_des.cpp

test.o: test.cpp
	$(CXX) -c test.cpp

clean:
	rm IO_stream.o* File_stream.o* Types_des.o*