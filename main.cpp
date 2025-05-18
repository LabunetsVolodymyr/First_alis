#include "FeatureFilm.h"
#include "ShortFilm.h"
#include "Director.h"
#include "Studio.h"

int main() {
    Director d("Christopher Nolan", 1970);
    Studio s("Warner Bros", "USA");

    FeatureFilm ff("Inception", 2010, 8.8, d, s);
    ShortFilm sf("Paperman", 2012, 7.5, d, s);

    ff.show();
    cout << endl;
    sf.show();
    cout << endl;

    d.show();
    s.show();

    return 0;
}
