#include "all_headers.h"

bool loadMediaTitle()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/TitlePage.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    return success;
}

bool loadMediaSorry()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/Sorry.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    return success;
}

bool loadMediaMenu()
{
    bool success = true;

    // // Load music
    gMusicMenu = Mix_LoadMUS("Music/Lily'sThemeMenu.wav");
    if (gMusicMenu == NULL)
    {
        printf("Failed to load beat music! SDL_mixer Error: %s\n", Mix_GetError());
        success = false;
    }
    else if (!gBGTexture.loadFromFile("Assets/MenuPage.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    else
    {
        Menu_Buttons[0].setPosition(441, 170);
        Menu_Buttons[1].setPosition(441, 282);
        Menu_Buttons[2].setPosition(441, 401);
        Menu_Buttons[3].setPosition(562, 656);
        Menu_Buttons[4].setPosition(698, 656);
        // Menu_Buttons[5].setPosition(753, 656);
        // Menu_Buttons[6].setPosition(890, 656);
        Menu_Buttons[7].setPosition(1243, 31);
    }
    gSoundMouseClick = Mix_LoadWAV("Music/Mouse.wav");
    if (gSoundMouseClick == NULL)
    {
        printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
        // success = false;
    }
    return success;
}

bool loadMediaScoreboard()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/Scoreboard.png"))
    {
        printf("Failed to load floating scoreboard texture!\n");
        success = false;
    }
    gFont = TTF_OpenFont("MyFont3.ttf", 40);
    if (gFont == NULL)
    {
        printf("Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError());
        success = false;
    }
    gMusicScoreboard = Mix_LoadMUS("Music/Lily'sThemeScoreBoard.wav");
    if (gMusicScoreboard == NULL)
    {
        printf("Failed to load scoreboard music! SDL_mixer Error: %s\n", Mix_GetError());
        success = false;
    }
    return success;
}

bool loadMediaSelectLevel()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/Select_Level.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    else
    {
        SelectLevel_Buttons[0].setPosition(483, 296);
        SelectLevel_Buttons[1].setPosition(483, 461);
    }
    gSoundMouseClick = Mix_LoadWAV("Music/Mouse.wav");
    if (gSoundMouseClick == NULL)
    {
        printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
        // success = false;
    }
    return success;
}

bool loadMediaLEVEL_ONE_LOADING()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/Level_1_loading.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    return success;
}

bool loadMediaLEVEL_ONE_GAME_OVER()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/Level_1_gameover.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    return success;
}

bool loadMediaLEVEL_TWO_LOADING()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/Level_2_loading.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    return success;
}

bool loadMediaLEVEL_TWO_GAME_OVER()
{
    bool success = true;

    if (!gBGTexture.loadFromFile("Assets/Level_2_gameover.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }
    return success;
}

bool loadMediaLevel_One()
{
    // Loading success flag
    bool success = true;

    gSymbolLifeTexture.loadFromFile("Assets/SymbolLife.png");
    gSymbolScoreTexture.loadFromFile("Assets/SymbolScore.png");

    gFont = TTF_OpenFont("MyFont3.ttf", 25);
    if (gFont == NULL)
    {
        printf("Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError());
        success = false;
    }
    else
    {
        // Set text color as black
        SDL_Color textColor = {255, 255, 255, 255};

        // Load prompt texture
        if (!gScore.loadFromRenderedText("Score", textColor))
        {
            printf("Unable to render score texture!\n");
            success = false;
        }
        if (!gLife.loadFromRenderedText("Life", textColor))
        {
            printf("Unable to render life texture!\n");
            success = false;
        }
        gSoundTrash = Mix_LoadWAV("Music/CollectTrash.wav");
        if (gSoundTrash == NULL)
        {
            printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
            // success = false;
        }
        gSoundShooting = Mix_LoadWAV("Music/shooting_Trim.wav");
        if (gSoundTrash == NULL)
        {
            printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
            // success = false;
        }
        gSoundLife = Mix_LoadWAV("Music/Life_collection_Trim.wav");
        if (gSoundTrash == NULL)
        {
            printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
            // success = false;
        }
        gSoundHit = Mix_LoadWAV("Music/Hit.wav");
        if (gSoundTrash == NULL)
        {
            printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
            // success = false;
        }
    }

    // Load sprite texture
    if (!gSpriteTexture.loadFromFile("Assets/sprite.png"))
    {
        printf("Failed to load sprite texture!\n");
        success = false;
    }
    // // Load music
    gMusicLevelOne = Mix_LoadMUS("Music/LevelOneMusicTrimmed.wav");
    if (gMusicLevelOne == NULL)
    {
        printf("Failed to load beat music! SDL_mixer Error: %s\n", Mix_GetError());
        // success = false;
    }

    else
    {
        // Set Sprite clips
        gspriteClip[0].x = 0;
        gspriteClip[0].y = 0;
        gspriteClip[0].w = 641;
        gspriteClip[0].h = 542;

        gspriteClip[1].x = 641;
        gspriteClip[1].y = 0;
        gspriteClip[1].w = 641;
        gspriteClip[1].h = 542;

        gspriteClip[2].x = 1282;
        gspriteClip[2].y = 0;
        gspriteClip[2].w = 641;
        gspriteClip[2].h = 542;

        gspriteClip[3].x = 1923;
        gspriteClip[3].y = 0;
        gspriteClip[3].w = 641;
        gspriteClip[3].h = 542;

        gspriteClip[4].x = 2564;
        gspriteClip[4].y = 0;
        gspriteClip[4].w = 641;
        gspriteClip[4].h = 542;

        gspriteClip[5].x = 3205;
        gspriteClip[5].y = 0;
        gspriteClip[5].w = 641;
        gspriteClip[5].h = 542;

        gspriteClip[6].x = 3846;
        gspriteClip[6].y = 0;
        gspriteClip[6].w = 641;
        gspriteClip[6].h = 542;

        gspriteClip[7].x = 4487;
        gspriteClip[7].y = 0;
        gspriteClip[7].w = 641;
        gspriteClip[7].h = 542;
    }

    // load Collider_LevelOnes
    if (!gLevelOne_FloatingPlatformTexture.loadFromFile("Assets/LevelOne_FloatingPlatform.png"))
    {
        printf("Failed to load floating platform texture!\n");
        success = false;
    }

    // load waste LevelOne_Battery
    if (!gLevelOne_BatteryTexture.loadFromFile("Assets/LevelOne_Battery.png"))
    {
        printf("Failed to load LevelOne_Battery texture!\n");
        success = false;
    }

    // Load background texture
    if (!gBGLevelOne.loadFromFile("Assets/LevelOneBG.png"))
    {
        printf("Failed to load background texture!\n");
        success = false;
    }

    if (!gRunning_platformTexture.loadFromFile("Assets/Running_Platform.png"))
    {
        printf("Failed to load running platform texture!\n");
        success = false;
    }

    if (!gLevelOne_Waste_BagTexture.loadFromFile("Assets/LevelOne_Waste_Bag.png"))
    {
        printf("Failed to load waste bag texture!\n");
        success = false;
    }

    if (!gLevelOne_CanTexture.loadFromFile("Assets/LevelOne_Can.png"))
    {
        printf("Failed to load LevelOne_Can texture!\n");
        success = false;
    }

    if (!gFlyingLevelOne_Birds_1Texture.loadFromFile("Assets/Flying_Brids_1.png"))
    {
        printf("Failed to load LevelOne_Birds_1 texture!\n");
        success = false;
    }

    if (!gLevelOne_BulletTexture.loadFromFile("Assets/LevelOne_Bullet.png"))
    {
        printf("Failed to load LevelOne_Bullet texture!\n");
        success = false;
    }

    if (!gLevelOne_Hunter_1Texture.loadFromFile("Assets/LevelOne_Hunter.png"))
    {
        printf("Failed to load LevelOne_Hunter_1 texture!\n");
        success = false;
    }
    if (!gLevelOne_LionTexture.loadFromFile("Assets/LevelOne_Lion.png"))
    {
        printf("Failed to load LevelOne_Hunter_ texture!\n");
        success = false;
    }
    if (!gLevelOne_LifeTexture.loadFromFile("Assets/LevelOne_Life.png"))
    {
        printf("Failed to load LevelOne_Hunter_ texture!\n");
        success = false;
    }
    if (!gLevelOne_TigerTexture.loadFromFile("Assets/LevelOne_Tiger.png"))
    {
        printf("Failed to load LevelOne_Hunter_ texture!\n");
        success = false;
    }
    if (!gLevelOne_Clouds1Texture.loadFromFile("Assets/LevelOne_Clouds1.png"))
    {
        printf("Failed to load LevelOne_Hunter_ texture!\n");
        success = false;
    }
    if (!gLevelOne_Clouds2Texture.loadFromFile("Assets/LevelOne_Clouds2.png"))
    {
        printf("Failed to load LevelOne_Hunter_ texture!\n");
        success = false;
    }
    if (!gLevelOne_Clouds3Texture.loadFromFile("Assets/LevelOne_Clouds3.png"))
    {
        printf("Failed to load LevelOne_Hunter_ texture!\n");
        success = false;
    }
    if (!gShootingSpriteTexture.loadFromFile("Assets/shooting_sprite.png"))
    {
        printf("Failed to load shooting_ texture!\n");
        success = false;
    }
    if (!gLevelOne_Barrier_1Texture.loadFromFile("Assets/LevelOneBarrier_1.png"))
    {
        printf("Failed to load shooting_ texture!\n");
        success = false;
    }
    if (!gLevelOne_Barrier_2Texture.loadFromFile("Assets/LevelOneBarrier_2.png"))
    {
        printf("Failed to load shooting_ texture!\n");
        success = false;
    }
    return success;
}

bool loadMediaLocked()
{
    // Loading success flag
    bool success = false;
    if (gBGTexture.loadFromFile("Assets/Locked.png"))
        success = true;
    // Open the font
    return success;
}

bool loadMediaUnlocked()
{
    // Loading success flag
    bool success = false;
    if (gBGTexture.loadFromFile("Assets/Unlocked.png"))
        success = true;
    // Open the font
    return success;
}

bool loadMediaLevel_Two()
{
    // Loading success flag
    bool success = true;
    gSymbolLifeTexture.loadFromFile("Assets/SymbolLife.png");
    gSymbolScoreTexture.loadFromFile("Assets/SymbolScore.png");
    

    gFont = TTF_OpenFont("MyFont3.ttf", 25);
    if (gFont == NULL)
    {
        printf("Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError());
        success = false;
    }
    else
    {
        // Set text color as black
        SDL_Color textColor = {255, 255, 255, 255};

        // Load prompt texture
        if (!gScore.loadFromRenderedText("Score", textColor))
        {
            printf("Unable to render score texture!\n");
            success = false;
        }
        if (!gLife.loadFromRenderedText("Life", textColor))
        {
            printf("Unable to render life texture!\n");
            success = false;
        }
        // Load background texture
        if (!gBGLevelTwo.loadFromFile("Assets/LevelTwoBG.png"))
        {
            printf("Failed to load background texture!\n");
            success = false;
        }
        // load the car
        if (!gCarTexture.loadFromFile("Assets/Car.png"))
        {
            printf("Failed to load LevelOne_Battery texture!\n");
            success = false;
        }
        // load waste LevelOne_Battery
        if (!gLevelOne_BatteryTexture.loadFromFile("Assets/LevelOne_Battery.png"))
        {
            printf("Failed to load LevelOne_Battery texture!\n");
            success = false;
        }
        if (!gLevelOne_Waste_BagTexture.loadFromFile("Assets/LevelOne_Waste_Bag.png"))
        {
            printf("Failed to load waste bag texture!\n");
            success = false;
        }
        if (!gLevelOne_CanTexture.loadFromFile("Assets/LevelOne_Can.png"))
        {
            printf("Failed to load can texture!\n");
            success = false;
        }
        if (!gLevelTwo_TrafficTexture.loadFromFile("Assets/LevelTwo_Traffic.png"))
        {
            printf("Failed to load traffice cone texture!\n");
            success = false;
        }
        if (!gLevelTwo_EnemyCarTexture.loadFromFile("Assets/LevelTwo_EnemyCar.png"))
        {
            printf("Failed to load enemy car texture!\n");
            success = false;
        }
        if (!gLevelTwo_PebbleTexture.loadFromFile("Assets/LevelTwo_Pebble.png"))
        {
            printf("Failed to load pebble texture!\n");
            success = false;
        }
        if (!gLevelTwo_FuelTexture.loadFromFile("Assets/LevelTwo_Fuel.png"))
        {
            printf("Failed to load fuel texture!\n");
            success = false;
        }
    }
    // Load music
    gMusicLevelTwo = Mix_LoadMUS("Music/LevelTwoMusicTrimmed.wav");
    if (gMusicLevelTwo == NULL)
    {
        printf("Failed to load beat music! SDL_mixer Error: %s\n", Mix_GetError());
        // success = false;
    }
    gSoundTrash = Mix_LoadWAV("Music/CollectTrash.wav");
    if (gSoundTrash == NULL)
    {
        printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
        // success = false;
    }
    gSoundLife = Mix_LoadWAV("Music/Life_collection_Trim.wav");
    if (gSoundLife == NULL)
    {
        printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
        // success = false;
    }
    gSoundHit = Mix_LoadWAV("Music/Hit.wav");
    if (gSoundHit == NULL)
    {
        printf("Failed to load scratch sound effect! SDL_mixer Error: %s\n", Mix_GetError());
        // success = false;
    }
    return success;
}

bool loadMediaNameInput()
{
    // Loading success flag
    bool success = true;
    gBGTexture.loadFromFile("Assets/Enter_Name.png");
    // Open the font
    gFont = TTF_OpenFont("MyFont3.ttf", 60);
    if (gFont == NULL)
    {
        printf("Failed to load lazy font! SDL_ttf Error: %s\n", TTF_GetError());
        success = false;
    }
    else
    {
        // Render the prompt
        SDL_Color textColor = {255, 255, 255, 255};
        if (!gNameTexture.loadFromRenderedText("Enter Your Nickname! :", textColor))
        {
            printf("Failed to render prompt text!\n");
            success = false;
        }
    }
    return success;
}

bool loadMediaHelp()
{
    // Loading success flag
    bool success = false;
    if (gBGTexture.loadFromFile("Assets/HelpPage.png"))
        success = true;
    // Open the font
    return success;
}