#ifndef SQUARE_H
#define SQUARE_H

#include <QOpenGLShaderProgram>
#include <vector>

class Square
{
public:
    Square( QOpenGLShaderProgram *program,
            int vertexAttr,
            int colorAttr );
    ~Square();

    enum Direction { Left, Up, Right, Down };

    Direction direction() const;
    void setDirection( Direction dir );

    void draw();

    void setX0( float x );
    void setY0( float y );

    float x0() const;
    float y0() const;

private:
    void initVertices();
    void initColors();

    std::vector<float> m_vertices;
    std::vector<float> m_colors;

    QOpenGLShaderProgram *m_program;
    int m_vertexAttr;
    int m_colorAttr;

    float m_x0;
    float m_y0;
    const float m_size;

    Direction m_direction;
};

#endif // SQUARE_H
