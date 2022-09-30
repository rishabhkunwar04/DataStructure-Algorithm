#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    FILE * fp=fopen("C:/Users/Admin/OneDrive/Desktop/fontFile/Yacimiento ExtraBold Ex.ttf","r");

    fseek(fp,4,SEEK_SET);
    
    unsigned  short int numTableSize = 0;
    for (int i = 0; i < 2; i++) {
        numTableSize  = numTableSize << 8;
        numTableSize  = numTableSize  | fgetc(fp);
    }
    cout<<"numtable size: "<<numTableSize<<endl;
      unsigned  short int res = 0;
     for (int i = 0; i < 2; i++) {
        res = res << 8;
        res = res | fgetc(fp);
    }
    cout<<"search range "<<res<<endl;;
   // fseek(fp,4,SEEK_CUR);
       res=0;
       for (int i = 0; i < 2; i++) {
        res = res << 8;
        res = res | fgetc(fp);
    }
    cout<<"entry selector "<<res<<endl;
      res=0;
    for (int i = 0; i < 2; i++) {
        res = res << 8;
        res = res | fgetc(fp);
    }
    cout<<"range shift "<<res<<endl;
        
    unsigned  long int offSet = 0;
    for(int i=0;i<numTableSize;++i){
        string s="";
         int n=4;
         while(n--){
            char ch=fgetc(fp);
            s+=ch;
         }

        res=0;
       for (int i = 0; i < 4; i++) {
        res = res << 8;
        res = res | fgetc(fp);
    }

        for (int i = 0; i < 4; i++) {
        offSet  = offSet << 8;
        offSet  = offSet | fgetc(fp);
    }
       res=0;
       for (int i = 0; i < 4; i++) {
        res = res << 8;
        res = res | fgetc(fp);
    }
      if(s=="name"){
        cout<<" found name table"<<endl;
        break;
      }
    }
  cout<<"name offet: "<<offSet<<endl;
  fseek(fp,offSet,SEEK_SET);
   
    //fseek(fp,2,SEEK_CUR);
    res=0;
       for (int i = 0; i < 2; i++) {
        res = res << 8;
        res = res | fgetc(fp);
    }
     unsigned int count = 0;
    for (int i = 0; i < 2; i++) {
        count   = count  << 8;
        count   = count  | fgetc(fp);
    }
    cout<<"number of name record: "<<count<<endl;
      unsigned int storageoffset = 0;
    for (int i = 0; i < 2; i++) {
        storageoffset   = storageoffset  << 8;
        storageoffset  = storageoffset  | fgetc(fp);
    }

    for(int i=0;i<count;++i)
    {
          res=0;
       for (int i = 0; i < 6; i++) {
        res = res << 8;
        res = res | fgetc(fp);
    }
      unsigned int nameId = 0;
    for (int i = 0; i < 2; i++) {
        nameId   = nameId  << 8;
        nameId  = nameId  | fgetc(fp);
    }
       unsigned int str_Len = 0;
    for (int i = 0; i < 2; i++) {
        str_Len   = str_Len  << 8;
        str_Len  = str_Len  | fgetc(fp);
    }
       unsigned int stringOffset = 0;
    for (int i = 0; i < 2; i++) {
        stringOffset   = stringOffset  << 8;
        stringOffset  = stringOffset  | fgetc(fp);
    }
    if(nameId==1){
        cout<<" found name id"<<endl;
        fseek(fp,offSet+long(storageoffset)+long(stringOffset),SEEK_SET);
        string str="";
        while(str_Len--)
        {
         char ch=fgetc(fp);
         str+=ch;
        }
        cout<<"font name"<<str;
        break;
    }
  }

    


return 0;
    
}