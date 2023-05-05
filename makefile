link : queue_array item_int main
	gcc queue_array.o item_int.o main.o -o queue.exe

link_list: queue_list list item_str main
	gcc queue_list.o list.o item_str.o main.o -o queue.exe

queue_list:
	gcc -c queue_list.c
	
queue_array:
		gcc -c queue_array.c

item_str :
	gcc -c item_str.c

item_int :
	gcc -c item_int.c

list :
	gcc -c list.c

main : 
	gcc -c main.c

clean : 
	rm  *.o *.exe

