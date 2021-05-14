#include <iostream>
class Rectangle
{
private:
    double m_a, m_b, m_S;
 
public:
    Rectangle(double a=0.0, double b=0.0, double S=0.0): m_a(a), m_b(b), m_S(S)
    {
    }
 
    friend std::ostream& operator<< (std::ostream &out, const Rectangle &point);
};
 
std::ostream& operator<< (std::ostream &out, const Rectangle &point)
{
    out << "Rectangle(" << point.m_a << ", " << point.m_b << ", " << point.m_S << ")";
 
    return out;
}
 
 
 
 template <typename T>
T sort(T* a, T* b, int k)
{
  T S[k];
  int tmp1 = 0;
  int tmp2 = 0;
  int tmp3 = 0;
  for (int i = 0;i<k;i++)
  {S[i]=a[i]*b[i];}
  for(int i = 0;i<k;i++){
    for(int j = (k-1);j>=(i+1);j--){
      if(S[j]<S[j-1]){
        tmp1 = S[j];
        S[j]=S[j-1];
        S[j-1]=tmp1;
        tmp2 = a[j];
        a[j]=a[j-1];
        a[j-1]=tmp2;
        tmp3 = b[j];
        b[j]=b[j-1];
        b[j-1]=tmp3;
      }
    }
  }
for(int i = 0;i<k;i++)
 {
    Rectangle tangle(a[i], b[i], S[i]);
    std::cout << tangle<<std::endl;
 }
    return 1;}
 
 
 
 
int main(int argc, char **argv)
{
    int k;
    std::cout<<"Введи количество значений"<<std::endl;
    std::cin>>k;
     std::cout<<"Проверка целых чисел"<<std::endl;
    double a[k], b[k], S[k];
    for ( int i=0; i<k; i++)
    {
        std::cout<<"Введи "<<i+1<<" число: "<<std::endl;
       std::cin>>a[i];
       std::cin>>b[i];
}
sort(a,b,k);
    return 0;
}
