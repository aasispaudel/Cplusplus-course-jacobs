all: compile-all
	./rel
	./art
	./io
	./except

compile-all: rel art io except

run-rel: rel
		./rel

rel: Fraction.h Fraction.cpp testrel.cpp 
		g++ -Wall Fraction.cpp testrel.cpp -o rel


run-art: art
		./art

art: Fraction.h Fraction.cpp testart.cpp 
		g++ -Wall Fraction.cpp testart.cpp -o art


run-io: io
		./io

io: Fraction.h Fraction.cpp iotest.cpp 
		g++ -Wall Fraction.cpp iotest.cpp -o io


run-except: except
		./except

except: Fraction.h Fraction.cpp exceptionTest.cpp 
		g++ -Wall Fraction.cpp exceptionTest.cpp -o except

clean:
		rm -rf rel
		rm -rf art
		rm -rf io
		rm -rf except
