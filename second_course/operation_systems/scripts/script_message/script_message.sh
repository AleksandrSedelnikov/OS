echo "С каким пользователем хотите связаться?(ВНИМАНИЕ:Если у пользователя несколько терминалов укажите тот, с которым хотите установить соединение)"
echo "Пример верного ввода: AP103_22 pts/0"
echo "Связать с: "; read user
echo "Производится соединение c пользователем $user..."
sleep 5
echo "Краткий мануал: 1)писать только на english 2)написали сообщение нажмите enter 3)закрыть канал связи нажмите ctrl+c"
write $user