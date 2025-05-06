#include "Film.h"
#include "Director.h"
#include "Studio.h"


int main() {

    Film* film1 = new Film("Interstellar", "Sci-Fi", 2014, 8.6);
    Film* film2 = new Film("Inception", "Sci-Fi", 2010, 8.8);

    Director director("Christopher Nolan", "30.07.1970");
    director.addFilm(film1);
    director.addFilm(film2);

    Studio studio("Warner Bros", 1923);
    studio.addFilm(film1);
    studio.addFilm(film2);

    director.display();
    studio.display();

    std::cout << "\nTesting overloaded operators:\n";
    std::cout << *film1 << std::endl;
    std::cout << *film2 << std::endl;

    if (!(*film1)) {
        std::cout << "Film \"" << film1->getName() << "\" has a low rating!\n";
    }

    Film film3 = *film1 + *film2;
    film3.display();

    Film film4;
    film4 = film3;
    std::cout << "Assigned Film:\n";
    film4.display();

    Film film5;
    std::cin >> film5;
    film5.display();

    std::cout << "Total films created: " << Film::getFilmCount() << std::endl;

    delete film1;
    delete film2;

    return 0;
}

