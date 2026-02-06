package main
import "fmt"
func solve(){
	var n int;
	fmt.Scan(&n);
	v:=make([]int ,n);
	for i:=0;i<n;i++{
		fmt.Scan(&v[i]);
	}
	for i:=0;i<n;i++{
		fmt.Print(v[i]," ");
	}
	fmt.Print("\n");
	
}
func main(){
	t:=1;
	fmt.Scan(&t);
	for t>0{
		solve();
		t--;
	}
}