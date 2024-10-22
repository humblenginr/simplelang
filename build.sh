CFLAGS=" -Wno-implicit-function-declaration -O0 -g"
BUILD_DIR=./build

set -xe

compile() {
	clang $CFLAGS -o simplelang main.c
	chmod +x simplelang
}

run(){
	./simplelang
}


compile && run
