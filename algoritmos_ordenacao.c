// insertion sort
void insertionSort(int array[], int n){

	int aux;

	for (int i = 1; i < n; i++){
		
		aux = array[i];

		for (int j = i; j > 0 && array[j-1] > aux; j--){
			
			array[j] = array[j-1];
			
			if (j != 1){
				array[j] = aux;
			}
		}
	}
}

// -------------------------------------------------------------


// selection sort
void selectionSort(int array[], int n){

	int min;

	for(int i = 0; i< n-1; i++){

		min = i; 								//indice do elemento a ordenar

		for(j = i+1; j < n; j++)				// calculo do minimo

			if (array[j] < array[min])
				min = j;

		if (min != i)
			swap(array[i], array[min]);
	}
}

// -------------------------------------------------------------


// bubble sort
void bubbleSort(int array[], int n){
	
	for(int i = n-1; i >= 1; i--)
		for(int j = 1; j < i; j++)
			if (array[j-1] > vetor[j])
				swap(array[i], array[min]);
}

// -------------------------------------------------------------


// merge sort
void mergeSort(int array [], int begin, int end){

	if(begin< end){

		int center= (begin+ end)/2;

		mergeSort(v, begin, center);
		mergesort(v, center+1, end);
		merge(array,begin,center,end);
	}
}

void merge(int array[ ], int begin, int middle, int end){

	int i = 0, firsthalf = begin, secondhalf = middle + 1; 

	while(firsthalf <= middle && secondhalf <= end)

		if(array[firsthalf] < array[secondhalf])
			auxarray[i++] = array[firsthalf++];
		else
			auxarray[i++] = array[secondhalf++];
		
		while(firsthalf <= middle)
			auxarray[i++] = array[firsthalf++];

		while(secondhalf <= end)
			auxarray[i++] = array[secondhalf++];

		for(pos= 0, firsthalf=begin; pos< í; pos++, firsthalf++)
			array[firsthalf] = auxarray[pos];
}

// -------------------------------------------------------------


// quick sort
void quickSort(int array[] , int begin, int end) {

	if (first < last) {
		int pivot = partition(array, begin, end);
		quickSort(array, begin, pivot -1);
		quickSort(array, pivot + 1, end);
	}
}

int partition(int array[], int begin, int end) {

	pivotIndex = (begin+ end) / 2;
	pivotValue = array[pivotIndex];

	swap(array, pivotIndex, end);

	storeIndex = first;

	for (int i = begin; i < end; i++) {

		if(table[i] < pivotValue)) {
			swap(array, i, storeIndex);
			storeIndex++;
		}
	}

	swap(array, storeIndex, end);
	return storeIndex;
}

