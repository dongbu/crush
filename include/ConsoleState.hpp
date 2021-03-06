/*********************************************************************
Matt Marchant 2014 - 2015
http://trederia.blogspot.com

Crush - Zlib license.

This software is provided 'as-is', without any express or
implied warranty. In no event will the authors be held
liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute
it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented;
you must not claim that you wrote the original software.
If you use this software in a product, an acknowledgment
in the product documentation would be appreciated but
is not required.

2. Altered source versions must be plainly marked as such,
and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any
source distribution.
*********************************************************************/

#ifndef CONSOLE_STATE_H_
#define CONSOLE_STATE_H_

#include <State.hpp>

class Console;
class ConsoleState final : public State
{
public:
    ConsoleState(StateStack& stack, Context context);
    ~ConsoleState();

    bool update(float dt) override;
    void draw() override;
    bool handleEvent(const sf::Event& evt) override;

private:

    Console& m_console;
};

#endif //PAUSE_STATE_H_