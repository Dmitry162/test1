target:=main
all:
	gcc -o $(target) -Wall -Werror $(target).c
test:
	./$(target) User
	./$(target)
clean:
	rm $(target).exe