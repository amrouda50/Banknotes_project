#include <iostream>
#include <vector>
using namespace std;
struct banknote {
int value;
string color;
string country;

};
struct result1{
string colors;
int iden;

};

struct task4{
string country;
int iden;
};
int main()
{int numofban;
cin >> numofban;
banknote each[numofban];
for(int i = 0 ; i < numofban ; i++){
    cin >> each[i].country >> each[i].color >> each[i].value;
}
cout << "#" << endl;
//task1
int minval = each[0].value;
for(int i = 0 ; i < numofban ; i++ ){
    if(minval > each[i].value){
        minval = each[i].value;
    }
}



//task2
result1 result[numofban];
int cnt = 0;
for(int i = 0 ; i < numofban ; i++){
int j = 0;
while(j < cnt && each[i].color != result[j].colors )
{
j++;
}
if( j == cnt){
    result[cnt].colors = each[i].color;
    cnt++;
}

}

for(int i = 0 ; i < cnt ; i++){
    result[i].iden = 0;
}
for(int i = 0 ; i < numofban ; i++){
        for(int j = 0 ; j < numofban ; j++ ){
           if(result[i].colors == each[j].color) {
            result[i].iden++;
           }
        }

}
//task 4
task4 result4[numofban];
int cnt1 = 0;
for(int  i = 0 ; i < numofban ; i++){
        int j = 0;
    while(j < cnt1 && each[i].country != result4[j].country){
        j++;
    }
    if(j == cnt1){
        result4[cnt1].country = each[i].country;
        cnt1++;
    }
}

for(int i = 0 ; i < cnt1 ; i++ ){
    result4[i].iden = 0;
}

for(int i = 0 ; i < cnt1 ; i++){
        for(int j = 0 ; j <= numofban ; j++){
            if(each[j].country == result4[i].country ){
                result4[i].iden++;
            }
        }
}
int maxind = 0 ;
int maxval2 = result4[0].iden ;
for(int i = 0 ; i < cnt1 ; i++){
    if(result4[i].iden > maxval2 ){
        maxind = i ;
    }
}
/*for(int i = 0 ; i < cnt ; i++){
    cout << result4[i].country << " " << result4[i].iden << endl;
}*/








for(int i = 0 ; i < numofban ; i++ ){
  result4[i].iden = 0;
}

//task1out
for(int i = 0 ; i < numofban ; i++){
    if(each[i].value == minval){
        cout << each[i].color << " " << each[i].country << endl;
        break;
    }
}
cout << "#" << endl;
//task2out
bool exists;
int i = 0;
while(i < numofban && result[i].iden != 1){
        i++;
}
exists = i < numofban ;
if(exists){
    cout << result[i].colors << endl;
}
else{
    cout << "NONE" << endl;
}
cout << "#" << endl;
//task3out
cout << cnt << endl;
for(int i = 0 ; i < cnt ; i++){

cout << result[i].colors << endl;}
cout << "#" << endl;
//task4output
cout << result4[maxind].country  << endl;

cout << "#" << endl;

cout << "NONE" << endl;
banknote task5[numofban];
cnt1 = 0;
for(int i = 0 ; i < numofban ; i++){
        int j = 0;
while(j < cnt1 && task5[j].color != each[i].color){
    j++;
}
if(cnt1 == j){
    task5[cnt1].color = each[i].color;
    cnt1++;
}



}
for(int i = 0 ; i < cnt1 ; i++){
    cout << task5[i].color << endl;
}

    return 0;
}

/*5 Romania yellow 1000 Hungary brown 1200 Romania green 1500 Latvia blue 700 Hungary yellow 800*/
