clean:
	rm -v *.exe *.obj
compile:
	cl.exe triplex.exe
build:
	cl.exe triplex.cpp && ./triplex.exe