int low = 0, high = n - 1;
while (low < high)
{
    // Find the middle point
    int mid = (low + high) / 2;

    // If mid is even and element next to mid is
    // same as mid, then output element lies on
    // right side, else on left side
    if (mid % 2 == 0)
    {
        if (arr[mid] == arr[mid + 1])
            low = mid + 2;
        else
            high = mid;
    }
    else // If mid is odd
    {
        if (arr[mid] == arr[mid - 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
}
return arr[low];
}