g++ devices.cpp remote.cpp -std=c++11 -c
ar r libbridge.a devices.o remote.o
ranlib libbridge.a
g++ -std=c++17 client.cpp -o client -L. -lbridge
