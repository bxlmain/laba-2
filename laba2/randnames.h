﻿﻿#pragma once

#include <string>
#include <fstream>
#include <string>

const int NAME{ 75 };

std::string randomingName(int number)
{
    setlocale(0, "");
    std::string names[75] = { "Анна", "Кристина", "Карина", "Иван", "Владислав",
                                "Инна", "Надира", "Владислава", "Дарья", "Алиса",
                                "Арина","Алина","Михаил","Артур",
                                "Дмитрий","Кирилл","Нурлан","Вячеслав","Диана","Екатерина","Лаура","Николь",
                                "Паулина","Юрий","Людмила","Елизавета","Евгений","Евгения","Александр","Александра","Василина",
                                "Антон","Максим","Елена","Милана","Марина","Георгий","Ксения",
                                "Ярослав","Сергей","Егор","Константин","Элеонора","Мария","Анастасия","София","Юлия",
                                "Карлос","Илья","Викторрия","Джахан","Игорь","Артём",
                                "Кристаль","Хосе","Роман","Снежана","Фернандо","Амин","Глеб","Виктор","Станислав","Петр","Тимур",
                                "Владимир","Мирослава","Аркадий","Наталья","Татьяна",
                                "Ульяна","Алексей","Ангелина","Алла","Андрей","Павел" };

    return names[number];
}