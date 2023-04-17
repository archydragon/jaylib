static Janet cfun_DrawLine3D(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 start = jaylib_getvec3(argv, 0);
    Vector3 end = jaylib_getvec3(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawLine3D(start, end, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCircle3D(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 center = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    Vector3 axis = jaylib_getvec3(argv, 2);
    float angle = (float) janet_getnumber(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawCircle3D(center, radius, axis, angle, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCube(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 pos = jaylib_getvec3(argv, 0);
    float width = (float) janet_getnumber(argv, 1);
    float height = (float) janet_getnumber(argv, 2);
    float length = (float) janet_getnumber(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawCube(pos, width, height, length, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeTexture(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Texture2D *texture = jaylib_gettexture2d(argv, 0);
    Vector3 position = jaylib_getvec3(argv, 1);
    float width = (float) janet_getnumber(argv, 2);
    float height = (float) janet_getnumber(argv, 3);
    float length = (float) janet_getnumber(argv, 4);
    Color color = jaylib_getcolor(argv, 5);
    DrawCubeTexture(*texture, position, width, height, length, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawGrid(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int slices = janet_getinteger(argv, 0);
    float spacing = (float) janet_getnumber(argv, 1);
    DrawGrid(slices, spacing);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeV(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 position = jaylib_getvec3(argv, 0);
    Vector3 size = jaylib_getvec3(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawCubeV(position, size, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeWires(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 position = jaylib_getvec3(argv, 0);
    float width = (float) janet_getnumber(argv, 1);
    float height = (float) janet_getnumber(argv, 2);
    float length = (float) janet_getnumber(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawCubeWires(position, width, height, length, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeWiresV(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 position = jaylib_getvec3(argv, 0);
    Vector3 size = jaylib_getvec3(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawCubeWiresV(position, size, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawSphere(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 centerPos = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawSphere(centerPos, radius, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawSphereEx(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 position = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    int rings = janet_getinteger(argv, 2);
    int slices = janet_getinteger(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawSphereEx(position, radius, rings, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawSphereWires(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 centerPos = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    int rings = janet_getinteger(argv, 2);
    int slices = janet_getinteger(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawSphereWires(centerPos, radius, rings, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCylinder(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Vector3 position = jaylib_getvec3(argv, 0);
    float radiusTop = (float) janet_getnumber(argv, 1);
    float radiusBottom = (float) janet_getnumber(argv, 2);
    float height = (float) janet_getnumber(argv, 3);
    int slices = janet_getinteger(argv, 4);
    Color color = jaylib_getcolor(argv, 5);
    DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCylinderWires(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Vector3 position = jaylib_getvec3(argv, 0);
    float radiusTop = (float) janet_getnumber(argv, 1);
    float radiusBottom = (float) janet_getnumber(argv, 2);
    float height = (float) janet_getnumber(argv, 3);
    int slices = janet_getinteger(argv, 4);
    Color color = jaylib_getcolor(argv, 5);
    DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawPlane(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 centerPos = jaylib_getvec3(argv, 0);
    Vector2 size = jaylib_getvec2(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawPlane(centerPos, size, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawRay(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Ray ray = jaylib_getray(argv, 0);
    Color color = jaylib_getcolor(argv, 1);
    DrawRay(ray, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawMesh(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Mesh mesh = *jaylib_getmesh(argv, 0);
    Material material = *jaylib_getmaterial(argv, 1);
    Matrix transform = jaylib_getmatrix(argv, 2);
    DrawMesh(mesh, material, transform);
    return janet_wrap_nil();
}

static Janet cfun_GenMeshPoly(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int sides = janet_getinteger(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    Mesh *polyMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *polyMesh = GenMeshPoly(sides, radius);
    return janet_wrap_abstract(polyMesh);
}

static Janet cfun_GenMeshPlane(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    float width = (float) janet_getnumber(argv, 0);
    float length = (float) janet_getnumber(argv, 1);
    int resX = janet_getinteger(argv, 2);
    int resY = janet_getinteger(argv, 3);
    Mesh *planeMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *planeMesh = GenMeshPlane(width, length, resX, resY);
    return janet_wrap_abstract(planeMesh);
}

static Janet cfun_GenMeshCube(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    float width = (float) janet_getnumber(argv, 0);
    float height = (float) janet_getnumber(argv, 1);
    float length = (float) janet_getnumber(argv, 2);
    Mesh *cubeMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *cubeMesh = GenMeshCube(width, height, length);
    return janet_wrap_abstract(cubeMesh);
}

static Janet cfun_GenMeshSphere(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    float radius = (float) janet_getnumber(argv, 0);
    int rings = janet_getinteger(argv, 1);
    int slices = janet_getinteger(argv, 2);
    Mesh *sphereMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *sphereMesh = GenMeshSphere(radius, rings, slices);
    return janet_wrap_abstract(sphereMesh);
}

static Janet cfun_GenMeshHemiSphere(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    float radius = (float) janet_getnumber(argv, 0);
    int rings = janet_getinteger(argv, 1);
    int slices = janet_getinteger(argv, 2);
    Mesh *sphereMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *sphereMesh = GenMeshHemiSphere(radius, rings, slices);
    return janet_wrap_abstract(sphereMesh);
}

static Janet cfun_GenMeshCylinder(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    float radius = (float) janet_getnumber(argv, 0);
    float height = (float) janet_getnumber(argv, 1);
    int slices = janet_getinteger(argv, 2);
    Mesh *cylinderMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *cylinderMesh = GenMeshCylinder(radius, height, slices);
    return janet_wrap_abstract(cylinderMesh);
}

static Janet cfun_GenMeshCone(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    float radius = (float) janet_getnumber(argv, 0);
    float height = (float) janet_getnumber(argv, 1);
    int slices = janet_getinteger(argv, 2);
    Mesh *coneMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *coneMesh = GenMeshCone(radius, height, slices);
    return janet_wrap_abstract(coneMesh);
}

static Janet cfun_GenMeshTorus(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    float radius = (float) janet_getnumber(argv, 0);
    float size = (float) janet_getnumber(argv, 1);
    int radSeg = janet_getinteger(argv, 2);
    int sides = janet_getinteger(argv, 3);
    Mesh *torusMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *torusMesh = GenMeshTorus(radius, size, radSeg, sides);
    return janet_wrap_abstract(torusMesh);
}

static Janet cfun_GenMeshKnot(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    float radius = (float) janet_getnumber(argv, 0);
    float size = (float) janet_getnumber(argv, 1);
    int radSeg = janet_getinteger(argv, 2);
    int sides = janet_getinteger(argv, 3);
    Mesh *knotMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *knotMesh = GenMeshKnot(radius, size, radSeg, sides);
    return janet_wrap_abstract(knotMesh);
}

static Janet cfun_GenMeshHeightmap(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Image image = *jaylib_getimage(argv, 0);
    Vector3 size = jaylib_getvec3(argv, 1);
    Mesh *mapMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *mapMesh = GenMeshHeightmap(image, size);
    return janet_wrap_abstract(mapMesh);
}

static Janet cfun_GenMeshCubicmap(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Image image = *jaylib_getimage(argv, 0);
    Vector3 size = jaylib_getvec3(argv, 1);
    Mesh *mapMesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    *mapMesh = GenMeshCubicmap(image, size);
    return janet_wrap_abstract(mapMesh);
}

static Janet cfun_LoadMaterialDefault(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Material *defaultMaterial = janet_abstract(&AT_Material, sizeof(Material));
    *defaultMaterial = LoadMaterialDefault();
    return janet_wrap_abstract(defaultMaterial);
}

static JanetReg threed_cfuns[] = {
    {"draw-line-3d", cfun_DrawLine3D, 
        "(draw-line-3d [start-x start-y start-z] [end-x end-y end-z] color)\n\n"
        "Draw a line in 3D world space"
    },
    {"draw-circle-3d", cfun_DrawCircle3D, 
        "(draw-circle-3d [center-x center-y center-z] radius [rot-x rot-y rot-z] rotation-angle color)\n\n"
        "Draw a circle in 3D world space"
    },
    {"draw-cube", cfun_DrawCube, 
        "(draw-cube [center-x center-y center-z] width height length color)\n\n"
        "Draw cube"
    },
    {"draw-cube-v", cfun_DrawCubeV, 
        "(draw-cube-v [center-x center-y center-z] [width height length] color)\n\n"
        "Draw cube (Vector version)"
    },
    {"draw-cube-wires", cfun_DrawCubeWires, 
        "(draw-cube-wires [center-x center-y center-z] width height length color)\n\n"
        "Draw cube wires"
    },
    {"draw-cube-wires-v", cfun_DrawCubeWiresV, 
        "(draw-cube-wires-v [center-x center-y center-z] [width height length] color)\n\n"
        "Draw cube wires (Vector version)"
    },
    {"draw-cube-texture", cfun_DrawCubeTexture, 
        "(draw-cube-texture texture [center-x center-y center-z] width height length color)\n\n"
        "Draw cube textured"
    },
    {"draw-grid", cfun_DrawGrid, 
        "(draw-grid slices spacing)\n\n"
        "Draw a grid (centered at (0, 0, 0))"
    },
    {"draw-sphere", cfun_DrawSphere, 
        "(draw-sphere [center-x center-y center-z] radius color)\n\n"
        "Draw sphere"
    },
    {"draw-sphere-ex", cfun_DrawSphereEx, 
        "(draw-sphere-ex [center-x center-y center-z] radius rings slices color)\n\n"
        "Draw sphere with extended parameters"
    },
    {"draw-sphere-wires", cfun_DrawSphereWires, 
        "(draw-sphere-wires [center-x center-y center-z] radius rings slices color)\n\n"
        "Draw sphere wires"
    },
    {"draw-cylinder", cfun_DrawCylinder, 
        "(draw-cylinder [center-x center-y center-z] radius-top radius-bottom height slices color)\n\n"
        "Draw a cylinder/cone"
    },
    {"draw-cylinder-wires", cfun_DrawCylinderWires, 
        "(draw-cylinder-wires [center-x center-y center-z] radius-top radius-bottom height slices color)\n\n"
        "Draw a cylinder/cone wires"
    },
    {"draw-plane", cfun_DrawPlane, 
        "(draw-plane [center-x center-y center-z] [height width] color)\n\n"
        "Draw a plane XZ"
    },
    {"draw-ray", cfun_DrawRay, 
        "(draw-ray ray color)\n\n"
        "Draw a ray line"
    },
    {"draw-mesh", cfun_DrawMesh,
        "(draw-mesh mesh material transform)\n\n"
        "Draw a mesh with material and transform"    
    },
    {"load-material-default", cfun_LoadMaterialDefault,
        "(load-material-default)\n\n"
        "Load and return the default material"    
    },
    {"gen-mesh-poly", cfun_GenMeshPoly,
        "(gen-mesh-poly sides radius)\n\n"
        "Generate a polygonal mesh with given number of sides and radius"    
    },
    {"gen-mesh-plane", cfun_GenMeshPlane,
        "(gen-mesh-plane width length res-x res-y)\n\n"
        "Generate a plane mesh with given dimensions and subdivisions"    
    },
    {"gen-mesh-cube", cfun_GenMeshCube,
        "(gen-mesh-cube width height length)\n\n"
        "Generate a cube mesh with given dimensions"    
    },
    {"gen-mesh-sphere", cfun_GenMeshSphere,
        "(gen-mesh-sphere radius rings slices)\n\n"
        "Generate a sphere mesh with given dimensions"    
    },
    {"gen-mesh-hemisphere", cfun_GenMeshHemiSphere,
        "(gen-mesh-hemisphere radius rings slices)\n\n"
        "Generate a hemisphere mesh with given dimensions (no bottom cap)"    
    },
    {"gen-mesh-cylinder", cfun_GenMeshCylinder,
        "(gen-mesh-cylinder radius height slices)\n\n"
        "Generate a cylinder mesh with given dimensions"    
    },
    {"gen-mesh-cone", cfun_GenMeshCone,
        "(gen-mesh-cone radius height slices)\n\n"
        "Generate a cone mesh with given dimensions"    
    },
    {"gen-mesh-torus", cfun_GenMeshTorus,
        "(gen-mesh-torus radius size rad-seg sides)\n\n"
        "Generate a torus mesh with given dimensions"    
    },
    {"gen-mesh-knot", cfun_GenMeshKnot,
        "(gen-mesh-knot radius size rad-seg sides)\n\n"
        "Generate a trefoil knot mesh with given dimensions"    
    },
    {"gen-mesh-heightmap", cfun_GenMeshHeightmap,
        "(gen-mesh-heightmap image size)\n\n"
        "Generate a heightmap mesh from image data and size (vec3)"    
    },
    {"gen-mesh-cubicmap", cfun_GenMeshCubicmap,
        "(gen-mesh-cubicmap image size)\n\n"
        "Generate a cubicmap mesh from image data and size (vec3)"    
    },
    {NULL, NULL, NULL}
};
