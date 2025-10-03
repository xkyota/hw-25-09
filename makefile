# Compiler
CC = gcc 

#T asks 2
task2_1: 
	$(CC) ./tasks2/task2.c libs/*.c -o executable/task2_1.o -I libs 

task2_2: 
	$(CC) ./tasks2/task2_2.c libs/*.c -o executable/task2_2.o -I libs

task2_3: 
	$(CC) ./tasks2/task2_3.c libs/*.c -o executable/task2_2.o -I libs

tasks2: task2_1 task2_2 task2_3

# Tasks 3
task3_1: 
	$(CC) ./tasks3/task3_1.c libs/*.c -o executable/task3_1.o -I libs 

task3_2: 
	$(CC) ./tasks3/task3_2.c libs/*.c -o executable/task3_2.o -I libs 

task3_3: 
	$(CC) ./tasks3/task3_3.c libs/*.c -o executable/task3_3.o -I libs 

task3_4: 
	$(CC) ./tasks3/task3_4.c libs/*.c -o executable/task3_4.o -I libs 

tasks3: task3_1 task3_2 task3_3 task3_4

# Tasks4
task4_1:
	$(CC) ./tasks4/task4_1.c libs/*.c -o executable/task4_1.o -I libs

task4_2:
	$(CC) ./tasks4/task4_2.c libs/*.c -o executable/task4_2.o -I libs

task4_3:
	$(CC) ./tasks4/task4_3.c libs/*.c -o executable/task4_3.o -I libs

tasks4: task4_1 task4_2 task4_3

# Tasks 5
task5_1:
	$(CC) ./tasks5/task5_1.c libs/*.c -o executable/task5_1.o -I libs

task5_2:
	$(CC) ./tasks5/task5_2.c libs/*.c -o executable/task5_2.o -I libs

task5_3:
	$(CC) ./tasks5/task5_3.c libs/*.c -o executable/task5_3.o -I libs

task5_4:
	$(CC) ./tasks5/task5_4.c libs/*.c -o executable/task5_4.o -I libs


tasks5: task5_1 task5_2 task5_3 task5_4

# Tasks 6
task6_1:
	$(CC) ./tasks6/task6_1.c libs/*.c -o executable/task6_1.o -I libs

task6_2:
	$(CC) ./tasks6/task6_2.c libs/*.c -o executable/task6_2.o -I libs

tasks6: task6_1 task6_2

# Clean all executable programs
clean: 
	rm -f executable/*.o

# Compile all programs one time
makeAll: tasks2 tasks3 tasks4 tasks5 tasks6

# Run a program (Actually it also re-compiles a program)
run_task2_1: task2_1
	./executable/task2_1.o $(ARGS)

run_task2_2: task2_2
	./executable/task2_2.o $(ARGS)

run_task2_3: task2_3
	./executable/task2_2.o $(ARGS)

run_task3_1: task3_1
	./executable/task3_1.o $(ARGS)

run_task3_2: task3_2
	./executable/task3_2.o $(ARGS)

run_task3_3: task3_3
	./executable/task3_3.o $(ARGS)

run_task3_4: task3_4
	./executable/task3_4.o $(ARGS)

run_task4_1: task4_1
	./executable/task4_1.o $(ARGS)

run_task4_2: task4_2
	./executable/task4_2.o $(ARGS)

run_task4_3: task4_3
	./executable/task4_3.o $(ARGS)

run_task5_1: task5_1
	./executable/task5_1.o $(ARGS)

run_task5_2: task5_2
	./executable/task5_2.o $(ARGS)

run_task5_3: task5_3
	./executable/task5_3.o $(ARGS)

run_task5_4: task5_4
	./executable/task5_4.o $(ARGS)

run_task6_1: task6_1
	./executable/task6_1.o $(ARGS)

run_task6_2: task6_2
	./executable/task6_2.o $(ARGS)
