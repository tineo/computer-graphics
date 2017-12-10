#ifndef COMPUTER_GRAPHICS_PATHWAY_HPP
#define COMPUTER_GRAPHICS_PATHWAY_HPP

#include <glm/vec3.hpp>
#include <vector>
#include <customs/base/Object.hpp>

using namespace glm;
using namespace std;

void buildPathFromFile (const char *path_list_filename, vector<vec3> &paths);
void buildRailway (vector<vec3> &paths, vector<Object*> &objects);

#endif // COMPUTER_GRAPHICS_PATHWAY_HPP