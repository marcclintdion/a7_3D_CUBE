            shaderNumber = 50;//plastic/rubber/                                                                               
            setupTransforms_MainColor();                                                                                      
    glBindBuffer(GL_ARRAY_BUFFER, sphere_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, sphere_POSITION[0], sphere_POSITION[1], sphere_POSITION[2]);                          
    Rotate(modelView, sphere_ROTATE[0], sphere_ROTATE[1], sphere_ROTATE[2], sphere_ROTATE[3]); 

//======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, sphere_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, sphere_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 2880, GL_UNSIGNED_INT, 0);                                                                                                     

