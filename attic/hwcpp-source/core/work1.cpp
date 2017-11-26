template< typename Timing >
class i2c_100kHz( Timing timing_ ) final {
   const auto timing    = timing_from( timing_ );
   
   // from the "I2C-bus specification and user manual, 
   // 4 April 2014", UM10204.pdf, Table 10
   
   const auto t_hd_sta  = timing.ns( 4000 );
   const auto t_low     = timing.ns( 4700 );     
   const auto t_high    = timing.ns( 4000 );
   const auto t_su_sta  = timing.ns( 4700 );     
   const auto t_hd_dat  = timing.ns(    0 );  
   const auto t_su_sto  = timing.ns( 4000 );
   const auto t_buf     = timing.ns( 4700 );     
};

template< typename Timing >
constexpr auto i2c_100kHz( const Timing & timing_ ){
    const auto timing = timing_from( timing_ );
    return i2c_100kHz_implementation( timing );
}


auto sensor_temperature = 

// LM35 should know the reference voltage? Or should ad?

template< typename Pin >
void temperature_print( const char * text, Pin & pin_ ){
   auto ad_pin = pin_ad_from( pin_ );
   auto sensor = lm35( ad_pin, volt( 3.3 ) );
   std::cout << "temperature at " << location << " is " << sensor.read() << "\n";
}

temperature_print( target::ad0 );
temperature_print( target::ad1 );

temperature_print( object( target::ad0 ));
temperature_print( object( target::ad1 ));

void temperature_object_print( pin_ad & pin ){
   temperature_print( pin );
}

temperature_object_print( target::ad0 );
temperature_object_print( target::ad1 );
