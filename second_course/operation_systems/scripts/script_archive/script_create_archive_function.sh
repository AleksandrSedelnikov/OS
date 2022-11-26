script() {
    for i in "$1"/* # цикл по всем файлам/директориям в выбранном path= ~
    do
        #if [ "$1/*" = $i ] # если изначальный каталог пустой скипнуть данный i
        #then
        #    continue # скип-скип i
        #fi
        if [ -d $i ] # если i это каталог запустить ещё раз функцию с проходом данной директории (рекурсия!)    
        then
            script $i # повторный вызов функции для подсчёта файлов во вложенной директории
        elif [ -f $i ] # если i это файл
        then
            result=`echo $i | sed "s/.*\///" | grep "a"` # убрать всё кроме имени и вывести только те, где буква a есть в имени
            if [ "$result" != "" ] # если результат имеется
            then
                echo $i # вернуть значение содержания переменной i (возвращается значение согласно той директории, в которой был осуществлён вызов функции (не той, которая была при вызове начальной функции))
            fi
        fi
    done
}
names=`script ~` # переменной names присвоить значение функции при прогоне домашней директории
tar -zcvf archive.tar.gz $names # создать архив с файлами записанными в переменной names