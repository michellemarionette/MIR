#pragma once
#include <JuceHeader.h>


struct ZeroCross
{
    bool operator()(float signal)
    {
        if (signal < -0.1f)
        {
            y = 0;
        }

        else if (signal > 0.0f)
        {
            y = 1;
        }
        
        return y;
    }

    bool y = 0;
};



struct bitstream
{
    std::vector<std::uint32_t> bits;   
};


class BACF
{
public:
    BACF();
    ~BACF();

    void prepareToPlay(int sampleRate, int windowSize);
    void processBlock(juce::AudioBuffer<float>& buffer);

private:
    int m_sampleRate = 48000;
    int m_windowSize = 512;
    float m_currentFrequency = -1;
};
