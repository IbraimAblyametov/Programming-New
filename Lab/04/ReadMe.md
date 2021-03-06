<p align="center">МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ<br>
Федеральное государственное автономное образовательное учреждение высшего образования<br>
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"<br>
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ<br>
Кафедра компьютерной инженерии и моделирования</p>
<br>
<h3 align="center">Отчёт по лабораторной работе № 4<br> по дисциплине "Программирование"</h3>
<br><br>
<p>Студента 1 курса группы ИВТ-б-о-201(2)<br>
Абляметов Ибраим Асанович<br>
направления подготовки 09.03.01 "Информатика и вычислительная техника"</p>
<br><br>
<table>
<tr><td>Научный руководитель<br> старший преподаватель кафедры<br> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br><br>
<p align="center">Симферополь, 2021</p>
<hr>


## Постановка задачи
Настроить рабочее окружение, для разработки программного обеспечения при помощи Qt и IDE Qt Creator, а также изучить базовые возможности данного фреймворка.

## Выполнение работы

### Задание 1
1.Вначале был скачан QT Creator с официального сайта, а также в процессе установки были выбраны все необходиные компоненты для среды<br>
2.Был открыт пример **Calculator Form Example**.
3.Дальше последовала настройка проекта, я открыл файл в каталоге Форма и открылся редактор, в редакторе была открыта форма и текст "Input 1", "Input 2", "Output" был измен на "Ввод 1", "Ввод 2" и "Вывод" соответственно.

![](./image/dizain.png)
Рисунок 1. Редактор формы Qt Creator


![](./image/exe.png)
Рисунок 2. Финальный вид приложения


### Задание 2
**Как изменить цветовую схему (оформление) среды?**<br>
Инструменты -> Параметры -> Среда -> Интерфейс

**Как закомментировать/раскомментировать блок кода средствами Qt Creator? Имеется ввиду комбинация клавиш или пункт меню.**<br>
`Ctrl+/`

**Как открыть в проводнике Windows папку с проектом средствами Qt Creator?**<br>
Я зашел в саму среду и там открыл нужный мне файл

**Какое расширение файла-проекта используется Qt Creator? Может быть несколько ответов.**<br>
`"Название проекта".pro` для QT<br>
`CMakeLists.txt` для системы CMake и `*.cmake` для библиотек.

**Как запустить код без отладки?**<br>
Щелкнуть на знак запуска (зелёный треугольник) слева снизу или `Ctrl+R`

**Как запустить код в режиме отладки?**<br>
Щелкнуть на знак запуска (зелёный треугольник) с жучком слева снизу

**Как установить/убрать точку останова (breakpoint)?**<br>
Щелкунуть слева от номера нужной вам строки или кликнуть на нужную вам строку и нажать `F9`


### Задание 3
**Чему равны переменные i и d в 6 строке?**<br>
d = 0.0<br>
i = 32767

**Чему равны переменные i и d в 7 строкe?**<br>
d = 0.0<br>
i = 5

**Чему равны переменные i и d в 8 строке?**<br>
d = 5.0<br>
i = 5

## Задание 4
** Изучено https://www.youtube.com/watch?v=rFdd02Bd4_0&list=PLKssqRhCd4-BPcXUHRo6uDQ6E0BKkkOuc&index=7 и выполнено

## Вывод
Выполняя эту лаборатурную работу я научился:
- Создавать проект, а такжен изучил базовые возможности Qt Creator
- Настраивать среду работы
- Работать с примерами проектов в этом фрейворке
