#include <math.h>
#include "vector.h"
#include <stdlib.h>
float vec_2_legth(vec2_t v){
    return sqrtf(v.x * v.x) + (v.y * v.y);
}

float vec_2_dot(vec2_t a, vec2_t b){
    return ((a.x * b.x) * (a.y * b.y));
}



vec2_t vec_2_addition(vec2_t v, vec2_t x){
vec2_t results = {
    .x = v.x + x.x,
    .y = v.y + x.y
};
return results;
}


vec2_t vec_2_subtraction(vec2_t v, vec2_t x){
vec2_t results = {
    .x = v.x - x.x,
    .y = v.y - x.y
};
return results;
}

vec2_t vec_2_multiply(vec2_t v, float factor){
    vec2_t result = {
        .x = v.x * factor,
        .y = v.y * factor
    };
    return result;
}

vec2_t vec_2_divide(vec2_t v, float factor){
    vec2_t result = {
        .x = v.x / factor,
        .y = v.y / factor
    };
    return result;
}


void vec_2_normalize(vec2_t* v) {
    float length = vec_2_legth(*v);
    v->x /= length;
    v->y /= length;
}

//// VEC 3 ///////
 
float vec_3_legth(vec3_t v){
    return sqrtf(v.x * v.x + v.y * v.y + v.z *v.z );
}


vec3_t vec_3_addition(vec3_t v, vec3_t x){
vec3_t results = {
    .x = v.x + x.x,
    .y = v.y + x.y,
    .z = v.z + x.z
};
return results;
}

vec3_t vec_3_subtraction(vec3_t v, vec3_t x){
vec3_t results = {
    .x = v.x - x.x,
    .y = v.y - x.y,
    .z = v.z - x.z

};
return results;
}

vec3_t vec_3_multiply(vec3_t v, float factor){
    vec3_t result = {
        .x = v.x * factor,
        .y = v.y * factor,
        .z = v.z * factor
    };
    return result;
}

vec3_t vec_3_divide(vec3_t v, float factor){
    vec3_t result = {
        .x = v.x / factor,
        .y = v.y / factor,
        .z = v.z / factor

    };
    return result;
}

vec3_t vec_3_cross(vec3_t a, vec3_t b) {
    vec3_t result = {
        .x = a.y * b.z  - a.z * b.y,
        .y = a.z * b.x  - a.x * b.z,
        .z = a.x * b.y  - a.y * b.x
    };
    return result;
}

void vec_3_normalize(vec3_t* v) {
    float length1 = vec_3_legth(*v);
    //float length = sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
    v->x /= length1;
    v->y /= length1;
    v->z /= length1;


}
float vec_3_dot(vec3_t a, vec3_t b){
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}


vec3_t vec3_rotate_x(vec3_t v, float angle) {
    vec3_t rotated_vector = {
        .x = v.x,
        .y = v.y * cos(angle) - v.z * sin(angle),
        .z = v.y * sin(angle) + v.z * cos(angle)
    };
    return rotated_vector;
}

vec3_t vec3_rotate_y(vec3_t v, float angle) {
    vec3_t rotated_vector = {
        .x = v.x * cos(angle) - v.z * sin(angle),
        .y = v.y,
        .z = v.x * sin(angle) + v.z * cos(angle)
    };
    return rotated_vector;
}

vec3_t vec3_rotate_z(vec3_t v, float angle) {
    vec3_t rotated_vector = {
        .x = v.x * cos(angle) - v.y * sin(angle),
        .y = v.x * sin(angle) + v.y * cos(angle),
        .z = v.z
    };
    return rotated_vector;
}



vec4_t vec3_to_vec4(vec3_t v) {
    vec4_t result = { v.x, v.y, v.z, 1};
    return result;
}

vec3_t vec4_to_vec3(vec4_t v) {
    vec3_t result = { v.x, v.y, v.z };
    return result;
}
