/*
 * AudioEffectsGain
 * 
 * Created: Patrick Radius, December 2016
 * Purpose: Multiply two channels of audio data. Can be used for example as 'vca' or amplitude modulation.
 * Assumes floating-point data.
 *          
 * This processes a single stream fo audio data (ie, it is mono)       
 *          
 * MIT License.  use at your own risk.
*/

#include <arm_math.h>
#include <AudioStream_F32.h>

class AudioMultiply_F32 : public AudioStream_F32
{
  public:
    AudioMultiply_F32(void) : AudioStream_F32(2, inputQueueArray_f32) {};
    void update(void);
    
  private:
    audio_block_f32_t *inputQueueArray_f32[2];
};
