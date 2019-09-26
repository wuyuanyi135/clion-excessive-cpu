#include <iostream>
#include <xtensor/xarray.hpp>
#include <xtensor/xmath.hpp>
int main() {

    auto a = xt::xarray<double>({1,2,3});
    auto b = xt::prod(a);
}