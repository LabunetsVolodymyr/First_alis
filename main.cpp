#include <iostream>
#include <vector>
#include "FeatureFilm.h"
#include "ShortFilm.h"
#include "Director.h"
#include "Actor.h"
#include "IPlayable.h"

void showFilmType(const Film &film) {
    std::cout << "Type: " << film.getType() << std::endl;
    film.play();
}

int main() {
    FeatureFilm ff("Interstellar", 2014, 8.6);
    ShortFilm sf("Piper", 2016, 8.4);
    Director director("Christopher Nolan", 20);
    Actor actor("Leonardo DiCaprio", 49);

    std::vector<Film*> films;
    films.push_back(&ff);
    films.push_back(&sf);

    for (const auto *f : films) {
        f->showInfo();
        showFilmType(*f);
    }

    director.showInfo();
    actor.showInfo();

    std::vector<IPlayable*> playables;
    playables.push_back(&ff);
    playables.push_back(&sf);
    playables.push_back(&actor);

    for (const auto* p : playables) {
        p->play();
    }

    return 0;
}
