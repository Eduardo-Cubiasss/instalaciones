#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

void createFile(const std::string& folder, const std::string& filename, const std::string& extension, const std::string& content) {
    std::ofstream file(folder + "/" + filename + extension);
    if (file.is_open()) {
        file << content;
        file.close();
        std::cout << "Archivo creado: " << filename + extension << std::endl;
    } else {
        std::cerr << "No se pudo crear el archivo: " << filename + extension << std::endl;
    }
}

int main() {
    std::string folderName, file1, file2;
    
    std::cout << "Ingrese el nombre de la carpeta: ";
    std::cin >> folderName;
    
    if (!fs::create_directory(folderName)) {
        std::cerr << "Error al crear la carpeta o ya existe." << std::endl;
    }
    
    std::cout << "Ingrese el nombre del primer archivo (sin extension): ";
    std::cin >> file1;
    std::cout << "Ingrese el nombre del segundo archivo (sin extension): ";
    std::cin >> file2;

    std::string mainContent = "#include <iostream>\n#include \"" + file1 + ".h\"\nint main(){\n    // Crear instancias y llamar funciones\n    return 0;\n}";
    createFile(folderName, "main", ".cpp", mainContent);

    std::string headerContent = "#ifndef " + file1 + "_H\n#define " + file1 + "_H\n#include <string>\nclass " + file1 + " {\nprivate:\n    std::string name;\npublic:\n    " + file1 + "();\n    ~" + file1 + "();\n};\n#endif";
    createFile(folderName, file1, ".h", headerContent);
    createFile(folderName, file2, ".h", headerContent);

    std::string cppContent = "#include \"" + file1 + ".h\"\n" + file1 + "::" + file1 + "() {}\n" + file1 + "::~" + file1 + "() {}";
    createFile(folderName, file1, ".cpp", cppContent);
    createFile(folderName, file2, ".cpp", cppContent);
    
    return 0;
}
