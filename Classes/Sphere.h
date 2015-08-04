//
//  Sphere.h
//  Flight
//
//  Created by Akihito OKUHATA on 2015/07/11.
//
//

#ifndef __Flight__Sphere__
#define __Flight__Sphere__

#include "cocos2d.h"

class Sphere : public cocos2d::Sprite3D
{
public:
    static std::vector<std::vector<cocos2d::Vec3>> getSphereGroupPositionList(const std::string& path);

};

#endif /* defined(__Flight__Sphere__) */
