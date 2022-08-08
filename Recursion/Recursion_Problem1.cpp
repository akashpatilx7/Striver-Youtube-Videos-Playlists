/* PSEUDOCODE : 

Printing a particular name N times (By using Recursion) */

void printName(i,N){
  if(N>5){
    return;
  }

  print("Akash");
  printName(i+1,N);

}

int main(){
    int N;
    cin>>N;

    printName(1,N);
}
