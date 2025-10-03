CC = gcc 

task2_1: 
	$(CC) ./tasks2/task2.c libs/*.c -o executable/task2_1.o -I libs 

task2_2: 
	$(CC) ./tasks2/task2_2.c libs/*.c -o executable/task2_2.o -I libs

task2_3: 
	$(CC) ./tasks2/task2_3.c libs/*.c -o executable/task2_2.o -I libs

tasks2: task2_1 task2_2 task2_3

task3_1: 
	$(CC) ./tasks3/task3_1.c libs/*.c -o executable/task3_1.o -I libs 

task3_2: 
	$(CC) ./tasks3/task3_2.c libs/*.c -o executable/task3_2.o -I libs 

task3_3: 
	$(CC) ./tasks3/task3_3.c libs/*.c -o executable/task3_3.o -I libs 

task3_4: 
	$(CC) ./tasks3/task3_4.c libs/*.c -o executable/task3_4.o -I libs 

tasks3: task3_1 task3_2 task3_3 task3_4
