#include <iostream> 
#include <string> 
struct Con_nguoi
{
    Con_nguoi(std::string ht,int t, float v1, float cc)
    {
        vong_mot =v1; 
        tuoi = t; 
        ho_ten = ht; 
        con_zin = true; 
        chieu_cao = cc; 
    }
    int tuoi; 
    float chieu_cao; 
    std::string ho_ten; 
    bool con_zin; 
    float vong_mot; 
};
void pha_zin(Con_nguoi *nguoi)
{
    std::cout<<"Thuc hien pha zin em"<<(*nguoi).ho_ten<<std::endl; 
    (*nguoi).con_zin = false; 
}
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
    std::cout<<"Truoc khi pha, em "<<hoi_phu_nu[3].ho_ten<<" "
        <<(hoi_phu_nu[3].con_zin?"con zin":"mat zin")<<std::endl; 
    pha_zin(&hoi_phu_nu[3]); 
    std::cout<<"Sau khi pha, em "<<hoi_phu_nu[3].ho_ten<<" "
        <<(hoi_phu_nu[3].con_zin?"con zin":"mat zin")<<std::endl;
    return 0; 
    //Truyền con trỏ vào hàm sẽ giúp đồng bộ dữ liệu ở cả phía trên hàm và phía dưới hàm main 
    /*
    Hàm (con trỏ) --> biến truyền vào
    ---> Con trỏ sẽ tiến hành trỏ tới biến truyền vào 
    
    
    */

}