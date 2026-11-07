#ifndef JUEGODELAVIDA_H
#define JUEGODELAVIDA_H

#include <vector>
#include <utility>

void celulaNacida(string* matriz, size_t x, size_t y, const std::vector<std::pair<size_t, size_t>>& posiciones);

void celulaMuere();

void celulaVive();

#endif