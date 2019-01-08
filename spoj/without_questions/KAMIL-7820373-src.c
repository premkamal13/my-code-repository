main(){char a[21];int x=10,i,k,s;while(x--){gets(a);i=0;k=0;while(a[i]!='\0')switch(a[i++]){case 84:case 68:case 76:case 70:k++;}s=pow(2,k);printf("%d\n",s);}exit(0);}
