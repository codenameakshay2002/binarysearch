#include<iostream>
using namespace std;

 int binarysearch(int odd[], int n, int key){

    int start=0;
    int end = n-1;
    int mid =(start + end)/2;

    while(start <= end){
        if(odd[mid] == key){
            return mid;
    }

    if(key > odd[mid] ){
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
     mid = (start + end )/2;
 }
 return -1;
 }


int main(){
   int even[6] ={ 2 , 4, 6, 7 ,8,9};
   int odd[5] = { 6,7,8,9,13 };


   int indexeven = binarysearch(even, 5, 2);
   cout<< " the even binary search 7 is" << indexeven<<endl;


   int index00 = binarysearch(odd, 6, 9);
   cout<< " the even binary search 2 is" << index00<<endl;





return 0;
}
