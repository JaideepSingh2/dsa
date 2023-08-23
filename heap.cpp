#include <iostream>
using namespace std;
void heapify(int *, int, int);
class heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int value)
    {
        size++;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void del()
    {
        if (size == 0)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        
        else 
        {
            arr[1]=arr[size];
            size--;
            heapify(arr, size, 1);
        }
    }
    auto len()
    {
        return size;
    }
    
    void heapsort()
    {
        int lar = size;
        while (lar > 1)
        {
            swap(arr[1], arr[lar]);
            lar--;
            heapify(arr, lar, 1);
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    
    auto n = h.len();
    cout<<n<<endl;
    h.del();

    h.print();
}