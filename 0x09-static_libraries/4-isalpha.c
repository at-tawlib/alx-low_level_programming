/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 for alphabetic and 0 for otheriwse
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
