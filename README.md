
void change_size(int *&arr, int size, int new_size) {
    int *new_arr = new int[new_size]; //adding a new arr(直接給予縮需的新陣列大小) 
    int *recycler = arr;			//adding a recycler
    copy(arr, arr + size, new_arr);	//copy arr on new arr

    // Increase every elements by size.
    for (int i = 0; i < new_size; i++) new_arr[i] += new_size;

    delete[] recycler;	//delete odd arr space
    arr = new_arr;
    delete[] new_arr;
}

output:
![image](https://github.com/user-attachments/assets/cd1b0c5e-ecdb-4ca0-a6bd-d25dab9914db)
