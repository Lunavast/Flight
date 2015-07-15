//
//  Global.h
//  Flight
//
//  Created by Akihito OKUHATA on 2015/07/12.
//
//

#ifndef __Flight__Global__
#define __Flight__Global__

#include <iostream>
#include "cocos2d.h"

std::ostream& operator<<(std::ostream& input, const cocos2d::Vec2& vec);
std::ostream& operator<<(std::ostream& input, const cocos2d::Vec3& vec);

#endif /* defined(__Flight__Global__) */