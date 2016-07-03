void	bitSlider	()
{
  //unsigned int	u0;
  //unsigned int	uAccumulator	= ZERO;

  int array[33];
  int i = 32;
  // populate array from right to left
  // with right most bit on
  while (i >= 0) {
  	if (i == 32) 
  		array[i] = 1;
  	else {
  		array[i] = 0;
  	}
  	i--;
  }

  // print array from left to right
  int j = 0;
  while (j <= 32) {
  	printf("%d", array[j]);
  	j++;
  }
  printf("\n");



  int* ptr = &array[33];
  int* arrayPtr;
  int bookmark = 0;

  

  / turns bits on starting from
  // end of array down
  int* ptr = &array[32];
  int bookmark = 0;

  while (ptr != &array[1]) {
  *ptr = 0;
  ptr--;
  *ptr = 1;

  // print each result
  j = 0;
    while (j <= 32) {
    printf("%d", array[j]);
  j++;
  }
  printf("\n");
   }
  
  printf("\n");
}
 int main() {
  bitSlider();
 }


  
 //  while (bookmark2 < 33) {
 //  	while (ptr != &array[bookmark]) {
	//   	*ptr = 0;
	//   	ptr--;
	//   	*ptr = 1;

	//   	// print array from left to right
	//   	int j = 0;
	//   	while (j <= 32) {
	//   		printf("%d", array[j]);
	//   		j++;
	//   	}
	//   	printf("\n");

	// }
 //  	bookmark2++;
 //  }