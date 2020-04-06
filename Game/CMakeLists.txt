cmake_minimum_required(VERSION 3.0)
project(Game)

set(CMAKE_CXX_STANDARD 17)

add_executable(Game main.cpp Army/Units/Unit.h Army/Units/Knight.h Army/Units/Roundshier.h Army/Units/Spear.h Army/Units/Archor.h Army/Units/SiegeWeapon.h Army/Units/Drummer.h Army/Army.h Economy.h Player.h Knowledge.h Town/Town.h Town/Buildings/ArtilleryDepot.h Town/Buildings/Building.h Town/Buildings/Mines.h Town/Buildings/Towers.h Town/Buildings/Academy.h Town/Buildings/Barrack.h Town/Buildings/Stable.h)

