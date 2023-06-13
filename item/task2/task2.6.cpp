#include <iostream>

using namespace std;

class Cube
{
    int m_L;
    int m_W;
    int m_H;

    public:
        // 设置长
        void setLength(int len)
        {
            m_L = len;
        }
        // 获取长
        int getLength()
        {
            return m_L;
        }

        // 设置宽
        void setWidth(int wid)
        {
            m_W = wid;
        }
        // 获取宽
        int getWidth()
        {
            return m_W;
        }

        // 设置高
        void setHeight(int height)
        {
            m_H = height;
        }
        // 获取高
        int getHeight()
        {
            return m_H;
        }

        // 计算面积
        int getArea()
        {
            return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
        }

        // 计算体积
        int getVec()
        {
            return m_H * m_L * m_W;
        }
};

int main()
{
    Cube c1;
    c1.setHeight(4);
    c1.setLength(5);
    c1.setWidth(6);

    cout << c1.getArea() << ' ' << c1.getVec() << endl;

    return 0;
}