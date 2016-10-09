//
//  CoreFramework.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "FrameworkInterface.hpp"
#include "DEFINITIONS.hpp"

#ifdef SGE__SDL
    #include "SGE_SDL.hpp"
#elif defined(SGE__SFML)
    #include "SGE_SFML.hpp"
#elif defined(SGE__GLFW)
    #include "SGE_GLFW.hpp"
#endif

namespace SonarGameEngine
{
    class CoreFramework: public FrameworkInterface
    {
    public:
        CoreFramework( );
        
        void Init( ) override;
        
        void PollEvents( ) override;
        
        void SwapBuffers( ) override;
        
        void CleanUp( ) override;
        
        bool WindowIsOpen( ) const override;
        
        void CloseWindow( ) override;
        
    private:
#ifdef SGE__SDL
        SGE_SDL frameworkObject;
#elif defined(SGE__SFML)
        SGE_SFML frameworkObject;
#elif defined(SGE__GLFW)
        SGE_GLFW frameworkObject;
#endif        
    };
}
