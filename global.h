#ifndef _GLOBAL_H_
#define _GLOBAL_H_

#define TRAIN_NUM 60000
#define TEST_NUM 100
#define ROW 28
#define COL 28
#define CONV_SIZE 24
#define POOL_SIZE 12
#define FC1_SIZE 45
#define FC2_SIZE 10
#define CONV_W_SIZE 5
#define CONV_W_NUM 6

extern float alpha;
extern int epochs;
extern int minibatch;

extern float train_image[TRAIN_NUM][ROW][COL];
extern int train_label[TRAIN_NUM];
extern float test_image[TEST_NUM][ROW][COL];
extern int test_label[TEST_NUM];

extern int label[TEST_NUM];
unsigned int pixels[78400];

extern float conv_w[CONV_W_NUM][CONV_W_SIZE][CONV_W_SIZE];
extern float conv_b[CONV_W_NUM];
extern float fc1_b[FC1_SIZE];
extern float fc1_w[FC1_SIZE][CONV_W_NUM][POOL_SIZE][POOL_SIZE]; 
extern float fc2_b[FC2_SIZE];
extern float fc2_w[FC2_SIZE][FC1_SIZE];





extern float input[ROW][COL];
extern float conv_z[CONV_W_NUM][CONV_SIZE][CONV_SIZE];
extern float conv_a[CONV_W_NUM][CONV_SIZE][CONV_SIZE];
extern int pool_pos[CONV_W_NUM][POOL_SIZE][POOL_SIZE];
extern float pool[CONV_W_NUM][POOL_SIZE][POOL_SIZE];
extern float fc1_z[FC1_SIZE];
extern float fc1_a[FC1_SIZE];
extern float fc2_z[FC2_SIZE];
extern float fc2_a[FC2_SIZE];
extern float output[FC2_SIZE];
extern int answer[FC2_SIZE];

extern float conv_dw[CONV_W_NUM][CONV_W_SIZE][CONV_W_SIZE];
extern float conv_db[CONV_W_NUM];
extern float fc1_db[FC1_SIZE];
extern float fc1_dw[FC1_SIZE][CONV_W_NUM][POOL_SIZE][POOL_SIZE];
extern float fc2_db[FC2_SIZE];
extern float fc2_dw[FC2_SIZE][FC1_SIZE];
extern float C[FC2_SIZE];
extern float fc2_delta[FC2_SIZE];
extern float fc1_delta[FC1_SIZE];
extern float conv_sigma_delta[CONV_W_NUM];
extern float conv_delta[CONV_W_NUM][POOL_SIZE][POOL_SIZE];



// extern float conv_w_array[CONV_W_NUM*CONV_W_SIZE*CONV_W_SIZE] ;
// extern float fc1_w_array[FC1_SIZE*CONV_W_NUM*POOL_SIZE*POOL_SIZE]  ;
// extern float fc2_w_array[FC2_SIZE*FC1_SIZE] ;


unsigned long int conv_w_array[CONV_W_NUM*CONV_W_SIZE*CONV_W_SIZE];
unsigned long int conv_b_array[CONV_W_NUM] ;
unsigned long int fc1_b_array [FC1_SIZE]  ;
unsigned long int fc1_w_array [FC1_SIZE*CONV_W_NUM*POOL_SIZE*POOL_SIZE];
unsigned long int fc2_b_array [FC2_SIZE] ;
unsigned long int fc2_w_array [FC2_SIZE*FC1_SIZE] ;

#endif