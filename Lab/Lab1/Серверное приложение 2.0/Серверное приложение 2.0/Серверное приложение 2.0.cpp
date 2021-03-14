#include <iostream>
#include <cpp_httplib/httplib.h>
using namespace httplib;

int main() {
    // Создаём клиент и привязываем к домену. Туда пойдут наши запросы
    Client cli("http://openweathermap.org");
    // Отправляем get-запрос и ждём ответ, который сохраняется в переменной res
    auto res = cli.Get("/data/2.5/onecall?lat=44.952116&lon=34.102411&exclude=hourly.dt&units=metric&lang=ru&appid=5d1982ba8d1e34f9dc7c4d1ad03a6a10");
    // res преобразуется в true, если запрос-ответ прошли без ошибок
    if (res) {
        // Проверяем статус ответа, т.к. может быть 404 и другие
        if (res->status == 200) {
            // В res->body лежит string с ответом сервера
            std::cout << res->body << std::endl;
        }
        else {
            std::cout << "Status code: " << res->status << std::endl;
        }
    }
    else {
        auto err = res.error();
        std::cout << "Error code: " << err << std::endl;
    }
}
// https://api.openweathermap.org/data/2.5/onecall?lat=44.952116&lon=34.102411&exclude=hourly.dt&units=metric&lang=ru&appid=5d1982ba8d1e34f9dc7c4d1ad03a6a10