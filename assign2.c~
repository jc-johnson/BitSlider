#include <stdio.h>
#include <stdlib.h>


//  PURPOSE:  To print 'u' both in binary and in hexadecimal, followed by a
//	newline character.  No return value.
void	printBinaryAndHex	(unsigned int	u) {
//   unsigned int	place;
//   printBin(place);
//   printHex(place);
//   return;

  unsigned int result = u;
  // TODO: find out the largest number of bits you 
  // can have for an unsigned int
  // printf("Size of u: %d", sizeof(u));
  int binNumber[100]; 
  int i = 0;

  while(result > 0) {
//  	printf("Result: %d\n",result);
 // 	printf("Result / 2: %d\n", result / 2);
 // 	printf("Remainder: %d\n", result % 2);
  	if (result % 2 == 0) {
  		binNumber[i] = 0;
  		i++; 
  	} else {
  		binNumber[i] = 1;
  		i++;
  	}
  	result = result / 2;
//  	printf("%d\n",result);
  }
//  printf("0x%d\n",u);


  // print binNumberPtr in reverse order
  // starting with MSB
  // Points to the last element in binNumber[]
  i--;
  int *binNumberPtr = &binNumber[i];
  int j = i;

 // printf("I = %d\n", i);
 // printf("binNumber[i]: %d\n", binNumber[i]);

  printf("Your binary number: ");
  while (j >= 0) {
  	printf("%d", *binNumberPtr);
  	binNumberPtr--;
  	j--;
  }
  printf("\n");





  // For hexidecimal: if (result / 16) 
  unsigned int hexResult = u;

  // TODO: find out the largest number of HEX chars
  // that a decimal number can have based on input

  int hexIntArray[100];
  int q = 0;
  int rem;

  while (hexResult > 0) {
//  	printf("hexResult: %d\n", hexResult);
//  	printf("hexResult / 16: %d\n", hexResult / 16);
//  	printf("Remainder: %d\n", hexResult % 16);
  	rem = hexResult % 16;
  	hexResult = hexResult / 16;
  	hexIntArray[q] = rem;
  	q++;
  }

//  printf("Q: %d", q);
  int t = q-1;
  int *hexIntPtr = &hexIntArray[t];
  char *hexCharPtr;
  // Make helper array the same size as hexArray
  char hexCharArray[q-1];
  hexCharPtr = &hexCharArray[t];

  // Print hex number
  printf("Your hex number: 0x");
   
  // Go through hexArray starting at beginning
  while (t >= 0) {

  	// print values from hexArray
  	hexIntPtr = &hexIntArray[t];
	if (*hexIntPtr < 10) {
		//printf("Iterator T: %d\n", t);
		printf("%d", *hexIntPtr);
		hexIntPtr++;
	}

	else if (*hexIntPtr > 10) {
		switch (*hexIntPtr) {
			case 10:
				hexCharArray[t] = 'A';
				//hexCharPtr = &hexArray[t];
				//don't need to reset hexCharPtr again
				//printf("Iterator T: %d\n", t);
				printf("%c", hexCharArray[t]);
				break;
			case 11:
				hexCharArray[t] = 'B';
				//hexCharPtr = &hexArray[t];
				//printf("Iterator T: %d\n", t);
				printf("%c", hexCharArray[t]);
				break;
			case 12:
				hexCharArray[t] = 'C';
				//hexCharPtr = &hexArray[t];
				//printf("Iterator T: %d\n", t);
				printf("%c", hexCharArray[t]);
				break;
			case 13:
				hexCharArray[t] = 'D';
				//hexCharPtr = &hexArray[t];
				//printf("Iterator T: %d\n", t);
				printf("%c", hexCharArray[t]);
				break;
			case 14:
				hexCharArray[t] = 'E';
				//hexCharPtr = &hexArray[t];
				//printf("Iterator T: %d\n", t);
				printf("%c", hexCharArray[t]);
				break;
			case 15:
				hexCharArray[t] = 'F';
				//printf("Iterator T: %d\n", t);
				printf("%c", hexCharArray[t]);
				break;
			case 16:
				hexCharArray[t] = 'G';
				//printf("Iterator T: %d\n", t);
				printf("%c", hexCharArray[t]);
				break;
			default:
				printf("Iterator T: %d\n", t);
				break;
		}
	}

  	//printf("*hexIntPtr: %d\n", *hexIntPtr);
  	hexIntPtr--;
  	t--;
  }
  printf("\n");
}







// void printArray(int bookmark, int* arrayPtr) {
// 	// reinitialize aray or print array


// 	if (bookmark == 32) {
//   		// just print array from left to right
//   		// arrayPtr needs to point to array[0]
//   		// when passed in
//   		int j = 0;
// 	  	while (j <= 32) {
// 	  		printf("%d", *arrayPtr);
// 	  		j++;
// 	  	}
// 	  	printf("\n");
//   	} else {
//   		int i = 0;

//   		while (ptr != &array[bookmark]) {
// 	  	*ptr = 0;
// 	  	ptr--;
// 	  	*ptr = 1;


// 	  	// reset pointer to t
// 	  	// print array from left to right
// 	  	j = 0;
// 	  	while (j <= 32) {
// 	  		printf("%d", array[j]);
// 	  		j++;
// 	  	}
// 	  	printf("\n");

// 	  	// point back to end of array
// 	  	// and pass values recursively to start over
// 	  	ptr = &array[32];
// 	  	printArray(bookmark++, ptr);
// 	  }
//   	}
// }




// PURPOSE:  To output a sequence of integers where a ONE in the lowest bit
//	"slides" to the highest bit position.  Then another ONE in the lowest
//	bit "slides" to the *second* highest bit position, etc.  The bits
//	should be kept on when then reach their final position.  No parameters.
//	No return value.

void	bitSlider	()
{
  

  // set up
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


  // turns bits on starting from
  // end of array down
  int* ptr = &array[32];
  int bookmark = 0;

  while (bookmark < 33) {
  	// edge case 
  	if (bookmark == 32) {
  		*ptr = 1;

  		// print each result
	 	j = 0;
	   	while (j <= 32) {
	   	printf("%d", array[j]);
	 	j++;
	 	}
	 	printf("\n");
	 	break;
  	}

	while (ptr != &array[bookmark]) {
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
	ptr = &array[32];
	bookmark++;
  }
}





//  PURPOSE:  To repeatedly ask for a 32-bit hexadecimal integer.  If the
//  number is not ZERO then the integer is separated into the highest 16
//	bits and the lowest 16 bits.  The highest 16 bits are repeatedly rolled
//	to the left 16 times, while the lowest 16 bits are repeatedly rolled
//	to the right 16 times.  After each roll, the number is reconstituted
//	and printed.

void	rollHighBitsLeft_rollLowBitsRight	()
{
  char binNumber[1000];
  char hexNumber[1000];

  printf("Please enter a 16-bit hex number (Without the x0): ");
  scanf("%s", hexNumber);
  printf("You entered %s\n", hexNumber);

  int i = 0;
  int j = 0;
  char* charPtr = &binNumber[0];
  int numberOfBits = 0; 

  // need to populate values in array
  printf("Your binary value: ");
  while (hexNumber[i]) {
  	switch (hexNumber[i]) {
  		case '0': 
  			printf("0000");
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;
  			break;
  		case '1': 
  			printf("0001");
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;
  			break;
  		case '2': 
  			printf("0010");
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4; 
  			break;
  		case '3': 
  			printf("0011");
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4; 
  			break;
  		case '4': 
  			printf("0100");
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case '5': 
  			printf("0101");
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break; 
  		case '6': 
  			printf("0110");
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case '7': 
  			printf("0111");
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case '8': 
  			printf("1000");
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case '9': 
  			printf("1001");
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'A': 
  			printf("1010");
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'B': 
  			printf("1011");
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'C': 
  			printf("1100");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'D': 
  			printf("1101");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'E': 
  			printf("1110");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'F': 
  			printf("1111");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'a': 
  			printf("1010");
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'b': 
  			printf("1011");
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'c': 
  			printf("1100");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'd': 
  			printf("1101");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'e': 
  			printf("1110");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 0; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		case 'f': 
  			printf("1111");
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			*charPtr = 1; charPtr++;
  			numberOfBits = numberOfBits + 4;  
  			break;
  		default: printf("\nInvalid hex digit: %c", hexNumber[i]);
  	}
  	i++;
  }
  printf("\n");

  printf("Number of bits: %d\n", numberOfBits);

  // print binNumber
  printf("BinNumber: \n");
  i = 0;
  while (i < numberOfBits) {
  	printf("%d", binNumber[i]);
  	i++;
  }
  printf("\n");




  // make sure numbers array contains 32 bits
  /*if (numberOfBits != 32)
  	printf("Not 32 bits, but we'll continue anyway...\n");
  else {
  	printf("Let's go!\n");
  } */
  
  printf("Let's go!\n");





//  printf("Number of bits / 2: %d\n", (numberOfBits/2));
  // split numbers array in half
  int highbits[numberOfBits/2];
  int lowbits[numberOfBits/2];






  // populate highbits and lowbits with values from binNumber
  i = 0;
  while (i < (numberOfBits/2)) {
  	lowbits[i] = binNumber[i];
  	i++;
  }

  // Starts at middle of binNumber[] to populate
  i = (numberOfBits/2);
  j = 0;
  while (i <= numberOfBits) {
  	highbits[j] = binNumber[i];
  	i=i+1;
  	j=j+1;
  }





  // Print lowbits[] and highbits[]
  printf("Lowbits: \n");
 // printf("Size of Lowbits: %lu\n", sizeof(lowbits));
  i = 0;
  while (i < (numberOfBits/2)) {
  	printf("%d", lowbits[i]);
  	i++;
  }
  printf("\n");

  printf("Highbits: \n");
 // printf("Size of Highbits: %lu\n", sizeof(highbits));
  i = 0;
  while (i < numberOfBits/2) {
  	printf("%d", highbits[i]);
  	i++;
  }
  printf("\n");



  int p = 0;
  while(p < 16) {
	  // roll lowbits right
	  i = ((numberOfBits/2) - 1);
	  int temp = lowbits[(numberOfBits/2) - 1];
	//  printf("lowbits temp: %d\n", temp);
	//  printf("(numberOfBits/2) - 1): %d\n", ((numberOfBits/2) - 1));

	  while (i >= 1) {
	//  	printf("lowbits[i]: %d\n", lowbits[i]);
	//  	printf("lowbits[i-1]: %d\n", lowbits[i-1]);
	  	lowbits[i] = lowbits[i-1];
	  	i--;
	  }
	  lowbits[0] = temp;

	  // print rolled lowbits
	//  printf("Rolled Lowbits: \n");
	  i = 0;
	  while (i < (numberOfBits/2)) {
	  	printf("%d", lowbits[i]);
	  	i++;
	  }
	//  printf("\n");





	  // roll highbits left
	  i = 0;
	  temp = highbits[i];
	 // printf("highbits[0]: %d\n", highbits[0]);
	 // printf("High temp: %d\n", temp);
	  while (i < (numberOfBits/2) - 1) {
	  	highbits[i] = highbits[i + 1];
	  	i++;
	  }
	  highbits[((numberOfBits/2) - 1)] = temp;

	  // print rolled highbits
	//  printf("Rolled Highbits: \n");
	  i = 0;
	  while (i < (numberOfBits/2)) {
	  	printf("%d", highbits[i]);
	  	i++;
	  }
	  printf("\n");
	  p++;
	}


  // reconstruct number after each roll 

}
void main() {

	printBinaryAndHex(1000);
	bitSlider();
	rollHighBitsLeft_rollLowBitsRight();

}
