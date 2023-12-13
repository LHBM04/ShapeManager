#include "Header.h"

const Line* const ShapeGenerator::GenerateLine() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("������ �� ������ ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        DrawUtility::Write("���� ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point left(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("������ ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point right(m_x, m_y);

        if (left == right) {
            DrawUtility::WriteLine("�� ������ ���� �����ϴ�!");
            continue;
        } 

        DrawUtility::ClearBufferC();
        DrawUtility::WriteLine("������ ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Line(left, right);
    }   
}

const Circle* const ShapeGenerator::GenerateCircle() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("���� �߽� ��ǥ�� ���� ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        DrawUtility::Write("���� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point left(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point right(m_x, m_y);

        if (left == right) {
            DrawUtility::WriteLine("�� ������ ���� �����ϴ�!");
            continue;
        }

        DrawUtility::ClearBufferC();
        DrawUtility::WriteLine("������ ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Circle(left, right);
    }
}

const Triangle* const ShapeGenerator::GenerateTriangle() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("�ﰢ���� �� �������� ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        DrawUtility::Write("ù ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point first(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("�� ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point second(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("�� ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point third(m_x, m_y);

        if ((first == second) && (first == third) && (second == third)) {
            DrawUtility::WriteLine("�� �������� ��ǥ�� ���� �����ϴ�!");
            continue;
        }

        DrawUtility::ClearBufferC();
        DrawUtility::Write("�ﰢ���� ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Triangle(first, second, third);
    }
}

const Rectangle* const ShapeGenerator::GenerateRectangle() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("�簢���� �� �������� ��ǥ�� ���ʴ�� ����ּ���. (����: 0, 0)");

        DrawUtility::Write("ù ��° �������� �߽� ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point first(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("�� ��° ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point second(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("�� ��° ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point third(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("�� ��° ������ ��ǥ: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point fourth(m_x, m_y);

        if ((first == second) || (first == third) || (first == fourth) ||
            (second == third) || (second == fourth) || (third == fourth)) {
            DrawUtility::WriteLine("�� �������� ��ǥ�� ���� �����ϴ�!");
            continue;
        }

        DrawUtility::ClearBufferC();
        DrawUtility::WriteLine("�簢���� ���������� �����߽��ϴ�! �ƹ� Ű�� �����ּ���...");
        std::cin.get();

        return new Rectangle(first, second, third, fourth);
    }
}
