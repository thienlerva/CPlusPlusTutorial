/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UserCompare.h
 * Author: codex
 *
 * Created on January 20, 2022, 11:42 AM
 */

#ifndef USERCOMPARE_H
#define USERCOMPARE_H

#include "User.h"

class UserCompare {
public:
    bool operator()(User *a, User *b);
};

#endif /* USERCOMPARE_H */

