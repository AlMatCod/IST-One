//   /$$$$$$  /$$$$$$  /$$$$$$$$         /$$        /$$$$$$
//  |_  $$_/ /$$__  $$|__  $$__/       /$$$$       /$$$_  $$
//    | $$  | $$  \__/   | $$         |_  $$      | $$$$\ $$
//    | $$  |  $$$$$$    | $$           | $$      | $$ $$ $$
//    | $$   \____  $$   | $$           | $$      | $$\ $$$$
//    | $$   /$$  \ $$   | $$           | $$      | $$ \ $$$
//   /$$$$$$|  $$$$$$/   | $$          /$$$$$$ /$$|  $$$$$$/
//  |______/ \______/    |__/         |______/|__/ \______/
// Made by Alexey Makarenko
// GITHUB: ItAlmaCode
// Last update: 16.07.2026
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

// WORD - TOKEN
double token(const std::string& word){
    if(word=="хай" || word=="привет")return 1.0;
    if(word=="да" || word=="ок")return 2.0;
    if(word=="как" || word=="что" || word=="где")return 3.0;
    if(word=="вы" || word=="ты")return 4.0;
    if(word=="хорошо" || word=="отлично")return 5.0;
    if(word=="нет" || word=="неа")return 6.0;
    if(word=="я" || word=="меня" || word=="мне")return 7.0;
    if(word=="все" || word=="полный")return 8.0;
    if(word=="плохо" || word=="ужас")return 9.0;
    if(word=="это")return 10.0;
    if(word=="?")return 11.0;
    if(word=="!") return 12.0;
    return 0.1;
}
// TOKEN - WORD
std::string word(const double& id){
    int roundedId = std::round(id);
    if (roundedId == 1) return "привет";
    if (roundedId == 2) return "да";
    if (roundedId == 3) return "что";
    if (roundedId == 4) return "ты";
    if (roundedId == 5) return "хорошо";
    if (roundedId == 6) return "нет";
    if (roundedId == 7) return "я";
    if (roundedId == 8) return "все";
    if (roundedId == 9) return "плохо";
    if (roundedId == 10) return "это";
    if (roundedId == 11) return "?";
    if (roundedId == 12) return "!";
    return "";
}

// Main code
int main(){
    srand(time(0));
    // LEARN
    double cl=0;
    // DATA LEARNING
    double dah=4.0,dah2=3.0,dah3=0.1,r1=7.0,r11=5.0,r12=0.1;
    double daf=10.0,daf2=5.0,daf3=0.1,r2=2.0,r21=10.0,r22=5.0;
    double dat=1.0,dat2=4.0,dat3=3.0,r3=1.0,r31=7.0,r32=5.0;
    double daq=0.1,daq2=0.1,daq3=0.1,r4=10.0,r41=3.0,r42=11.0;
    double dac=1.0,dac2=0.1,dac3=0.1,r5=1.0,r51=0.1,r52=0.1;
    // WEIGTH AND BLABLABLA
    double x=0,x2=0,x3=0,o1=0,o2=0,o3=0;
    double cy=0,cy2=0,cy3=0;
    double cv1=0,cv2=0,cv3=0,cv4=0,cv5=0,cv6=0,cv7=0,cv8=0,cv9=0,cv10=0,cv11=0,cv12=0,cv13=0,cv14=0,cv15=0;
    double y1=0,y2=0,y3=0,y4=0,y5=0,y6=0,y7=0,y8=0,y9=0,y10=0,y11=0,y12=0,y13=0,y14=0,y15=0;
    double h1=0,h2=0,h3=0,h4=0,h5=0,h6=0,h7=0,h8=0,h9=0,h10=0,h11=0,h12=0,h13=0,h14=0,h15=0;
    double wb11=0,wb12=0,wb13=0,wb21=0,wb22=0,wb23=0,wb31=0,wb32=0,wb33=0;
    double w11=0,w12=0,w13=0,w21=0,w22=0,w23=0,w31=0,w32=0,w33=0;
    double wo11=0,wo12=0,wo13=0,wo21=0,wo22=0,wo23=0,wo31=0,wo32=0,wo33=0;
    double wbo11=0,wbo12=0,wbo13=0,wbo21=0,wbo22=0,wbo23=0,wbo31=0,wbo32=0,wbo33=0;
    double wu11=0,wu12=0,wu13=0,wu21=0,wu22=0,wu23=0,wu31=0,wu32=0,wu33=0;
    double wbu11=0,wbu12=0,wbu13=0,wbu21=0,wbu22=0,wbu23=0,wbu31=0,wbu32=0,wbu33=0;
    double be=999.0,bn=0,b=0;
    double bb1=((rand()%801)-400.0)/100.0, bb2=((rand()%801)-400.0)/100.0,bb3=((rand()%801)-400.0)/100.0;
    double b1=((rand()%801)-400.0)/100.0, b2=((rand()%801)-400.0)/100.0, b3=((rand()%801)-400.0)/100.0;
    double bbo1=((rand()%801)-400.0)/100.0, bbo2=((rand()%801)-400.0)/100.0, bbo3=((rand()%801)-400.0)/100.0;
    double bo1=((rand()%801)-400.0)/100.0, bo2=((rand()%801)-400.0)/100.0, bo3=((rand()%801)-400.0)/100.0;
    double bbu1=((rand()%801)-400.0)/100.0, bbu2=((rand()%801)-400.0)/100.0, bbu3=((rand()%801)-400.0)/100.0;
    double bu1=((rand()%801)-400.0)/100.0, bu2=((rand()%801)-400.0)/100.0, bu3=((rand()%801)-400.0)/100.0;
    
    std::cout<<"Начало обучения ИИ"<<std::endl;
    wb11=((rand()%801)-400.0)/100.0; wb12=((rand()%801)-400.0)/100.0; wb13=((rand()%801)-400.0)/100.0;
    wb21=((rand()%801)-400.0)/100.0; wb22=((rand()%801)-400.0)/100.0; wb23=((rand()%801)-400.0)/100.0;
    wb31=((rand()%801)-400.0)/100.0; wb32=((rand()%801)-400.0)/100.0; wb33=((rand()%801)-400.0)/100.0;
    wbo11=((rand()%801)-400.0)/100.0; wbo12=((rand()%801)-400.0)/100.0; wbo13=((rand()%801)-400.0)/100.0;
    wbo21=((rand()%801)-400.0)/100.0; wbo22=((rand()%801)-400.0)/100.0; wbo23=((rand()%801)-400.0)/100.0;
    wbo31=((rand()%801)-400.0)/100.0; wbo32=((rand()%801)-400.0)/100.0; wbo33=((rand()%801)-400.0)/100.0;
    
    for(int i=0;i<20000001;i++){
        if (cl==1000000) {
            std::cout<<"Прошло 1000000 поколений! сейчас: "<<i<<" | Ошибка be: "<<be<<std::endl;
            cl=0;
        }
        double p = 100.0 + (i / 10000.0);
        double m11=((rand()%11)-5.0)/p,m12=((rand()%11)-5.0)/p,m13=((rand()%11)-5.0)/p;
        double m21=((rand()%11)-5.0)/p,m22=((rand()%11)-5.0)/p,m23=((rand()%11)-5.0)/p;
        double m31=((rand()%11)-5.0)/p,m32=((rand()%11)-5.0)/p,m33=((rand()%11)-5.0)/p;
        
        double mo11=((rand()%11)-5.0)/p,mo12=((rand()%11)-5.0)/p,mo13=((rand()%11)-5.0)/p;
        double mo21=((rand()%11)-5.0)/p,mo22=((rand()%11)-5.0)/p,mo23=((rand()%11)-5.0)/p;
        double mo31=((rand()%11)-5.0)/p,mo32=((rand()%11)-5.0)/p,mo33=((rand()%11)-5.0)/p;
        
        double mu11=((rand()%11)-5.0)/p,mu12=((rand()%11)-5.0)/p,mu13=((rand()%11)-5.0)/p;
        double mu21=((rand()%11)-5.0)/p,mu22=((rand()%11)-5.0)/p,mu23=((rand()%11)-5.0)/p;
        double mu31=((rand()%11)-5.0)/p,mu32=((rand()%11)-5.0)/p,mu33=((rand()%11)-5.0)/p;
        
        double mb1=((rand()%11)-5.0)/p,mb2=((rand()%11)-5.0)/p,mb3=((rand()%11)-5.0)/p;
        double mbo1=((rand()%11)-5.0)/p,mbo2=((rand()%11)-5.0)/p,mbo3=((rand()%11)-5.0)/p;
        double mbu1=((rand()%11)-5.0)/p,mbu2=((rand()%11)-5.0)/p,mbu3=((rand()%11)-5.0)/p;
        b1 = bb1; b2 = bb2; b3 = bb3; bo1 = bbo1; bo2 = bbo2; bo3 = bbo3;
        w11 = wb11; w12 = wb12; w13 = wb13; w21 = wb21; w22 = wb22; w23 = wb23; w31 = wb31; w32 = wb32; w33 = wb33; 
        wo11 = wbo11; wo12 = wbo12; wo13 = wbo13; wo21 = wbo21; wo22 = wbo22; wo23 = wbo23; wo31 = wbo31; wo32 = wbo32; wo33 = wbo33;
        wu11 = wbu11; wu12 = wbu12; wu13 = wbu13; wu21 = wbu21; wu22 = wbu22; wu23 = wbu23; wu31 = wbu31; wu32 = wbu32; wu33 = wbu33;
    //Mutations
        b1=bb1+mb1;
        b2=bb2+mb2;
        b3=bb3+mb3;
        
        bo1=bbo1+mbo1;
        bo2=bbo2+mbo2;
        bo3=bbo3+mbo3;
        
        bu1=bbu1+mbu1;
        bu2=bbu2+mbu2;
        bu3=bbu3+mbu3;

        w11=wb11+m11;
        w12=wb12+m12;
        w13=wb13+m13;
        w21=wb21+m21;
        w22=wb22+m22;
        w23=wb23+m23;
        w31=wb31+m31;
        w32=wb32+m32;
        w33=wb33+m33;

        wo11=wbo11+mo11;
        wo12=wbo12+mo12;
        wo13=wbo13+mo13;
        wo21=wbo21+mo21;
        wo22=wbo22+mo22;
        wo23=wbo23+mo23;
        wo31=wbo31+mo31;
        wo32=wbo32+mo32;
        wo33=wbo33+mo33;
        
        wu11=wbu11+mu11;
        wu12=wbu12+mu12;
        wu13=wbu13+mu13;
        wu21=wbu21+mu21;
        wu22=wbu22+mu22;
        wu23=wbu23+mu23;
        wu31=wbu31+mu31;
        wu32=wbu32+mu32;
        wu33=wbu33+mu33;
        
    //1 example
        y1=(dah*w11)+(dah2*w12)+(dah3*w13)+b1;
        y2=(dah*w21)+(dah2*w22)+(dah3*w23)+b2;
        y3=(dah*w31)+(dah2*w32)+(dah3*w33)+b3;
        y1=std::max(0.0,y1);
        y2=std::max(0.0,y2);
        y3=std::max(0.0,y3);
        h1=(y1*wo11)+(y2*wo12)+(y3*wo13)+bo1;
        h2=(y1*wo21)+(y2*wo22)+(y3*wo23)+bo2;
        h3=(y1*wo31)+(y2*wo32)+(y3*wo33)+bo3;
        h1=std::max(0.0,h1);
        h2=std::max(0.0,h2);
        h3=std::max(0.0,h3);
        cv1=(h1*wu11)+(h2*wu12)+(h3*wu13)+bu1;
        cv2=(h1*wu21)+(h2*wu22)+(h3*wu23)+bu2;
        cv3=(h1*wu31)+(h2*wu32)+(h3*wu33)+bu3;
        double d1=std::abs(cv1-r1)+std::abs(cv2-r11)+std::abs(cv3-r12);
    //2 example
        y4=(daf*w11)+(daf2*w12)+(daf3*w13)+b1;
        y5=(daf*w21)+(daf2*w22)+(daf3*w23)+b2;
        y6=(daf*w31)+(daf2*w32)+(daf3*w33)+b3;
        y4=std::max(0.0,y4);
        y5=std::max(0.0,y5);
        y6=std::max(0.0,y6);
        h4=(y4*wo11)+(y5*wo12)+(y6*wo13)+bo1;
        h5=(y4*wo21)+(y5*wo22)+(y6*wo23)+bo2;
        h6=(y4*wo31)+(y5*wo32)+(y6*wo33)+bo3;
        h4=std::max(0.0,h4);
        h5=std::max(0.0,h5);
        h6=std::max(0.0,h6);
        cv1=(h4*wu11)+(h5*wu12)+(h6*wu13)+bu1;
        cv2=(h4*wu21)+(h5*wu22)+(h6*wu23)+bu2;
        cv3=(h4*wu31)+(h5*wu32)+(h6*wu33)+bu3;
        double d2=std::abs(cv1-r2)+std::abs(cv2-r21)+std::abs(cv3-r22);
    //3 example
        y7=(dat*w11)+(dat2*w12)+(dat3*w13)+b1;
        y8=(dat*w21)+(dat2*w22)+(dat3*w23)+b2;
        y9=(dat*w31)+(dat2*w32)+(dat3*w33)+b3;
        y7=std::max(0.0,y7);
        y8=std::max(0.0,y8);
        y9=std::max(0.0,y9);
        h7=(y7*wo11)+(y8*wo12)+(y9*wo13)+bo1;
        h8=(y7*wo21)+(y8*wo22)+(y9*wo23)+bo2;
        h9=(y7*wo31)+(y8*wo32)+(y9*wo33)+bo3;
        h7=std::max(0.0,h7);
        h8=std::max(0.0,h8);
        h9=std::max(0.0,h9);
        cv1=(h7*wu11)+(h8*wu12)+(h9*wu13)+bu1;
        cv2=(h7*wu21)+(h8*wu22)+(h9*wu23)+bu2;
        cv3=(h7*wu31)+(h8*wu32)+(h9*wu33)+bu3;
        double d3=std::abs(cv1-r3)+std::abs(cv2-r31)+std::abs(cv3-r32);
    //4 example
        y10=(daq*w11)+(daq2*w12)+(daq3*w13)+b1;
        y11=(daq*w21)+(daq2*w22)+(daq3*w23)+b2;
        y12=(daq*w31)+(daq2*w32)+(daq3*w33)+b3;
        y10=std::max(0.0,y10);
        y11=std::max(0.0,y11);
        y12=std::max(0.0,y12);
        h10=(y10*wo11)+(y11*wo12)+(y12*wo13)+bo1;
        h11=(y10*wo21)+(y11*wo22)+(y12*wo23)+bo2;
        h12=(y10*wo31)+(y11*wo32)+(y12*wo33)+bo3;
        h10=std::max(0.0,h10);
        h11=std::max(0.0,h11);
        h12=std::max(0.0,h12);
        cv1=(h10*wu11)+(h11*wu12)+(h12*wu13)+bu1;
        cv2=(h10*wu21)+(h11*wu22)+(h12*wu23)+bu2;
        cv3=(h10*wu31)+(h11*wu32)+(h12*wu33)+bu3;
        double d4=std::abs(cv1-r4)+std::abs(cv2-r41)+std::abs(cv3-r42);
    //5 example    
        y13=(dac*w11)+(dac2*w12)+(dac3*w13)+b1;
        y14=(dac*w21)+(dac2*w22)+(dac3*w23)+b2;
        y15=(dac*w31)+(dac2*w32)+(dac3*w33)+b3;
        y13=std::max(0.0,y13);
        y14=std::max(0.0,y14);
        y15=std::max(0.0,y15);
        h13=(y13*wo11)+(y14*wo12)+(y15*wo13)+bo1;
        h14=(y13*wo21)+(y14*wo22)+(y15*wo23)+bo2;
        h15=(y13*wo31)+(y14*wo32)+(y15*wo33)+bo3;
        h13=std::max(0.0,h13);
        h14=std::max(0.0,h14);
        h15=std::max(0.0,h15);
        cv1=(h13*wu11)+(h14*wu12)+(h15*wu13)+bu1;
        cv2=(h13*wu21)+(h14*wu22)+(h15*wu23)+bu2;
        cv3=(h13*wu31)+(h14*wu32)+(h15*wu33)+bu3;
        double d5=std::abs(cv1-r5)+std::abs(cv2-r51)+std::abs(cv3-r52);
        
        double avr=(d1+d2+d3+d4+d5)/15;
    // Check results
        if(avr<be){
            be=avr;
            b=(h1+h2+h3+h4+h5+h6+h7+h8+h9+h10+h11+h12+h13+h14+h15)/15;
            bb1=b1;
            bb2=b2;
            bb3=b3;
            
            bbo1=bo1;
            bbo2=bo2;
            bbo3=bo3;
            
            bbu1=bu1;
            bbu2=bu2;
            bbu3=bu3;
            
            wb11=w11;wb12=w12;wb13=w13;
            wb21=w21;wb22=w22;wb23=w23;
            wb31=w31;wb32=w32;wb33=w33;
            
            wbo11=wo11;wbo12=wo12;wbo13=wo13;
            wbo21=wo21;wbo22=wo22;wbo23=wo23;
            wbo31=wo31;wbo32=wo32;wbo33=wo33;
            
            wbu11=wu11;wbu12=wu12;wbu13=wu13;
            wbu21=wu21;wbu22=wu22;wbu23=wu23;
            wbu31=wu31;wbu32=wu32;wbu33=wu33;
            
            bn=i;
        }
        cl++;
    }
    std::cout<<"Обучение закончено! Лучший результат: "<<be<<" Поколение:"<<bn<<" Весы: "<<wb11<<" "<<wb12<<" "<<wb21<<" "<<wb22<<wbo11<<" "<<wbo12<<" "<<wbo21<<" "<<wbo22<<std::endl;
     // CHATBOT
    while(true){
        std::string t="",t2="",t3="";
        std::cout<<"> "<<std::flush;
        std::cin>>t>>t2>>t3;
        x=token(t);
        x2=token(t2);
        x3=token(t3);
        cy=(x*wb11)+(x2*wb12)+(x3*wb13)+bb1;
        cy2=(x*wb21)+(x2*wb22)+(x3*wb23)+bb2;
        cy3=(x*wb31)+(x2*wb32)+(x3*wb33)+bb3;
        cy=std::max(0.0,cy);
        cy2=std::max(0.0,cy2);
        cy3=std::max(0.0,cy3);
        cv1=(cy*wbo11)+(cy2*wbo12)+(cy3*wbo13)+bbo1;
        cv2=(cy*wbo21)+(cy2*wbo22)+(cy3*wbo23)+bbo2;
        cv3=(cy*wbo31)+(cy2*wbo32)+(cy3*wbo33)+bbo3;
        cv1=std::max(0.0,cv1);
        cv2=std::max(0.0,cv2);
        cv3=std::max(0.0,cv3);
        o1=(cv1*wbu11)+(cv2*wbu12)+(cv3*wbu13)+bbu1;
        o2=(cv1*wbu21)+(cv2*wbu22)+(cv3*wbu23)+bbu2;
        o3=(cv1*wbu31)+(cv2*wbu32)+(cv3*wbu33)+bbu3;
        
        std::cout<<"IST: "<<word(o1)<<" "<<word(o2)<<" "<<word(o3)<<std::endl;
    }
}

// Im tired this write....
// thank for reading!