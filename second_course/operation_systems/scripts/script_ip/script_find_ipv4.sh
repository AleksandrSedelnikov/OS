namesinterface=`ifconfig | cut -d" " -f1` # переменная содержащая названия сетевых интерфейсов
for i in $namesinterface # цикл по интерфейсам
do
    IP=`ip -4 addr show $i | grep -oP '(?<=inet\s)\d+(\.\d+){3}'` # запись IPv4 для интерфейса
    # пояснение про grep: -P(язык программирования Perl), ?<="слово"\s определить начало в точке "слово" и рассматривать слово справа после данного шаблона и пробела (только 1 строка!)
    # например строчка: priv ky mir и если написать (?<=priv\s)\w+, то выведется строчка ky
    # однако, если дописать в конце (\"разделитесь слов"\w+{"количество повторений вхождения разделителя"}, в нашем случае будет пробел и 1 раз, то выдаст: ky mir)
    # d+("\"разделитель"\d+) - вывод числовых символов разделённых разделителем
    # {"число повторений"} - количество повторений для вывода определённого количества слов разделённых определённым разделителем
    # + ставится для того, чтобы рассматривались все символы, а не только один
    # d+ - цифра | w+ - алфавитно-цифровой символ
    IP=`ip addr show $i | grep -v "inet6" | grep "inet" | awk '{print $2}' | cut -d"/" -f1` # усложнённый вариант 
    echo -e "\033[01;33mInterface\033[00;0m: $i\n\033[01;38mIPv4 address\033[00;0m: $IP" # вывод названия интерфейса и его IPv4 адрес
done