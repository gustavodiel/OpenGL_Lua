--
-- Created by IntelliJ IDEA.
-- User: gustavo
-- Date: 03/06/18
-- Time: 18:22
-- To change this template use File | Settings | File Templates.
--

player = {
    name = "Gustavo",
    position = {
        x = 32.5, y = 20.0
    },
    filename = "sprite.png",
    HP = 300,
    items = {"Fists", "Knife", "Waka Waka"},
    onUpdate = function()
        print("EIta")
    end,
    getName = function()
        return "Teste"
    end
}

doPrint("Heia")