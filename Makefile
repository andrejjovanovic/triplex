clean:
	rm -v *.exe *.obj
compile:
	gcc triplex.cpp
build:
	cl.exe triplex.cpp && ./triplex.exe
