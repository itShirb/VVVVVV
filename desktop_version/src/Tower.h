#ifndef TOWER_H
#define TOWER_H

#include <vector>

class towerclass
{
public:
    towerclass(void);

    int backat(int xp, int yp, int yoff);

    int at(int xp, int yp, int yoff);

    int miniat(int xp, int yp, int yoff);

	int customat(int xp, int yp, int yoff);

    void loadminitower1(void);

    void loadminitower2(void);

    void loadbackground(void);

	void loadCustomTower(const int* tmap, int rx, int ry);

    void loadmap(void);

    short back[40 * 120];
    short contents[40 * 700];
    short minitower[40 * 100];

	int towerheight, towerypos, towerxpos, towerroomcount, towerprogress, oldtowerprogress, towerdir, toweroffset;
	std::vector<int> customtower;

    bool minitowermode;
	bool customtowermode;
};





#endif /* TOWER_H */
