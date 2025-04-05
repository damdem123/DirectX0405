#pragma once

// 미리컴파일된 헤더
// 1. framework.h, framework.cpp 만들기
// 모든 구성, 모든 플랫폼
// 2. framework.cpp 속성->C/C++ -> 미리컴파일된헤더 만들기/ framework.h  
// 3. 프로젝트 속성 -> C/C++ -> 미리컴파일된헤더 사용 / framework.h

#include <iostream>

using namespace std;

#include "Creature.h"
#include "Player.h"
#include "Knight.h"

#include "Monster.h"
#include "Goblin.h"