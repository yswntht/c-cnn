#include "init.h"

// void init_params()
// {
//     for(int i=0;i<CONV_W_NUM;i++)
//     {
//         for(int j=0;j<CONV_W_SIZE;j++)
//         for(int k=0;k<CONV_W_SIZE;k++)
//             conv_w[i][j][k]=get_rand(CONV_W_SIZE*CONV_W_SIZE);
//         conv_b[i]=get_rand(CONV_W_SIZE*CONV_W_SIZE);
//     }

//     for(int i=0;i<FC1_SIZE;i++)
//     {
//         for(int j=0;j<CONV_W_NUM;j++)
//         for(int k=0;k<POOL_SIZE;k++)
//         for(int l=0;l<POOL_SIZE;l++)
//             fc1_w[i][j][k][l]=get_rand(POOL_SIZE*POOL_SIZE*CONV_W_NUM);
//         fc1_b[i]=get_rand(POOL_SIZE*POOL_SIZE*CONV_W_NUM);
//     }

//     for(int i=0;i<FC2_SIZE;i++)
//     {
//         for(int j=0;j<FC1_SIZE;j++)
//             fc2_w[i][j]=get_rand(FC1_SIZE);
//         fc2_b[i]=get_rand(FC1_SIZE);
//     }
// }



void init_trained_params()
{
    for(int i=0;i<CONV_W_NUM;i++)
    {
        for(int j=0;j<CONV_W_SIZE;j++)
        for(int k=0;k<CONV_W_SIZE;k++)
            conv_w[i][j][k]= *((float*)&conv_w_array[(CONV_W_SIZE*CONV_W_SIZE*i) + (CONV_W_SIZE*j) + k]);
        conv_b[i]= *((float*)&conv_b_array[i]);
    }

    for(int i=0;i<FC1_SIZE;i++)
    {
        for(int j=0;j<CONV_W_NUM;j++)
        for(int k=0;k<POOL_SIZE;k++)
        for(int l=0;l<POOL_SIZE;l++)
            fc1_w[i][j][k][l]= *((float*)&fc1_w_array[(CONV_W_NUM*POOL_SIZE*POOL_SIZE*i) + (POOL_SIZE*POOL_SIZE*j) + (POOL_SIZE*k) + l]);
        fc1_b[i]= *((float*)&fc1_b_array[i]);
    }

    for(int i=0;i<FC2_SIZE;i++)
    {
        for(int j=0;j<FC1_SIZE;j++)
            fc2_w[i][j]= *((float*)&fc2_w_array[(FC1_SIZE*i) + j]);
        fc2_b[i]= *((float*)&fc2_b_array[i]);
    }
}