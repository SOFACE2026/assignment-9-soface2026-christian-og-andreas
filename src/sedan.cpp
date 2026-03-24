#include "sedan.hpp"
#include <array>

static const std::array<double, 7> gear_ratios = {-1, 1, 2, 3, 4, 5, 6};

Sedan::Sedan() : current_gear(0)
{

}

void Sedan::shift_up()
{
    //shifter up
   this->current_gear++;
}

void Sedan::shift_down()
{
    //shifter ned 
    this->current_gear--;
}

double Sedan::get_torque(double engine_rpm, double throttle)
{
    //formlen fra assignment
    return 100 * throttle;
}

double Sedan::get_weight()
{
    //det er en toyota aygo vi arbejder med
    return 105;
}

double Sedan::get_wheel_radius()
{
    //med meget små hjul
    return 0.3;
}

double Sedan::get_current_gear_ratio()
{
    //bruger gearet som index i gearatioerne
    return gear_ratios[current_gear];
}