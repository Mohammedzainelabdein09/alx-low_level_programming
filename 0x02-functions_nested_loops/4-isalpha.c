/**
 * _isalpha - functoin check lowercase
 *
 * @c:character will be cheched
 *
 * Return:return 1 if "c" is letter otherwise Always 0 (Success)
 *
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
