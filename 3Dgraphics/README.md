Learn all the theory and the math behind 3D graphics while creating a software renderer from scratch using the C programming language.

This course is a complete immersion into the fundamentals of computer graphics! You’ll learn how a software 3D engine works under the hood, and use the C programming language to write a complete software rasterizer from scratch; including textures, camera, clipping, and loading complex OBJ files. Pixel per pixel, triangle per triangle, mesh per mesh.

We’ll review all the beautiful math that makes 3D computer graphics possible as we tackle all concepts from first principles. We’ll also write a comprehensive software renderer that can display complex 3D objects on the screen without the help of any graphics API. No GPU, no OpenGL, no DirectX! Just a C compiler and a little bit of linear algebra is all we need to create a final project that is nothing short of amazing!

The tools you’ll need
We’ll simply use the command-line, a code editor, and a C compiler. All these tools are multi-platform, so you’ll be able to code along on either Windows, macOS, or Linux!

Also, make sure you have pen and paper ready for the lectures. This course will probably be a little bit different than other programming courses you took before. We will take our sweet time and make sure we understand every formula we find along the way!

Is this course for you?
This is a self-contained course with no prerequisites. However, you will probably get the most out of it if you already know the basics of coding (if-else, loops, functions).

If you never programmed in C before, don’t worry! Many successful students come from different languages like Java, Python, JavaScript, Swift, and others. We’ll learn to work with the C language together.

Table of Contents
1 Introduction and Learning Outcomes
2 How to Take this Course
3 Words of Encouragement
4 Project Dependencies
5 A Quick Note for Windows Users
6 Project Folder Structure
7 The Compilation Flow
8 Working with Makefiles
9 Configuring Visual Studio on Windows
10 Creating an SDL Window
11 Rendering an SDL Window
12 Declaring a Color Buffer
13 Allocating Memory and Freeing Resources
14 SDL Texture
15 Fullscreen Window
16 Exercise. Drawing a Background Grid
17 Drawing a Background Grid
18 Exercise. Drawing Rectangles
19 Creating a Function to Draw Rectangles
20 Defining Header Files
21 Coding New Header Files
22 The Draw Pixel Function
23 Vectors
24 Declaring a Vector Type
25 Review of C Structs
26 Array of Points
27 Orthographic Projection
28 Perspective Projection
29 Implementing the Perspective Divide
30 Coordinate System Handedness
31 Vector Transformations
32 Review of Sine Cosine and Tangent
33 Rotating Vectors
34 Vector Rotation Function
35 Proof of Angle Sine Addition
36 Proof of Angle Cosine Addition
37 Fixing our Game Loop Time Step
38 Using a Delay Function
39 Triangles and Meshes
40 Vertices and Triangle Faces
41 Triangle Edges
42 Line Equation
43 DDA Line Drawing Algorithm
44 Coding a Function to Draw Lines
45 Dynamic Arrays
46 Dynamic Mesh Vertices and Faces
47 OBJ Files
48 Exercise. Loading OBJ File Content
49 Loading OBJ File Content
50 Back-face Culling Motivation
51 Vector Magnitude
52 Vector Addition and Subtraction
53 Vector Scalar Multiplication and Division
54 Vector Cross Product
55 Finding the Normal Vector
56 Dot Product
57 Back-face Culling Algorithm
58 Back-face Culling Code
59 Vector Normalization
60 Triangle Fill
61 Flat-Bottom & Flat-Top Technique
62 Activity. Find Triangle Midpoint
63 Solution to the Triangle Midpoint
64 Coding the Triangle Midpoint Computation
65 Flat-Bottom Triangle Algorithm
66 Flat-Bottom Triangle Code
67 Flat-Top Triangle Algorithm
68 Flat-Top Triangle Code
69 Avoiding Division by Zero
70 Different Rendering Options Solution
71 Colored Triangle Faces
72 Painter’s Algorithm
73 Coding a Sorting Function
74 Matrices Overview
75 Matrix Operations
76 Properties of Matrix Multiplication
77 Examples of Matrix Multiplication
78 2D Rotation Matrix
79 3D Matrix Transformations
80 3D Scale Matrix
81 Matrix Typedef
82 Scale Matrix Code
83 3D Translation Matrix
84 Translation Matrix Code
85 3D Rotation Matrices
86 Rotation Matrix Code
87 The World Matrix
88 Order of Transformations
89 Translation is Not a Linear Transformation
90 Defining a Projection Matrix
91 Populating our Perspective Projection Matrix
92 Coding the Perspective Projection Matrix
93 Exercise. Projecting Negative Values
94 Projecting Negative Values
95 Row-major and Column-major Orders
96 Flat Shading
97 Coding Flat Shading & Light
98 Smooth Shading Techniques
99 Inverted Vertical Screen Values
100 Texture Mapping
101 Representing Textures in Memory
102 Texture Typedef
103 Textured Triangles
104 Textured Flat-Bottom Triangle
105 Textured Flat-Top Triangle
106 Barycentric Coordinates
107 Barycentric Weights (О±, ОІ, Оі)
108 Function to Compute (О±, ОІ, Оі)
109 Visualizing Textured Triangles
110 Perspective Correct Interpolation
111 PS1 Games and Affine Texture Mapping
112 Perspective Correct Interpolation Code
113 Inverted Cube UV Coordinates
114 Decoding PNG Files
115 Loading PNG File Content
116 Freeing PNG Textures
117 Loading OBJ Texture Attributes
118 Preventing Texture Buffer Overflow
119 Visualizing Textured OBJ Models
120 Z-Buffer
121 Z-Buffer Code
122 Exercise. Z-Buffer for Filled Triangles
123 Implementing a Z-Buffer for Filled Triangles
124 A Discussion on Dynamic Memory Allocation
125 Camera Space
126 Look At Camera Model
127 Look At Transformations
128 The LookAt Function
129 Coding the LookAt Function
130 Variable Delta-time
131 A Simple FPS Camera Movement
132 Coding a Simple FPS Camera Movement
133 Frustum Clipping
134 Planes
135 Exercise. Right Frustum Plane Point & Normal
136 Defining Frustum Planes Points & Normals
137 Initializing an Array of Frustum Planes
138 Defining Points Inside and Outside Planes
139 Intersection Between Line & Plane
140 Clipping a Polygon Against a Plane
141 Polygon Typedef
142 A Function to Clip Polygon Against Planes
143 Coding the Function to Clip Polygons Against Planes
144 Converting Polygons Back Into Triangles
145 Visualizing Clipped Triangles
146 Horizontal & Vertical FOV Angles
147 Clipping Texture UV Coordinates
148 Clipping Space
149 Working with Static Variables
150 Refactoring SDL Globals
151 Simulating Low-Resolution Displays
152 Refactoring Light Globals
153 Exercise. Camera Pitch Rotation
154 Implementing the Camera Pitch Rotation
155 Declaring Multiple Meshes
156 Implementing Multiple Meshes
157 Implementing Multiple Textures
158 Finishing our Implementation
159 Handedness & Orientation
160 Dedicated Graphics Cards
161 Modern Graphics APIs & Shaders
162 A Parallel Rasterization Algorithm
163 Determining Point Inside Triangle
164 Top-Left Rasterization Rule
165 Edge Function & Barycentric Weights
166 Edge Function & Constant Increments
167 Subpixel Rasterization
168 Next Steps