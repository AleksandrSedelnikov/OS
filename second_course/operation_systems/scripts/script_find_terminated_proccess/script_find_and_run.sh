result=`find ~ -perm /u=x -and -perm /g=x -and -perm /o=x -type f 2>~/error` # поиск файлов с правом на выполнение для: пользователя,группы,остальных
for i in $result # цикл i в количестве найденных файлов
    do
        ./$i > /dev/null # запустить файл, однако если это файл с выводом на экран (например скрипт, который будет ждать от вас ответа, то остальные файлы не будут стартовать)
        ./$i > /dev/null &  # запустить файл в фоне, тогда все файлы запустятся, т.к. на экран ничего выводить не нужно будет (из-за того что фоновый процесс)
    done
# * "> /dev/null" можно отбросить, это было для теста команды yes