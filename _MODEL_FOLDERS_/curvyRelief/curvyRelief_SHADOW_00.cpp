       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, curvyRelief_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, curvyRelief_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, curvyRelief_POSITION[0] * scaleMoveShadows[0],         
                                              curvyRelief_POSITION[1] * scaleMoveShadows[1],         
                                              curvyRelief_POSITION[2] * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    curvyRelief_ROTATE[0],                                 
                                              curvyRelief_ROTATE[1],                                 
                                              curvyRelief_ROTATE[2],                                 
                                              curvyRelief_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 1296, GL_UNSIGNED_INT, 0);                                              
