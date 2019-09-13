#include <iostream>
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int y=0;
int ticks=0, gerak=0;
double stop=0.0;
int color=0, klik=0;

 void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) {
    if (button ==GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS)
    klik++;
}

     void kedip(){
        if(klik%2==0){
            color=0;
        }
        else if(klik%2==1){
            if(color<=300) color++;
            else color=0;
        }
    }

static void error_callback(int error, const char* description){
    fputs(description, stderr);
    }
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    glfwSetWindowShouldClose(window, GL_TRUE); //close program press ESC key
    }

    void setup_viewport(GLFWwindow* window){
    // setting viewport size, projection etc
        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float) height;
        glViewport(0, 0, width, height);

        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, 800, 800, 0, 1.f, -1.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        }

    void display(){
        glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glFlush();
        }

    void hN(){
        glBegin(GL_POLYGON);
        glColor3ub(255, 195, 163);
        glVertex2d(146.63, 175.11);
        glVertex2d(146.63, 391);
        glVertex2d(185.93, 391);
        glVertex2d(185.93, 175.11);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 184, 160);
        glVertex2d(195, 175);
        glVertex2d(195, 263.47);
        glVertex2d(266, 391);
        glVertex2d(266, 302.94);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 174, 158);
        glVertex2d(273.63, 175.11);
        glVertex2d(273.63, 391);
        glVertex2d(312.93, 391);
        glVertex2d(312.93, 175.11);
        glEnd();
        }

    void hA(){
        glBegin(GL_POLYGON);
        glColor3ub(255, 164, 156);
        glVertex2d(329.96, 302.87);
        glVertex2d(329.96, 390.93);
        glVertex2d(401.04, 263.54);
        glVertex2d(401.04, 174.91);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 153, 153);
        glVertex2d(409, 174.91);
        glVertex2d(409, 263.47);
        glVertex2d(480, 391);
        glVertex2d(480, 302.94);
        glEnd();
        }

    void hJ(){
        glBegin(GL_POLYGON);
        glColor3ub(255, 195, 163);
        glVertex2d(507.07, 172.67);
        glVertex2d(507.07, 203);
        glVertex2d(627, 203);
        glVertex2d(627, 172.67);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 184, 160);
        glVertex2d(597, 210);
        glVertex2d(627, 210);
        glVertex2d(627, 278);
        glVertex2d(597, 306);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 174, 158);
        glVertex2d(627, 289.39);
        glVertex2d(627, 331.47);
        glVertex2d(567, 391);
        glVertex2d(567, 348.77);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 164, 156);
        glVertex2d(560.77, 348.77);
        glVertex2d(560.77, 391);
        glVertex2d(502.9, 331.47);
        glVertex2d(502.9, 289.39);
        glEnd();
        }

    void hE(){
        glBegin(GL_POLYGON);
        glColor3ub(255, 153, 153);
        glVertex2d(147.7, 397.16);
        glVertex2d(147.7, 616.09);
        glVertex2d(187, 616.09);
        glVertex2d(187, 397.16);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 164, 156);
        glVertex2d(195, 397.16);
        glVertex2d(314, 397.16);
        glVertex2d(314, 430);
        glVertex2d(195, 430);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 174, 158);
        glVertex2d(195, 492.67);
        glVertex2d(195, 522.4);
        glVertex2d(299, 522.4);
        glVertex2d(299, 492.67);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 174, 158);
        glVertex2d(195, 585.67);
        glVertex2d(195, 615.38);
        glVertex2d(314, 615.38);
        glVertex2d(314, 585.67);
        glEnd();
        }

    void hM(){
        glBegin(GL_POLYGON);
        glColor3ub(255, 164, 156);
        glVertex2d(339.79, 397.16);
        glVertex2d(339.79, 615.38);
        glVertex2d(380.01, 615.38);
        glVertex2d(380.01, 397.16);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 174, 158);
        glVertex2d(384, 397.16);
        glVertex2d(384, 485.47);
        glVertex2d(455, 613);
        glVertex2d(455, 524.94);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 184, 160);
        glVertex2d(463, 524.94);
        glVertex2d(463, 613);
        glVertex2d(534, 485.47);
        glVertex2d(534, 397.16);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 184, 160);
        glVertex2d(538.63, 397.16);
        glVertex2d(538.63, 615.38);
        glVertex2d(579, 615.38);
        glVertex2d(579, 397.16);
        glEnd();
        }

    void hI(){
        glBegin(GL_POLYGON);
        glColor3ub(255, 184, 160);
        glVertex2d(588.63, 397.16);
        glVertex2d(588.63, 615.38);
        glVertex2d(627, 615.38);
        glVertex2d(627, 397.16);
        glEnd();
        }

    void backg(){
        glBegin(GL_POLYGON);
        glColor3ub(184, 132+color, 129+color);
        glVertex2d(0, 0);
        glVertex2d(0, 800);
        glVertex2d(800, 800);
        glVertex2d(800, 0);
        glEnd();
        }

    void backg2(){
        glBegin(GL_POLYGON);
        glColor3ub(71, 69, 72);
        glVertex2d(402, 121);
        glVertex2d(402, 390.91);
        glVertex2d(682, 390.91);
        glVertex2d(682, 121);
        glEnd();
        }

    void backg3(){
        glBegin(GL_POLYGON);
        glColor3ub(71, 69, 72);
        glVertex2d(100, 397.21);
        glVertex2d(100, 678);
        glVertex2d(380, 678);
        glVertex2d(380, 397.21);
        glEnd();
        }

    void garis(){
        for(int i=0;i<800;i=i+20){
        glBegin(GL_POLYGON);
        glColor3ub(184, 132, 129);
        glVertex2f(0,0+i);
        glVertex2f(800,0+i);
        glVertex2f(800,3+i);
        glVertex2f(0,3+i);
        glEnd();}
        }

    void play(){
        glBegin(GL_POLYGON);
        glColor3ub(251,149+color,139);
        glVertex2d(94.85, 113.65);
        glVertex2d(176.92, 67.55);
        glVertex2d(94.85, 21.44);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(247+color,165,131);
        glVertex2d(68.69, 105.65);
        glVertex2d(142.69, 73.45);
        glVertex2d(69.34, 28.38);
        glEnd();
    }

    void xx(){
        glBegin(GL_POLYGON);
        glColor3ub(255, 195, 163);
        glVertex2d(677.48, 682.83);
        glVertex2d(728.4, 745.41);
        glVertex2d(741.12, 735.06);
        glVertex2d(690.2, 672.48);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 195, 163);
        glVertex2d(673.22, 724.51);
        glVertex2d(684.69, 738.61);
        glVertex2d(741.61, 692.3);
        glVertex2d(730.14, 678.2);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(71, 69, 72);
        glVertex2d(702.56, 725.56);
        glVertex2d(711.82, 736.95);
        glVertex2d(757, 700.19);
        glVertex2d(747.74, 688.8);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(71, 69, 72);
        glVertex2d(705.69, 692.17);
        glVertex2d(746.8, 742.69);
        glVertex2d(756.9, 734.48);
        glVertex2d(715.79, 683.95);
        glEnd();
    }


int main(void) {
        //Window
        GLFWwindow* window;
        glfwSetErrorCallback(error_callback);

        if (!glfwInit())exit(EXIT_FAILURE);
        window = glfwCreateWindow(800, 800, "Hi I'm G64170016 - Mouse Klik Gan", NULL, NULL);

        if (!window){
            glfwTerminate();
            exit(EXIT_FAILURE);
            }

        glfwMakeContextCurrent(window);
        glfwSwapInterval(1);
        glfwSetKeyCallback(window, key_callback);

        while (!glfwWindowShouldClose(window)){
            stop= glfwGetTime();
            setup_viewport(window);
            display();
            glfwSetMouseButtonCallback(window, mouse_button_callback);


        //manggil fungsi huruf
        backg();

        glPushMatrix();
        glTranslated(0,y,0);
            backg2();
        glPopMatrix();

        glPushMatrix();
        glTranslated(0,-y,0);
            backg3();
        glPopMatrix();

        double tNow = glfwGetTime();

        while(tNow/0.01 > ticks){
            ticks++;
            tNow = glfwGetTime();
            if(gerak<=278.95){
                y++;
                gerak++;
            }
            else if(gerak>=278.95){
                y--;
                gerak++;
                if(gerak==557.9){
                    gerak=0;
                    }
                }
            }

        if((float)glfwGetTime()>15.00);{
            glPushMatrix();
        	//glScalef((float)glfwGetTime()*0.1,(float)glfwGetTime()*0.1,0);
        	glTranslated(384,384,0);
        	if (stop <= 10) glScalef(stop*0.1,stop*0.1,0);
        	//glRotated((float)glfwGetTime()*10-10,0,0,0);
        	glTranslated(-384,-384,0);
                hN();
                hA();
                hJ();
                hE();
                hM();
                hI();
            glPopMatrix();
        }

            garis();

        glRotatef((float) glfwGetTime()*150.f,0.f,0.f,1.f);
        glTranslatef(1.3, 1.3, 0);
            play();

        glRotatef((float) glfwGetTime()*-150.f,0.f,0.f,1.f);
        glTranslatef(1.3, 1.3, 0);
            xx();
            kedip();

        //fungsi untuk menampilkan objek
        glfwSwapBuffers(window);
        glfwPollEvents();
            }
    //Fungsi Exit
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
 }
