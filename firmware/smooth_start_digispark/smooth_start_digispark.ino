/*
  Скетч к проекту "Плавный пуск"
  Страница проекта (схемы, описания): https://alexgyver.ru/Smooth_start/
  Исходники на GitHub: https://github.com/AlexGyver/Smooth_start
  Нравится, как написан и закомментирован код? Поддержи автора! https://alexgyver.ru/support_alex/
  Автор: AlexGyver Technologies, 2018
  http://AlexGyver.ru/
*/

#define SMOOTH_TIME 200     // время "разгона", миллисекунды
#define HOLD_TIME 80       // время удержания кнопки, миллисекунды

#define DIM_PIN 1           // выход на симистор PWM (DIM), пин P1
#define ZERO_PIN 2          // вход контроля перехода через 0 (ZERO, Z-C), пин P2
#define ADC_PIN 2           // потенциометр, пин P4
#define BUTT_PIN 0          // пин кнопки, пин P0

#include <GyverButton.h>    // моя библиотека для опроса кнопок

volatile byte duty = 0;     //  Начальное значение мощности
boolean dim_flag;
GButton start_bt(BUTT_PIN);

void setup() {
  pinMode(DIM_PIN, OUTPUT);
  pinMode(ZERO_PIN, INPUT);
  attachInterrupt(0, zero, RISING);
  start_bt.setTimeout(HOLD_TIME);        // таймаут удержания кнопки
}

void zero() {
  delayMicroseconds(33 * (255 - duty));
  if (dim_flag) digitalWrite(DIM_PIN, HIGH);
  delayMicroseconds(500);
  digitalWrite(DIM_PIN , LOW);
}

void loop() {
  start_bt.tick();                                // опрос кнопки
  if (start_bt.isHolded()) {                      // кнопка удержана
    duty = 0;                                     // убрать яркость
    int aver = 0;                                 // переменная усреднения
    for (int i = 0; i < 10; i++) {                // усредняем 10 значений
      aver += analogRead(ADC_PIN) / 4;
      delay(1);
    }
    int step_count = aver / 10;
    int step_delay = SMOOTH_TIME / step_count;    // расчёт задержки
    dim_flag = true;                              // разрешить работу
    for (int i = 0; i < step_count; i++) {        // плавный пуск
      duty = i;
      delay(step_delay);
    }
  }
  if (start_bt.isRelease()) {   // если кнопока отпущена
    dim_flag = false;           // запретить работу
    digitalWrite(DIM_PIN, 0);   // вырубить ток на всякий случай
  }

  // если разрешена работа, установить скважность с потенциометра
  if (dim_flag) duty = analogRead(ADC_PIN) / 4;
}
