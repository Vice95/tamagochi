  # the compiler: gcc for C program, define as g++ for C++
  CC = g++
  # compiler flags:
  #  -g    adds debugging information to the executable file
  #  -Wall turns on most, but not all, compiler warnings
  CFLAGS  = -g -Wall
  PAT = bin/
  # the build target executable:
  TARGET2 = main
  TARGET = tamagochi
  TARGET3 = menu
  all:
  
  
	$(CC) $(CFLAGS) -o $(PAT)$(TARGET) $(TARGET).cpp $(TARGET2).cpp $(TARGET3).cpp
	./$(PAT)$(TARGET)

  clean:
	$(RM) $(PAT)$(TARGET)


  #$(TARGET2) $(TARGET)
  #$(TARGET): $(TARGET2).c $(TARGET).c
