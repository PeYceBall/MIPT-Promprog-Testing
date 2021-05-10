Решение задач с http://testingchallenges.thetestingmap.org/.

### 1.
1. Пустая строка
1. Один символ
1. 30 символов
1. Больше 30 символов
1. от 2 до 30 символов
1. Только пробельные символы
1. Пробел перед строкой
1. Пробел в середине строки
1. Пробел в конце строки
1. Текст на русском(некорректные символы)
1. Символы не из ASCII
1. HTML теги(`\<head>`, `\<p>`)
1. SQL-инъекция(закрытие кавычки и какая-то команда)
1. JS скрипт (`\<script> ... \</script>`)
1. Открыть исходный код страницы и вставить специальный код оттуда
1. Найти скрытый input user_right_as_admin и поменять значение на 1
1. Посмотреть, какой css файл не удаётся подгрузить и вписать его название
1. Зайти в куки и найти специальный код

### 2.
Открыть исходный код страницы и поменять тип input-a на string, после этого можно вводить произвольную строку

### 3.
Просто перейти по адресу http://testingchallenges.thetestingmap.org/challenge3.php 

### 4.
Использовал следующий скрипт на Питоне:
```python3
import numpy as np
a = [1, 8, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1]
b = list(map(int, '279146358279'))
c = np.dot(a, b)
last = 1 if c % 11 == 10 else c % 11
print(''.join(map(str, a + [last])))
```

Чтобы получить другие CNP, надо заменить последнюю цифру в a на 2, 3, ...

### 5.
Сделать сабмит один раз, посмотреть историю запросов(в Google Chrome это Network в инструментах разработчика).
Там будет виден запрос на web_analytics_engine.php, достаточно сделать ПКМ и Block request URL, после чего попробовать ещё раз.

### 6.
1. 01/01/2018 00:00
1. 31/12/2016 23:59
1. 32/05/2017 19:42
1. 00/03/2017 00:00
1. 31/04/2017 19:42
1. 30/05/2017 19:42
1. 10/13/2017 12:57
1. 10/00/2017 12:57
1. 10/05/2017 00:60
1. 10/05/2017 24:57
1. 29/02/2017 19:42
1. 26/03/2017 02:00
1. 26/03/2017 02:59
1. 29/10/2017 03:00
1. 10/05/2017 12:-1
1. 10/05/2017 -1:01

Пояснения с сайта:

    Checks found: 16 out of 16 
    Hour smaller than minimum value: -1
    Maximum invalid value for minutes 60
    Minimum invalid value for minutes: -1
    Higher limit for the month 13
    March daylight saving time highest invalid hour 02:59
    Hour that exists twice during daylight saving time
    March daylight saving time lowest invalid hour 02:00
    32 days for 31 days months
    31 days for 30 days months
    Date less than 1 hour
    Hour bigger then maxim valid 24
    Inexistent date 29 for February 2017
    Lower limit for the month 00
    Date with day = zero
    First date after 2017, January 2018 00:00
    First date before 2017, December 2016 23:59

### 7.
Project Manager decided to implement Behaviour Driven Development, because it is considered best practice in testing Community. We started with Localization testing. 

### 8.
1. Delete a auction that is in running
    1. Создать аукцион, который ещё не начался
    1. Создать аукцион, который вот-вот начнётся и дождаться начала
    1. Зайти в исходный код страницы через инструменты разработчика и найти Delete для первого аукциона
    1. Заменить значение item на номер второго аукциона
    1. Нажать на кнопку
    
1.  Archive a auction that is in running
Аналогично первому заданию, но теперь надо создать аукцион, дождаться его завершения(появится кнопка Archive), и заменить значение item для этой кнопки на номер идущего аукциона
    
### 10.
1. Баги
    1. Можно создать несколько аккаунтов с одинаковым логином
    1. возможны SQL-инъекции
    1. Можно вводить очень длинные строки
    1. Можно залогиниться даже при вводе неправильного логина и/или пароля
    1. Нет проверки на корректность вводимых символов(не ASCII, пробелы)
1. Проблемы
    1. На французском, итальянском и немецком надпись на кнопке одинаковая: "S'identifier"
    1. Нет возможно лог аута
    1. http вместо https
    1. Опечатки(Bouth, Wellcome)
    1. В таблице created_on, active и created_by_id не заполнены