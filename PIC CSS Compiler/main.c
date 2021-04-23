#include <main.h>
#use standard_io(a)


void main()
{
   set_tris_a(0b00000001);
   setup_adc_ports(sAN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   set_adc_channel(0);
   setup_timer_2(T2_DIV_BY_16,255,1);
   setup_ccp3(ccp_pwm);
   while(TRUE)
   {
     set_pwm3_duty(read_adc());
     delay_ms(20);
   }
}
