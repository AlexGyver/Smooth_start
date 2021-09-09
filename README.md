![PROJECT_PHOTO](https://github.com/AlexGyver/Smooth_start/blob/master/proj_img.jpg)
# Плавный пуск станков на Arduino
* [Описание проекта](#chapter-0)
* [Папки проекта](#chapter-1)
* [Схемы подключения](#chapter-2)
* [Материалы и компоненты](#chapter-3)
* [Как скачать и прошить](#chapter-4)
* [FAQ](#chapter-5)
* [Полезная информация](#chapter-6)
[![AlexGyver YouTube](http://alexgyver.ru/git_banner.jpg)](https://www.youtube.com/channel/UCgtAOyEQdAyjvm9ATCi_Aig?sub_confirmation=1)

<a id="chapter-0"></a>
## Описание проекта
Система плавного пуска и регулирования мощности для станков и электроинструмента
Особенности:
- Плавный пуск двигателя
- Время разгона настраивается
- Разгон до установленного значения
- Настройка оборотов во время работы
- Пуск с логической кнопки (5 Вольт)
- Пуск по УДЕРЖИВАНИЮ кнопки
- Проект "Диммер переменки" https://github.com/AlexGyver/AC_Dimmer
- Видос "диммер переменки" https://www.youtube.com/watch?v=jPbptVGZisc
- Подробности в видео: https://youtu.be/RL3j-3fyWM8
<a id="chapter-1"></a>
## Папки
**ВНИМАНИЕ! Если это твой первый опыт работы с Arduino, читай [инструкцию](#chapter-4)**
- **libraries** - библиотеки проекта. Заменить имеющиеся версии
- **firmware** - прошивки
- **schemes** - схемы подключения

<a id="chapter-2"></a>
## Схемы
![SCHEME](https://github.com/AlexGyver/Smooth_start/blob/master/schemes/scheme1.jpg)
![SCHEME](https://github.com/AlexGyver/Smooth_start/blob/master/schemes/scheme2.jpg)
![SCHEME](https://github.com/AlexGyver/Smooth_start/blob/master/schemes/scheme3.jpg)
![SCHEME](https://github.com/AlexGyver/Smooth_start/blob/master/schemes/scheme4.jpg)
![SCHEME](https://github.com/AlexGyver/Smooth_start/blob/master/schemes/scheme5.jpg)

<a id="chapter-3"></a>
## Материалы и компоненты
### Ссылки оставлены на магазины, с которых я закупаюсь уже не один год
### Почти все компоненты можно взять в магазине WAVGAT по первым ссылкам
* Arduino NANO 328p – искать
* https://ali.ski/_mWzgw
* https://ali.ski/1VbGc
* https://ali.ski/DPJM4
* https://ali.ski/VmzRH
* Digispark искать
* БП AC-DC 5V
* https://ali.ski/8pc7gL
* https://ali.ski/UuzdyZ
* Потенциометры 10 кОм https://ali.ski/SC7b1
* Кнопки https://ali.ski/3xB4dN
* Диммер модуль https://ali.ski/cr3yAF
* Диммер с крутилкой 2 кВт https://ali.ski/enTZ4R
* Диммер с крутилкой 10 кВт https://ali.ski/CmXgnz

## Вам скорее всего пригодится
* [Всё для пайки (паяльники и примочки)](http://alexgyver.ru/all-for-soldering/)
* [Недорогие инструменты](http://alexgyver.ru/my_instruments/)
* [Все существующие модули и сенсоры Arduino](http://alexgyver.ru/arduino_shop/)
* [Электронные компоненты](http://alexgyver.ru/electronics/)
* [Аккумуляторы и зарядные модули](http://alexgyver.ru/18650/)

<a id="chapter-4"></a>
## Как скачать и прошить
* [Первые шаги с Arduino](http://alexgyver.ru/arduino-first/) - ультра подробная статья по началу работы с Ардуино, ознакомиться первым делом!
* Скачать архив с проектом
> На главной странице проекта (где ты читаешь этот текст) вверху справа зелёная кнопка **Clone or download**, вот её жми, там будет **Download ZIP**
* Установить библиотеки в  
`C:\Program Files (x86)\Arduino\libraries\` (Windows x64)  
`C:\Program Files\Arduino\libraries\` (Windows x86)
* **Подключить внешнее питание 5 Вольт**
* Подключить Ардуино к компьютеру
* Запустить файл прошивки (который имеет расширение .ino)
* Настроить IDE (COM порт, модель Arduino, как в статье выше)
* Настроить что нужно по проекту
* Нажать загрузить
* Пользоваться  

## Настройки в коде
    #define SMOOTH_TIME 200     // время "разгона", миллисекунды
    #define HOLD_TIME 80        // время удержания кнопки, миллисекунды
	
<a id="chapter-5"></a>
## FAQ
### Основные вопросы
В: Как скачать с этого грёбаного сайта?  
О: На главной странице проекта (где ты читаешь этот текст) вверху справа зелёная кнопка **Clone or download**, вот её жми, там будет **Download ZIP**

В: Скачался какой то файл .zip, куда его теперь?  
О: Это архив. Можно открыть стандартными средствами Windows, но думаю у всех на компьютере установлен WinRAR, архив нужно правой кнопкой и извлечь.

В: Я совсем новичок! Что мне делать с Ардуиной, где взять все программы?  
О: Читай и смотри видос http://alexgyver.ru/arduino-first/

В: Вылетает ошибка загрузки / компиляции!
О: Читай тут: https://alexgyver.ru/arduino-first/#step-5

В: Сколько стоит?  
О: Ничего не продаю.

### Вопросы по этому проекту

<a id="chapter-6"></a>
## Полезная информация
* [Мой сайт](http://alexgyver.ru/)
* [Основной YouTube канал](https://www.youtube.com/channel/UCgtAOyEQdAyjvm9ATCi_Aig?sub_confirmation=1)
* [YouTube канал про Arduino](https://www.youtube.com/channel/UC4axiS76D784-ofoTdo5zOA?sub_confirmation=1)
* [Мои видеоуроки по пайке](https://www.youtube.com/playlist?list=PLOT_HeyBraBuMIwfSYu7kCKXxQGsUKcqR)
* [Мои видеоуроки по Arduino](http://alexgyver.ru/arduino_lessons/)