all: CImg.h a3.cpp Classifier.h NearestNeighbor.h
	g++ a3.cpp -o a3 `pkg-config --cflags --libs opencv` -lX11 -lpthread -I. -Isiftpp -O3 siftpp/sift.cpp

clean:
	rm a3
