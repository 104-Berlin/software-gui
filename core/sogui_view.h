#pragma once

namespace SGui {
    
    /**
     * @brief Base class of all ui components
     * Handles size and sizing policies and positioning as well
     */
    class GUI_API View
    {
    private:
        glm::vec2 fSize;
        glm::vec2 fPosition;
    public:
        View(const glm::vec2& = glm::vec2(0.0f, 0.0f));
        virtual ~View() = default;
        View(const View&) = default;
        View& operator=(const View&) = default;

        void Draw();
        virtual void OnDraw();
    };
}