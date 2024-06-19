unsigned char	swap_bits(unsigned char octet)
{
	unsigned char oc = octet;
	unsigned char tet = octet;
	unsigned char swap;

	oc >>= 4;
	tet <<= 4;
	swap = tet | oc;
	return (swap);
}
