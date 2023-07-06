long long int divide(long long int dividend, long long int divisor)
{
    if (dividend == 0)
        return 0;
    if (divisor == 0)
    {
        cout << "Division by 0 is impossible\n";
        return 0;
    }

    // Calculate sign of answer i.e.,
    // Sign will be negative only if
    // Either one of them is negative
    // Otherwise it will be positive
    long long int sign = (dividend < 0) ^ (divisor < 0);

    // abs() : function used to get the absolute values
    dividend = abs(dividend);
    divisor = abs(divisor);
    if (divisor == 1)
        return ((sign == 0) ? dividend : -dividend);

    // log() : function used to get the logarithmic value of the entered value [Gives the natural log of the entered number]
    // exp() : Return the e^(entered value)
    long long int ans = exp(log(dividend) - log(divisor)) + 0.0000000001;
    /*
     adding 0.0000000001 to compensate for the precision errors
     like for a = 18 and b = -6,
     result after exponentiation will be 2.999999999...
     adding 0.0000000001, sets it right
    */
    return ((sign == 0) ? ans : -ans);
}
