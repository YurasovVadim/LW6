 #include <iostream>
 #include <string>

template <typename T>
T sort(T* arr, int mass)
{
  int tmp = 0;
  for(int i = 0;i<mass;i++){
    for(int j = (mass-1);j>=(i+1);j--){
      if(arr[j]<arr[j-1]){
        tmp = arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=tmp;
      }
    }
  }
for(int i = 0;i<mass;i++){
std::cout<<arr[i]<<std::endl;
    }
    return 1;
}




int main(int argc, char **argv)
{
    int k;
    std::cout<<"Введи количество значений"<<std::endl;
    std::cin>>k;
     std::cout<<"Проверка целых чисел"<<std::endl;
    int arr[k];
    for ( int i=0; i<k; i++)
    {
        std::cout<<"Введи "<<i+1<<" число: "<<std::endl;
       std::cin>>arr[i];
}
sort(arr, k);
    std::cout<<"Проверка проверка дробных чисел"<<std::endl;
    double carr[k];
    for ( int i=0; i<k; i++)
    {
        std::cout<<"Введи "<<i+1<<" число: "<<std::endl;
       std::cin>>carr[i];
}
sort(carr, k);
    return 0;
}
