#include "sogui.h"

using namespace SGui;

View::View(const glm::vec2& size)
    : fSize(size), fPosition(0.0f, 0.0f)
{

}

void View::Draw()
{
    sr::srDrawRectangle(fPosition, fSize, fSize / 2.0f, 2.0f, sr::COLOR_BLACK);
}

void View::OnDraw()
{
    
}