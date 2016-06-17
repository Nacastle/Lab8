game:	robot.o sirviente.o abastecedores.o trabajadores.o main.o
	g++ robot.o sirviente.o abastecedores.o trabajadores.o main.o -o test
main.o:	main.cpp trabajadores.h sirviente.h abastecedores.h
	g++ -c main.cpp
robot.o:	robot.cpp robot.h
	g++ -c robot.cpp
trabajadores.o: trabajadores.cpp robot.h trabajadores.h
	g++ -c trabajadores.cpp
sirviente.o: sirviente.cpp robot.h sirviente.h
	g++ -c sirviente.cpp
abastecedores.o: abastecedores.cpp robot.h abastecedores.h
	g++ -c abastecedores.cpp