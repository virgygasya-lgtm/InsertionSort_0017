void insertionsort()
{
    int temp;
    int j;

    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;

        cout << "\nStep " << i << " : ";

        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
    }
}