
#ifndef __APP_VERSION__
#define __APP_VERSION__

/*  hardware board version */
#define HW_VERSION "3.0"

/*  nordic sdk version */
#define SDK_VERSION "1.4.0"

#define  IOTEX_APP_NAME  "Riverrock"

<<<<<<< HEAD
#define  RELEASE_VERSION    "1.0.10"
=======
#define  RELEASE_VERSION    "1.0.9"
>>>>>>> 541d5f91 (fix bme680 i2c write 2 registers bug)

/*  application version */
#define IOTEX_APP_VERSION IOTEX_APP_NAME" "RELEASE_VERSION

#define APP_VERSION_INFO HW_VERSION"_"SDK_VERSION"_"IOTEX_APP_VERSION">"

/*  upload period, second */
#define SENSOR_UPLOAD_PERIOD       300  

#endif /*  #ifndef __APP_VERSION__ */
