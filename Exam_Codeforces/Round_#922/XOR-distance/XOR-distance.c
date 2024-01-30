/*
#include <stdio.h>

int main()
{
	long long t, a, b, r, x, re1, reA, reB;

	scanf ("%lld", &t);
	x = 0;
	while (t > 0)
	{
		scanf ("%lld %lld %lld", &a, &b, &r);
		while (x >= 0 && x <= r && x == 0 || x == 1)
		{
			reA = a - x;
			reB = b - x;
			if (reA < 0)
				reA *= -1;
			if (reB < 0)
				reB *= -1;

			re1 = reA - reB;
			if (re1 < 0)
				re1 *= -1;
			x++;
		}
		while (x > 1 && x <= r)
		{
			reA = a - x;
			reB = b - x;
			if (reA < 0)
				reA *= -1;
			if (reB < 0)
				reB *= -1;

			re1 = reA - reB;
			if (re1 < 0)
				re1 *= -1;
			x *= 2;
		}
		printf ("%lld\n", re1);
		t--;
	}
	return (0);
}*/

/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    long long t, a, b, r;
    scanf("%lld", &t);

    while (t--) {
        scanf("%lld %lld %lld", &a, &b, &r);

        long long min_distance = 1e18; // Initialize with a large value

        for (long long x = 0; x <= r; ++x) {
            long long distance = llabs((a ^ x) - (b ^ x));
            if (distance < min_distance) {
                min_distance = distance;
            }
        }

        printf("%lld\n", min_distance);
    }

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    long long t, a, b, r;
    scanf("%lld", &t);

    while (t--) {
        scanf("%lld %lld %lld", &a, &b, &r);

        long long xor_ab = a ^ b; // XOR of a and b
        long long highest_bit = 63; // Assuming long long is 64-bit

        while (!((xor_ab >> highest_bit) & 1)) {
            highest_bit--; // Find the position of the highest set bit in xor_ab
        }

        long long result = r; // Initialize result with r
        for (int bit = highest_bit; bit >= 0; bit--) {
            if ((xor_ab >> bit) & 1) {
                long long x_with_bit_cleared = r & ~((1LL << bit) - 1); // Clear all bits from bit to 0
                long long distance = llabs((a ^ x_with_bit_cleared) - (b ^ x_with_bit_cleared));
                result = result < distance ? result : distance;
            }
        }

        printf("%lld\n", result);
    }

    return 0;
}

