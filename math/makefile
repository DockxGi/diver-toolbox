stats.o: stats.c stats.h
	gcc -c stats.c

min-tool.o: min-tool.c stats.h
	gcc -c min-tool.c

min-tool: min-tool.o stats.o
	gcc min-tool.o stats.o -o min-tool