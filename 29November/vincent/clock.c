#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

#include<GL/gl.h>
#include<GLFW/glfw3.h>

int main(void)
{
	GLFWwindow *window = NULL;

	if (!glfwInit())
		exit(EXIT_FAILURE);
	
	window = glfwCreateWindow(200, 200, "CLOCK", NULL, NULL);

	if(!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);

	while(!glfwWindowShouldClose(window))
	{	
		/* Zeit herausfinden */

		time_t tnow;
		time(&tnow);

		struct tm *tmnow;
		tmnow = localtime(&tnow);

		int h = tmnow->tm_hour; /* 0..23 */
		int m = tmnow->tm_min;
		int s = tmnow->tm_sec;

		/* Bereinige Anzeige */
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		/* Linie zeichnen */
		
		float phiSec = (s / 60.0f) * 2 * M_PI - M_PI_2;

		float xSec = cosf(phiSec);
		float ySec = -sinf(phiSec);
		
		float phiMin = (m / 60.0f) * 2 * M_PI - M_PI_2;

		float xMin = cosf(phiMin);
		float yMin = -sinf(phiMin);
		
		if(h >= 12)
			h = h - 12;

		float phiHr = (h / 12.0f) * 2 * M_PI - M_PI_2;

		float xHr = cosf(phiHr);
		float yHr = -sinf(phiHr);
		
		int i;

		for(i = 0; i < 12; i++)
		{
			float phi = (i / 12.0f) * 2 * M_PI - M_PI_2;

			float x = cosf(phi);
			float y = -sinf(phi);

			glPointSize(5.0);
			glColor3f(1.0f, 1.0f, 1.0f);

			glBegin(GL_POINTS);
			glVertex2f(x, y);
			glEnd();
		}

		for(i = 0; i < 60; i++)
		{
			float phi = (i / 60.0f) * 2 * M_PI - M_PI_2;

			float x = cosf(phi);
			float y = -sinf(phi);

			glPointSize(2.0);
			glColor3f(1.0f, 1.0f, 1.0f);

			glBegin(GL_POINTS);
			glVertex2f(x, y);
			glEnd();
		}

		/* Stundenzeiger */

		glLineWidth(3.0);
		glColor3f(1.0f, 1.0f, 1.0f);
		
		glBegin(GL_LINES);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(xHr * 0.6f, yHr * 0.6f);
		glEnd();

		/* Minutenzeiger */

		glLineWidth(2.0);
		glColor3f(0.0f, 0.3f, 1.0f);
		
		glBegin(GL_LINES);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(xMin * 0.9f, yMin * 0.9f);
		glEnd();

		/* Sekundenzeiger */

		glLineWidth(2.0);
		glColor3f(1.0f, 0.0f, 0.0f);
		
		glBegin(GL_LINES);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(xSec * 0.95f, ySec * 0.95f);
		glEnd();

		glPointSize(5.0);
		glColor3f(1.0f, 0.0f, 0.0f);

		glBegin(GL_POINTS);
		glVertex2f(0.0f, 0.0f);
		glEnd();

		/* Ergebnis anzeigen */

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();


	return EXIT_SUCCESS;
}

