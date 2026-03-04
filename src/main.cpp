#include <iostream>
// GLEW must be included before GLFW
#include <GL/glew.h> 
#include <GLFW/glfw3.h>

int main() {
    // 1. Initialize the GLFW library
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }

    // 2. Configure GLFW for macOS M2 (Requesting OpenGL 4.1 Core Profile)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // Strictly required on macOS

    // 3. Create the window
    GLFWwindow* window = glfwCreateWindow(800, 600, "Molecular Random Walk Visualization", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }
    
    // Bind the OpenGL context to our new window
    glfwMakeContextCurrent(window);

    // 4. Initialize GLEW to load modern OpenGL functions
    glewExperimental = GL_TRUE; 
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW\n";
        return -1;
    }

    // 5. The Main Engine Loop
    while (!glfwWindowShouldClose(window)) {
        // Process user input (keyboard/mouse)
        glfwPollEvents();

        // Clear the screen with a dark gray background
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // ---------------------------------------------------------
        // This is where our random walk physics and rendering will go!
        // ---------------------------------------------------------

        // Swap the front and back buffers to display the new frame
        glfwSwapBuffers(window);
    }

    // 6. Clean up resources before exiting
    glfwTerminate();
    return 0;
}