--
-- Created by IntelliJ IDEA.
-- User: gustavo
-- Date: 05/06/18
-- Time: 11:25
-- To change this template use File | Settings | File Templates.
--

Core = {
    version = 1.0;

    players = {};

    onInit = function()
        players[#players + 1] = createPlayer()
    end;

    onUpdate = function(i)
        print("heia: " .. i);
        return i >= 1000 and -1 or 0;
    end;


}

