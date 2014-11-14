#pragma once

#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <memory>

#include "glm/glm.hpp"

#include "platform.h"
#include "sceneDirector/sceneDirector.h"
#include "util/shaderProgram.h"
#include "util/vertexLayout.h"
#include "util/vboMesh.h"
#include "util/gestures.h"

/* Tangram C API
 *
 * Primary interface for controlling and managing the lifecycle of a Tangram map surface
 * 
 * TODO: More complete lifecycle management such as onPause, onResume
 * TODO: Input functions will go here too, things like onTouchDown, onTouchMove, etc.
 */

// Create resources and initialize the map view
void initializeOpenGL();

// Resize the map view to a new width and height (in pixels)
void resizeViewport(int newWidth, int newHeight);

// Render a new frame of the map view (if needed)
// TODO: Pass in the time step from the client application
void renderFrame();

/*
 * method to interface platform gestures with sceneDirector's gesture handler methods
 */
void handleGestures(Tangram::Gestures _gesture, const glm::vec2 _posOrVel1 = glm::vec2(0,0), float _scale = 1.0);

