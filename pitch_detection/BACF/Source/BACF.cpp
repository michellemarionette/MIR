#include "BACF.h"


BACF::BACF() {}
BACF::~BACF() {}

void BACF::prepareToPlay(int sampleRate, int windowSize)
{
    m_sampleRate = sampleRate;
    m_windowSize = windowSize;
}

void BACF::processBlock(juce::AudioBuffer<float>& buffer)
{
    
}
