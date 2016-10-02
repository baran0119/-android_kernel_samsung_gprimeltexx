#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     30
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
  {25950, 900},
  {26173, 850},
  {26450, 800},
  {26720, 750},
  {27103, 700},
  {27569, 650},
  {28152, 600},
  {28623, 550},
  {29235, 500},
  {29968, 450},
  {30817, 400},
  {31748, 350},
  {32732, 300},
  {33807, 250},
  {34888, 200},
  {35980, 150},
  {37043, 100},
  {37980, 50},
  {38910, 0},
  {39680, -50},
  {40400, -100},
  {41067, -150},
  {41479, -200},
};


#define TEMP_HIGHLIMIT_THRESHOLD_EVENT		800
#define TEMP_HIGHLIMIT_RECOVERY_EVENT		750
#define TEMP_HIGHLIMIT_THRESHOLD_NORMAL		800
#define TEMP_HIGHLIMIT_RECOVERY_NORMAL		750
#define TEMP_HIGHLIMIT_THRESHOLD_LPM		800
#define TEMP_HIGHLIMIT_RECOVERY_LPM		750

#define TEMP_HIGH_THRESHOLD_EVENT  580
#define TEMP_HIGH_RECOVERY_EVENT   530
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 580
#define TEMP_HIGH_RECOVERY_NORMAL  530
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    580
#define TEMP_HIGH_RECOVERY_LPM     530
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0

#if defined(CONFIG_BATTERY_SWELLING)
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		50
#define BATT_SWELLING_LOW_TEMP_RECOV		100
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#define BATT_SWELLING_BLOCK_TIME	10 * 60 /* 10 min */
#endif
