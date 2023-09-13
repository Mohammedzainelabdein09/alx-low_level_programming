/**
 * _islower - functoin check lowercase
 *
 * @c:letter will be cheched
 *
 * Return:return 1 if "c" is lower otherwise Always 0 (Success)
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
