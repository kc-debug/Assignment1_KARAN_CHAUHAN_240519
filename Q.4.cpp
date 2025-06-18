void pushZerosAtEnd(vector<int> &arr) 
{
	int insertPos= 0;

    for (int i = 0;i < arr.size();i++) {
        if(arr[i] != 0){
            arr[insertPos++]= arr[i];
        }
    }
    while(insertPos<arr.size()) {
        arr[insertPos++]= 0;
    }
}
