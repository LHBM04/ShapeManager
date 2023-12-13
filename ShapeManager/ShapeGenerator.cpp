#include "Header.h"

const Line* const ShapeGenerator::GenerateLine() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("직선의 양 끝점의 좌표를 차례대로 찍어주세요. (예시: 0, 0)");

        DrawUtility::Write("왼쪽 끝점의 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point left(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("오른쪽 끝점의 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point right(m_x, m_y);

        if (left == right) {
            DrawUtility::WriteLine("양 끝점이 서로 같습니다!");
            continue;
        } 

        DrawUtility::ClearBufferC();
        DrawUtility::WriteLine("직선을 성공적으로 생성했습니다! 아무 키나 눌러주세요...");
        std::cin.get();

        return new Line(left, right);
    }   
}

const Circle* const ShapeGenerator::GenerateCircle() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("원의 중심 좌표와 끝점 좌표를 차례대로 찍어주세요. (예시: 0, 0)");

        DrawUtility::Write("원의 중심 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point left(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("끝점의 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point right(m_x, m_y);

        if (left == right) {
            DrawUtility::WriteLine("양 끝점이 서로 같습니다!");
            continue;
        }

        DrawUtility::ClearBufferC();
        DrawUtility::WriteLine("직선을 성공적으로 생성했습니다! 아무 키나 눌러주세요...");
        std::cin.get();

        return new Circle(left, right);
    }
}

const Triangle* const ShapeGenerator::GenerateTriangle() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("삼각형의 세 꼭짓점의 좌표를 차례대로 찍어주세요. (예시: 0, 0)");

        DrawUtility::Write("첫 번째 꼭짓점의 중심 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point first(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("두 번째 꼭짓점의 중심 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point second(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("세 번째 꼭짓점의 중심 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point third(m_x, m_y);

        if ((first == second) && (first == third) && (second == third)) {
            DrawUtility::WriteLine("세 꼭짓점의 좌표가 서로 같습니다!");
            continue;
        }

        DrawUtility::ClearBufferC();
        DrawUtility::Write("삼각형을 성공적으로 생성했습니다! 아무 키나 눌러주세요...");
        std::cin.get();

        return new Triangle(first, second, third);
    }
}

const Rectangle* const ShapeGenerator::GenerateRectangle() {
    double m_x, m_y;
    while (true) {
        DrawUtility::WriteLine("사각형의 네 꼭짓점의 좌표를 차례대로 찍어주세요. (예시: 0, 0)");

        DrawUtility::Write("첫 번째 꼭짓점의 중심 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point first(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("두 번째 끝점의 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point second(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("세 번째 끝점의 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point third(m_x, m_y);

        DrawUtility::ClearBufferC();
        DrawUtility::Write("네 번째 끝점의 좌표: ");
        scanf("%lf, %lf", &m_x, &m_y);
        Point fourth(m_x, m_y);

        if ((first == second) || (first == third) || (first == fourth) ||
            (second == third) || (second == fourth) || (third == fourth)) {
            DrawUtility::WriteLine("네 꼭짓점의 좌표가 서로 같습니다!");
            continue;
        }

        DrawUtility::ClearBufferC();
        DrawUtility::WriteLine("사각형을 성공적으로 생성했습니다! 아무 키나 눌러주세요...");
        std::cin.get();

        return new Rectangle(first, second, third, fourth);
    }
}
