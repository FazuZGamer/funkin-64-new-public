function onCreate()
	makeLuaSprite('bg', 'kirby bg', 0, -2000);
	addLuaSprite('bg', false);
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end