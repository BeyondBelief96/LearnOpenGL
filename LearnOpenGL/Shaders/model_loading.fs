#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D texture_diffuse1;
uniform sampler2D texture_specular1;

void main()
{   
    vec4 fragColor = texture(texture_diffuse1, TexCoords);
    fragColor = fragColor + texture(texture_specular1, TexCoords);
    FragColor = fragColor;
}

