



#include "stdio.h"

#include "global.h"
#include "io.h"
#include "init.h"
#include "fp.h"
#include "bp.h"

#include <time.h>
#include <string.h>

int correct_cnt;
float avg_error;
float max_acc;





int main(int argc,char *argv[])
{
    printf("====== aininot260 gh@ysucloud.com ======\n");
    printf("         Learning rate  : %.2f\n",alpha);
    printf("         Epochs         : %d\n",epochs);
    printf("         Batch size     : %d\n",minibatch);
    printf("========================================\n");
    printf("\n");

    load_data();
    

    init_trained_params();

    printf("checking value %f %f %f %X %X %X\n", (float)conv_w[0][0][0],(float)fc1_w[0][0][0][0], (float)fc2_w[0][0], conv_w[0][0][0], conv_w_array[0], fc2_w[0][0] );

    for(int i=1;i<=1;i++)
    {
        // correct_cnt=0;
        // avg_error=0;

        // for(int j=0;j<TRAIN_NUM;j++)
        // {
        //     set_input(j,train_image);
        //     input_conv();
        //     conv_pool();
        //     pool_fc1();
        //     fc1_fc2();
        //     set_answer(j,train_label);
        //     check_answer(&correct_cnt);
        //     get_error(&avg_error);

        //     update_fc2_b();
        //     update_fc2_w();
        //     update_fc1_b();
        //     update_fc1_w();
        //     update_conv_b();
        //     update_conv_w();
        //     if((j+1)%minibatch==0)
        //         assign_grads();

        //     //if(j&&j%5000==0)
        //     //    printf("Training  Time spent : %.0fs Image count : %d Accuracy : %0.4f%% Error : %0.4f%% Epoch : %d \r",floor(((float)(clock()-t))/CLOCKS_PER_SEC),j,((float)correct_cnt/j)*100,(avg_error/j)*100,i);
        // }
        // printf("Training  Time spent : %.0fs Image count : %d Accuracy : %0.4f%% Error : %0.4f%% Epoch : %d \n",floor(((float)(clock()-t))/CLOCKS_PER_SEC),TRAIN_NUM,((float)correct_cnt/TRAIN_NUM)*100,(avg_error/TRAIN_NUM)*100,i);
    
        correct_cnt=0;
        avg_error=0;

        for(int j=0;j<TEST_NUM;j++)
        {
            set_input(j,test_image);
            input_conv();
            conv_pool();
            pool_fc1();
            fc1_fc2();
            set_answer(j,test_label);
            check_answer(&correct_cnt);
            get_error(&avg_error);

            if(j&&j%5000==0)
                printf("Testing  Image count : %d Accuracy : %0.4f%% Error : %0.4f%% \r",j,((float)correct_cnt/j)*100,(avg_error/j)*100);
        }
        printf("Testing  Image count : %d Accuracy : %0.4f%% Error : %0.4f%% \n",TEST_NUM,((float)correct_cnt/TEST_NUM)*100,(avg_error/TEST_NUM)*100);
    
        // if((float)correct_cnt/TEST_NUM*100>max_acc)
        // {
        //     max_acc=(float)correct_cnt/TEST_NUM*100;
        //     export_params();
        //     printf("The new model has been exported.Accuracy has reached to %0.5f%%\n\n",max_acc);
        // }
        // else
        // {
        //     alpha=alpha-(alpha/3);
        //     printf("Learning rate has been reduced to %f\n\n",alpha);
        // }
    }
    return 0;
}