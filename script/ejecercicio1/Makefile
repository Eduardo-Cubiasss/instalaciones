# Compilador y flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Nombre del ejecutable
TARGET = programa

# Busca todos los .cpp en el directorio actual
SRCS := $(wildcard *.cpp)

# Convierte cada .cpp en su respectivo .o
OBJS := $(SRCS:.cpp=.o)

# Regla principal
all: $(TARGET)

# Cómo crear el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Cómo crear los .o a partir de los .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos temporales
clean:
	rm -f $(OBJS) $(TARGET)

# Opción para recompilar desde cero
rebuild: clean all
