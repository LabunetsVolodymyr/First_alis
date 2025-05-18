#include <iostream>
#include "FeatureFilm.h"
#include "ShortFilm.h"

int main() {
    auto dir = std::make_shared<Director>("Christopher Nolan", 20);

    std::vector<std::shared_ptr<Actor>> actors = {
        std::make_shared<Actor>("Leonardo DiCaprio", 49),
        std::make_shared<Actor>("Joseph Gordon-Levitt", 43)
    };

    FeatureFilm ff("Inception", 2010, 8.8, dir, actors, 148);
    ShortFilm sf("Piper", 2016, 8.5, dir, { std::make_shared<Actor>("Piper the Bird") }, true);

    ff.showInfo();
    std::cout << std::endl;
    sf.showInfo();

    return 0;
}
