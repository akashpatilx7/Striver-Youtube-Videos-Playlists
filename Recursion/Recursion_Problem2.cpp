/* PSEUDOCODE :

Printing the numbers from 1 to N (Linearly) */


void printLinearly(i,N){
  if(N>4){
    return;
  }
  
  cout<<N<<'\n';
  printLinearly(i+1,N);
}

int main(){
  int N;
  cin>>N;
  
  printLinearly(1,N);
}
