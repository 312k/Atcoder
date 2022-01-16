.SUFFIXES:	#サフィックス無効
CC:=g++ #g++でビルドする

CFLAGS:= -g3 #デバッグ情報最大化
CFLAGS+= -Wall #エラーを全部出す
CFLAGS+= -Wextra #追加の警告オプション
CFLAGS+= -std=gnu++20 #C++20でビルドする

all: a b c
a:
	$(CC) -o a $(CFLAGS) ./a.c
b:
	$(CC) -o b $(CFLAGS) ./b.c
c:
	$(CC) -o b $(CFLAGS) ./b.c
