#include<stdio.h>
#include<omp.h>

int main(){
char *input_file="a1.png";
char *output_file="a2.png";
FILE *fp;
if((fp=(fopen(input_file,"r")))==NULL){

}

gdImagePtr img=gdImageCreateFromPng(fp);
int widith=gdImageSX(img);
int height =gdImageSY(img);
int combined;
double t1=omp_get_wtime();
int x,y,color,blue,green,red;
#pragma omp parallel for private(y,color,red,green,blue)
for(int x=0;x<widith;x++){
    #pragma omp critical 
    {   for(int y=0;y<height;y++){
        color=gdImageGetPixel(img,x,y);
        blue=gdImageBlue(img,color);
        combined=0.3*red+0.59*blue+0.11*green;
        color=gdImageColorAllocate(img,combined,combined,combined);
        gdSetPixel(img,x,y,color);
    }
}

}
double t2=omp_get_wtime();

if((fp=fopen(output_file,"w"))==NULL){

}
gdImagePng(img,fp);
gdImageDestroy(img);
fclose(fp);

    return 0;
}