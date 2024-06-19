unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int count = 7;
	unsigned char reversed = octet;

	octet >>= 1;
	while (octet)
	{
		reversed <<= 1;
		reversed |= octet & 1;
		octet >>= 1;
		count--;
	}
	reversed <<= count;
	return (reversed);
}
