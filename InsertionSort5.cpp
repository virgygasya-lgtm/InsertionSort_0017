void input()
{
    while (true)
    {
        cout << "Masukan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }
    }

    cout << endl;
    cout << "===============================";
    cout << "\nMasukan Element Array";
    cout << "\n===============================";

    for (int i = 0; i < n; i++)
    {
        cout << "\nData ke-" << (i + 1) << " : ";
        cin >> arr[i];
    }
}