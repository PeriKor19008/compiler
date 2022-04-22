/* just like Unix wc */
%{
int x=0;
int last_befor_active_check(int call);
%}






%%

"\"last\"" {x=last_befor_active_check(1); }
"\"active\"" { x=last_befor_active_check(0); }

%%

int main() {

	yylex();
	if(x==6)
		printf("last befor active check not passed");
	else
		printf("last befor active check  passed");
}


int last_befor_active_check(int call){
	if(call==1)
	{
		
		if(x==0)
			x=1;
			return 1;
	}
	if(call==0){
	
		if(x!=0)
			return 5;
		else return 6;
	}
}





