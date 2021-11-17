stats.o: stats.c stats.h
	gcc -c stats.c

min-tool.o: min-tool.c stats.h
	gcc -c min-tool.c

min-tool: min-tool.o stats.o
	gcc min-tool.o stats.o -o min-tool

max-tool.o: max-tool.c stats.h
	gcc -c max-tool.c

max-tool: max-tool.o stats.o