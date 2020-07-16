# FillIt
Программа размещения тетрамино на минимально возможной площади

Для компиляции используется команда "make" для запуска программы: "./fillit [путь к тестовому файлу]"
Тестовый файл влючает в себя третрамино разделенные пустой строкой.
Тетрамино всегда состоят из 4 элементов, вписываются в квадрат формата 4*4 и описываются октотропами, пустое пространство - с помощью точек. Например:

....
..#.
..#.
..##

или

.##
.##
...
...

В файлах проекта уже есть несколько тестовых моделей (папка test)