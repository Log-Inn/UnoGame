#include "state_interface.hpp"
#include "program.hpp"
void StateInterface::draw(const sf::Drawable &drawable, const sf::RenderStates &states)
{
    m_program_ptr->getWindow()->draw(drawable, states);
}
