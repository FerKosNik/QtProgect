#ifndef OGLPYRAMID_H
#define OGLPYRAMID_H
#include <QMouseEvent>
//#include <QMouseEventTransition>
#include <QOpenGLWidget>
//#include <QOpenGLFunctions>

class OGLPyramid : public QOpenGLWidget
{
private:
    GLuint  m_nPyramid;
    GLfloat m_xRotate;
    GLfloat m_yRotate;
    QPoint  m_ptPosition;

protected:
    virtual void initializeGL   (                       );
    virtual void resizeGL       (int nWidth, int nHeight);
    virtual void paintGL        (                       );
    virtual void mousePressEvent(QMouseEvent* pe        );
    virtual void mouseMoveEvent (QMouseEvent* pe        );
            GLuint createPyramid (GLfloat fSize = 1.0f  );

public:
    OGLPyramid(QWidget *parent = nullptr);

};
#endif // OGLPYRAMID_H
