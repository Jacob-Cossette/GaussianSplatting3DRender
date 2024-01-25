#version 330 core
out vec4 FragColor;
in vec2 TexCoords;

uniform sampler2D texture1;
uniform float blurAmount;

void main() { 
    float sigma = blurAmount;
    float sum = 0.0;
    vec4 blurColor = vec4(0.0);
    for (int x = -3; x <= 3; x++) {
        for (int y = -3; y <= 3; y++) {
            float weight = exp(-(x*x + y*y) / (2*sigma*sigma)) / (2 * 3.14 * sigma * sigma);
            vec2 offset = vec2(x, y) * 0.01;
            blurColor += texture(texture1, TexCoords + offset) * weight;
            sum += weight;
        }
    }
    FragColor = blurColor / sum;
}
