 int low = 0;
    int high = sqrt;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

       if (mid * mid == sqrt) {
            result = mid;
            break;
       } else if (mid * mid < sqrt) {
            low = mid + 1;
            result = mid;
       } else {
            high = mid - 1;
       }
    }