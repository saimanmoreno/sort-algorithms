
// pesquisa sequencial
int sequencialSearch(int array[], int n, int value){

	for(int i=0; i< n;i++)
		if(array[i]==value)
			return i;

	return -1;
}

// pesquisa binaria
int BinarySearch(int array[], int n, int value){

	int min = 0, max = n-1;

	while(min <= max){

		med = (min+max)/2;

		if(array[med]==value)
			return med;

		if(array[med] < value)
			min = med+1;

		else
			max = med-1
	}

	return -1;
}


// selecao do maior e menor valor
int maxSelect(int array[],int n){

	int max;

	if(n==0)
		return 0;

	max = array[0];				// min = array[0];
	
	for(int i=1; i < n; i++)
		if(array[i] > max)		// if (array[i] < min)
			max = array[i];		// min = array[i]

	return max;					// return min;
}
