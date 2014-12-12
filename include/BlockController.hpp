/*********************************************************************
Matt Marchant 2014
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

//controls spawning of solid / block items in world

#ifndef BLOCK_CONTROLLER_H_
#define BLOCK_CONTROLLER_H_

#include <Observer.hpp>
#include <CommandStack.hpp>

#include <SFML/System/NonCopyable.hpp>
#include <SFML/System/Vector2.hpp>

#include <functional>

class BlockController final : public Observer, private sf::NonCopyable
{
public:
    explicit BlockController(CommandStack& cs);
    ~BlockController() = default;

    void onNotify(Subject& s, const game::Event& e) override;

    void setSpawnFunction(std::function<void(const sf::Vector2f&)>& func);

private:
    CommandStack& m_commandStack;

    std::function<void(const sf::Vector2f&)> spawn;
};

#endif //BLOCK_CONTROLLER_H_