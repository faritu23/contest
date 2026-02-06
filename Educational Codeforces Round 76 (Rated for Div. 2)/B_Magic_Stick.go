package main
import "fmt"
func solve(){
	var a,b int;
	fmt.Scan(&a,&b)

	// fmt.Println(a,b);
	if((a>=b) || (a<b && a>=4) || (a==2 && b==3)){
		fmt.Println("YES");
	}else{
		fmt.Println("NO");
	}
}
func main(){
	var t int;
	fmt.Scanln(&t);
	for i:=0;i<t;i++{
		solve();
		// t--;
	}
}