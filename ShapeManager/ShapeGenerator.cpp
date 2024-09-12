#include "Header.h"

const Line* const ShapeGenerator::GenerateLine() {
    double m_x, m_y;
    while (true) {
        Console::WriteLine("������ �� ������ ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        Console::Write("���� ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point left(m_x, m_y);

        Console::ClearBufferC();
        Console::Write("������ ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point right(m_x, m_y);

        if (left == right) {
            Console::WriteLine("�� ������ ���� �����ϴ�!");
            continue;
        } 

        Console::ClearBufferC();
        Console::WriteLine("������ ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Line(left, right);
    }   
}

const Circle* const ShapeGenerator::GenerateCircle() {
    double m_x, m_y;
    while (true) {
        Console::WriteLine("���� �߽� ��ǥ�� ���� ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        Console::Write("���� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point left(m_x, m_y);

        Console::ClearBufferC();
        Console::Write("������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point right(m_x, m_y);

        if (left == right) {
            Console::WriteLine("�� ������ ���� �����ϴ�!");
            continue;
        }

        Console::ClearBufferC();
        Console::WriteLine("������ ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Circle(left, right);
    }
}

const Triangle* const ShapeGenerator::GenerateTriangle() {
    double m_x, m_y;
    while (true) {
        Console::WriteLine("�ﰢ���� �� �������� ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        Console::Write("ù ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point first(m_x, m_y);

        Console::ClearBufferC();
        Console::Write("�� ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point second(m_x, m_y);

        Console::ClearBufferC();
        Console::Write("�� ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point third(m_x, m_y);

        if ((first == second) && (first == third) && (second == third)) {
            Console::WriteLine("�� �������� ��ǥ�� ���� �����ϴ�!");
            continue;
        }

        Console::ClearBufferC();
        Console::Write("�ﰢ���� ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Triangle(first, second, third);
    }
}

const Rectangle* const ShapeGenerator::GenerateRectangle() {
    double m_x, m_y;
    while (true) {
        Console::WriteLine("�簢���� �� �������� ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        Console::Write("ù ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point first(m_x, m_y);

        Console::ClearBufferC();
        Console::Write("�� ��° ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point second(m_x, m_y);

        Console::ClearBufferC();
        Console::Write("�� ��° ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point third(m_x, m_y);

        Console::ClearBufferC();
        Console::Write("�� ��° ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point fourth(m_x, m_y);

        if ((first == second) || (first == third) || (first == fourth) ||
            (second == third) || (second == fourth) || (third == fourth)) {
            Console::WriteLine("�� �������� ��ǥ�� ���� �����ϴ�!");
            continue;
        }

        Console::ClearBufferC();
        Console::WriteLine("�簢���� ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Rectangle(first, second, third, fourth);
    }
}
