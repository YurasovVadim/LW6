#include <iostream>
template <typename T1, typename T2> class DoubleBox {
private:
T1 content1 = T1();
T2 content2 = T2();
 // инициализация атрибута при объявлении, стандарт C++11
public:
DoubleBox() {
    content1=0;
    content2=0;
    }
 T1 getContentT1();
 T2 getContentT2();
 void setContent(const T1 value1, const T2 value2);    
DoubleBox(T1 value1, T2 value2):content1(value1),content2(value2) {}
};


template <typename T1,typename T2> T1 DoubleBox<T1,T2>::getContentT1()
{
return content1;
}

template <typename T1,typename T2> T2 DoubleBox<T1,T2>::getContentT2()
{
return content2;
}
template <typename T1,typename T2> void DoubleBox<T1,T2>::setContent(T1 value1, T2 value2)
{
    content1= value1;
    content2= value2;
}

int main(int argc, char **argv)
{
DoubleBox<int,double> intdblBox(23,3.45);
std::cout<<intdblBox.getContentT1()<<std::endl;
std::cout<<intdblBox.getContentT2()<<std::endl;
intdblBox.setContent(36,3.33);
std::cout<<intdblBox.getContentT1()<<std::endl;
std::cout<<intdblBox.getContentT2()<<std::endl;
return 1;
    }