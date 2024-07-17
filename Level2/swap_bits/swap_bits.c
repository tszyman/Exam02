unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	h1;
	unsigned char	h2;
	unsigned char	res;

	h1 = octet << 4;
	h2 = octet >> 4;
	res = h1 | h2;
	return (res);
}