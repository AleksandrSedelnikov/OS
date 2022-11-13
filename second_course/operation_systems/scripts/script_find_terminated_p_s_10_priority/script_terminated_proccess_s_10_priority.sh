result=`ps -o pid,ni | grep -w "10" | awk '{print $1}'`
count=`ps -o pid,ni | grep -w "10" | awk '{print $1}' | wc -l`
if [ $count -eq 0 ]
    then
        echo "Процессов с приоритетом 10 нет."
    else
        for i in $result
            do
                kill -9 $i # послать сигнал немедленного прекращения работы процессу с PID i (прочитайте последнюю строчку скрипта)
                echo "Процесс с ID $i убит."
            done
fi
# [Данный скрипт будет работать, если запустить его в том же терминале, из которого запускаются процессы с 10 приоритетом, иначе работать не будет!]