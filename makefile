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

task4_1:
	$(CC) ./tasks4/task4_1.c libs/*.c -o executable/task4_1.o -I libs

task4_2:
	$(CC) ./tasks4/task4_2.c libs/*.c -o executable/task4_2.o -I libs

task4_3:
	$(CC) ./tasks4/task4_3.c libs/*.c -o executable/task4_3.o -I libs

tasks4: task4_1 task4_2 task4_3

task5_1:
	$(CC) ./tasks5/task5_1.c libs/*.c -o executable/task5_1.o -I libs

task5_2:
	$(CC) ./tasks5/task5_2.c libs/*.c -o executable/task5_2.o -I libs

task5_3:
	$(CC) ./tasks5/task5_3.c libs/*.c -o executable/task5_3.o -I libs

task5_4:
	$(CC) ./tasks5/task5_4.c libs/*.c -o executable/task5_4.o -I libs


tasks5: task5_1 task5_2 task5_3 task5_4

task6_1:
	$(CC) ./tasks6/task6_1.c libs/*.c -o executable/task6_1.o -I libs

task6_2:
	$(CC) ./tasks6/task6_2.c libs/*.c -o executable/task6_2.o -I libs

tasks6: task6_1 task6_2

clean: 
	rm -f executable/*.o

makeAll: tasks2 tasks3 tasks4 tasks5 tasks6