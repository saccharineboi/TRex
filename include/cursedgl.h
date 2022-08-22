// Copyright (C) 2022 saccharineboi

#pragma once

////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
////////////////////////////////////////

////////////////////////////////////////
#define CURSEDGL_VERSION_MAJOR 0
#define CURSEDGL_VERSION_MINOR 5
#define CURSEDGL_VERSION_PATCH 0

////////////////////////////////////////
/// Constants and routines that may
/// be useful for everywhere in CursedGL's
/// source code
////////////////////////////////////////
#include "common.h"
////////////////////////////////////////

////////////////////////////////////////
/// Math routines
////////////////////////////////////////
#include "vec.h"
#include "mat2.h"
#include "mat3.h"
#include "mat4.h"
#include "quat.h"
#include "transform.h"
////////////////////////////////////////

////////////////////////////////////////
/// Pixels and framebuffers
////////////////////////////////////////
#include "pixel.h"
#include "framebuffer.h"
////////////////////////////////////////

////////////////////////////////////////
/// Lighting and material
////////////////////////////////////////
#include "lights.h"
#include "material.h"
////////////////////////////////////////

////////////////////////////////////////
/// Routines that either perform or aid
/// in the rasterization of pre-defined
/// primitives
////////////////////////////////////////
#include "rasterizer.h"
////////////////////////////////////////

////////////////////////////////////////
/// Predefined list of 2D and 3D objects
/// that are ready to be rendered by CursedGL
////////////////////////////////////////
#include "shapes.h"
////////////////////////////////////////

////////////////////////////////////////
/// Built-in obj format loader that
/// MUST NOT BE USED for anything other
/// than the obj files already in the obj
/// folder.
///
/// I wrote this loader only to test
/// CursedGL's ability to render complex objects
/// like Utah teapot, it's not written to be
/// used for parsing obj files you downloaded
/// from the internet. Use assimp for that!
////////////////////////////////////////
#include "objLoader.h"
////////////////////////////////////////

////////////////////////////////////////
/// Routines that initialize and shut down
/// CursedGL
////////////////////////////////////////
#include "init.h"
////////////////////////////////////////

////////////////////////////////////////
/// Error handling for CursedGL
////////////////////////////////////////
#include "error.h"
////////////////////////////////////////

////////////////////////////////////////
/// Texturing
////////////////////////////////////////
#include "texture.h"
////////////////////////////////////////

////////////////////////////////////////
#ifdef __cplusplus
}
#endif
////////////////////////////////////////
