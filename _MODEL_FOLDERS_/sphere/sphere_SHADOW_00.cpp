       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, sphere_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, sphere_POSITION[0] * scaleMoveShadows[0],         
                                              sphere_POSITION[1] * scaleMoveShadows[1],         
                                              sphere_POSITION[2] * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    sphere_ROTATE[0],                                 
                                              sphere_ROTATE[1],                                 
                                              sphere_ROTATE[2],                                 
                                              sphere_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 2880, GL_UNSIGNED_INT, 0);                                              
