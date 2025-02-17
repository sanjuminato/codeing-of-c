int main(){
int a;
printf("enter the first number:");
scanf("%d",&a);
int b;
printf("enter the second number:");
scanf("%d",&b);
int c;
printf("enter the third number:");
scanf("%d",&c);

if (a>b&&a>c){
    printf("%d is greater number ",a);

}
else if (b>a&&b>c){
    printf("%d is greater number",b);
}
else if (c>a&&c>b){
    printf("%d is greater number",c);
}

return 0;
}
