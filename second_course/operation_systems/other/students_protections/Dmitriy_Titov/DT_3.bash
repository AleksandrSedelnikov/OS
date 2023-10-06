files=`find ~ -perm /u=x -type f 2>~/error` # поиск всех файлов в домашней директории и подкаталогов файлов с правом на запуск для юзера(себя)
tar -zcf archive.tar.gz $files # создание сжатого архива с названием archive.tar.gz с файлами из переменной files
# чтобы посмотреть содержимое архива напишите tar -tf archive.tar.gz
