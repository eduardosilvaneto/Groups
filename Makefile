all:
	c++ -L $(ORACLE_HOME)/lib/ -L $(ORACLE_HOME)/rdbms/jlib/ -I $(ORACLE_HOME)/rdbms/public/  -lclntsh -locci  main.cpp  -o teste

