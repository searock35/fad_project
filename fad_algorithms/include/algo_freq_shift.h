/**
 * algo_template.h
 * Author: Corey Bean,
 * Organization: Messiah Collaboratory
 * Date: 10/12/2020
 *
 * Description:
 * This file returns the input signal at a different pitch, shifted by some target amount.
 */



#include <stdint.h>
#include <math.h>




/**
 * @brief Frequency shifter...
 * @param in_buff
 * @param 
 * @param   
 */
void algo_freq_shift(uint16_t *in_buff, uint8_t *out_buff, uint16_t in_pos, uint16_t out_pos, int multisamples);



/** 
 */
void algo_freq_init(fad_algo_init_params_t *params);









