# Temporary Files Cleaner

## Описание

`Temporary Files Cleaner` - это утилита для очистки временных файлов на операционных системах Windows и macOS. Она позволяет освободить место на диске, удаляя временные файлы и кеши.

## Особенности

- **Поддержка Windows и macOS:** Программа автоматически определяет операционную систему и очищает соответствующие временные директории.
- **Очистка корзины:** На Windows утилита также очищает корзину.
- **Кроссплатформенность:** Код написан на C++ с использованием библиотеки `std::filesystem` и wxWidgets, что обеспечивает его работу на обеих платформах.
- **Графический интерфейс:** Используется библиотека wxWidgets для создания кроссплатформенного графического интерфейса.
- **Легкость использования:** Программа предоставляет простой интерфейс для очистки временных файлов и корзины.

## Установка

### Требования

- Компилятор с поддержкой C++17 или выше (например, `g++` или `clang++`).
- Среда разработки для сборки кода (например, Visual Studio для Windows или Xcode для macOS).
- Установленная библиотека wxWidgets для работы с графическим интерфейсом.

### Сборка

Для сборки программы выполните следующие команды в терминале:

#### Windows

```bash
g++ -std=c++17 -o cleaner main.cpp
```

#### macOS

```bash
g++ -std=c++17 -o cleaner main.cpp wxApp.cpp cleaner.cpp `wx-config --cxxflags --libs`
```

### Запуск

После сборки программы выполните скомпилированный файл:

#### Windows

```bash
./cleaner
```

#### macOS

```bash
./cleaner
```

## Использование Makefile
### Пример Makefile предоставляется в файле Makefile.example. Чтобы использовать его:
1. Скопируйте файл Makefile.example в Makefile:
```bash
cp Makefile.example Makefile
```
2. Настройте Makefile, если необходимо (например, обновите пути или флаги).
Выполните сборку:
```bash
make
```
Запустите скомпилированное приложение:
```bash
./build/cleaner
```

## Что уже реализовано

- **Очистка временных файлов:** Программа удаляет временные файлы и кеши как на Windows, так и на macOS.
- **Очистка корзины:** На Windows программа также очищает корзину.
- **Графический интерфейс:** Реализован графический интерфейс с использованием wxWidgets, который позволяет пользователям управлять очисткой через удобное окно.

## Оставшиеся задачи для проверки на Windows

- **Сборка и тестирование GUI:** Убедитесь, что графический интерфейс корректно работает на Windows, включая все пункты меню.
- **Тестирование функциональности очистки:** Проверьте, что программа корректно очищает временные файлы и корзину на различных версиях Windows (например, Windows 10 и Windows 11).
- **Проверка совместимости:** Убедитесь, что программа корректно работает с различными версиями wxWidgets, установленными на Windows.
- **Тестирование на разных архитектурах:** Проверьте работу программы как на x86, так и на x64 версиях Windows.
