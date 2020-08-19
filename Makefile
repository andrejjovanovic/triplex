clean:
	rm -v *.exe *.obj
compile:
	g++ triplex.cpp
build:
	cl.exe triplex.cpp && ./triplex.exe