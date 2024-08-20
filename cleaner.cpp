#include "cleaner.h"
#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void cleanDirectory(const std::string& path) {
    try {
        for (const auto& entry : fs::directory_iterator(path)) {
            fs::remove_all(entry.path());
        }
        std::cout << "Очищено: " << path << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
}

void cleanTemporaryFiles() {
#ifdef _WIN32
    std::string tempDir = std::getenv("TEMP"); 
    std::string recycleBinDir = std::string(std::getenv("HOMEDRIVE")) + "\\$Recycle.Bin";

    cleanDirectory(tempDir);
    cleanDirectory(recycleBinDir);
#endif

#ifdef __APPLE__
    std::string tempDir = "/tmp";
    std::string cacheDir = std::string(std::getenv("HOME")) + "/Library/Caches";

    cleanDirectory(tempDir);
    cleanDirectory(cacheDir);
#endif

    std::cout << "Очистка завершена!" << std::endl;
}
