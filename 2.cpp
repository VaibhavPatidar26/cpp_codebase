#include<iostream>
#include<vector>
using namespace std;

    void subsetSum(int arr[],int index,vector<int>&temp,vector<vector<int>>&output){
        //base case 
        if(index>=4){
            output.push_back(temp);
            return;
        }

        //not include
        subsetSum(arr,index+1,temp,output);

        //include
        temp.push_back(arr[index]);
        subsetSum(arr,index+1,temp,output);
    }
int main(){
  int index=0;
  int arr[4]={1,5,11,5};
        int sum =0;
        vector<int>temp;
        vector<vector<int>>output;
        vector<int>subSums;
        subsetSum(arr,index,temp,output);
        //printing output


        for(int i=0;i<=output.size();i++){
            for(int j=0;j<=output[i].size();j++){
                cout<<output[i][j]<<" ";
            }
            cout<<endl;
        }

        //printing subsums

        // //accessing output array
        // for(int i=0;i<output.size();i++){
        //     for(int j=0;j<output[i].size();j++){
        //         sum = sum + output[i][j];
        //     }
        //     subSums.push_back(sum);
        //     sum=0;
        // }

        // //comparing sum values repetition.
        // for(int i=0; i<=output.size()-1;i++){
        //     for(int j=i+1;j<=output.size()-1;j++){
        //         if(output[i]==output[j]){
        //             cout<<"element found";
        //             return 0;
        //         }
        //     }
        // }
        // cout<<"element not found";

        return 0;
    
}

    
      