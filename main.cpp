#include <iostream>
#include <vector>
#include <memory>

#include "MediaItem.h"
#include "FeatureFilm.h"
#include "ShortFilm.h"
#include "Director.h"
#include "Actor.h"

int main() {
    // Створимо директорів та акторів
    Director director("Christopher Nolan", 20);
    Actor actor1("Leonardo DiCaprio", 49);
    Actor actor2("Joseph Gordon-Levitt", 39);

    // Вектор вказівників на базовий клас — база даних фільмів
    std::vector<std::unique_ptr<MediaItem>> films;

    films.push_back(std::make_unique<FeatureFilm>("Inception", 2010, 8.8, 148));
    films.push_back(std::make_unique<ShortFilm>("Doodlebug", 1997, 7.0, "Sundance"));

    // Демонстрація динамічного поліморфізму
    for (const auto& film : films) {
        std::cout << "Type: " << film->getType() << std::endl;
        film->showInfo();
        std::cout << std::endl;
    }

    // Покажемо інформацію про режисера і акторів
    director.showInfo();
    actor1.showInfo();
    actor2.showInfo();

    return 0;
}


