result=`find ~ -perm /u=x -and -perm /g=x -and -perm /o=x -type f 2>~/error` # поиск файлов с правом на выполнение для: пользователя,группы,остальных
for i in $result # цикл i в количестве найденных файлов
    do
        nice -n 10 $i > /dev/null # запустить файл с приоритетом 10, однако если это файл с выводом на экран (например скрипт, который будет ждать от вас ответа, то остальные файлы не будут стартавать)
        nice -n 10 $i > /dev/null &  # запустить файл с приоритетом 10 в фоне, тогда все файлы запустятся, т.к. на экран ничего выводить не нужно будет (из-за того что фоновый процесс)
    done