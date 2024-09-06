#include <iostream>
#include <string> 
struct Con_nguoi
{
    Con_nguoi(std::string ht,int t, float v1, float cc) 
    {
        tuoi = t; 
        vong_mot = v1; 
        chieu_cao = cc;
        ho_ten = ht;  
    }
    int tuoi; 
    float vong_mot; 
    float chieu_cao; 
    std::string ho_ten; 
};
int main() 
{
    Con_nguoi hoi_phu_nu[5]
    {
        Con_nguoi ("thao",22,95,1.65), 
        Con_nguoi ("lan",18,90,1.70),
        Con_nguoi ("huong",29,85,1.6), 
        Con_nguoi("Nhung",16,85,1.6),
        Con_nguoi("Tuyet",30,85,1.6),
    }; 
    Con_nguoi *bo_nhi = nullptr; 
    for (bo_nhi = hoi_phu_nu;bo_nhi<hoi_phu_nu+5;bo_nhi++)
    //Ten mang chinh la mot con tro tro den phan tu dau tien cua mang nen khong dung them toan tu &
    {
        std::cout<<(*bo_nhi).ho_ten<<std::endl; 
    }
    return 0; 
}