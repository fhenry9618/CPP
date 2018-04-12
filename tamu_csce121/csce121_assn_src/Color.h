//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//                        CLASS CONSTRUCTORS LAB                            //
//                               COLOR.H                                    //
//                                                                          //
//  Date ...: 18/MAR/2017                                                   //
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#ifndef COLOR_H
#define COLOR_H

//////////////////////////////////////////////////////////////////////////////
//                                 Dependencies                             //
//////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <sstream>

//////////////////////////////////////////////////////////////////////////////
//                           Color Class Definition                         //
//////////////////////////////////////////////////////////////////////////////
class Color_error {};
class Color {
public:
    std::string to_str();
    bool is_valid_val(int);
    void set_R(int);
    void set_G(int);
    void set_B(int);
private:
    int R;
    int G;
    int B;
};
//////////////////////////////////////////////////////////////////////////////
#endif