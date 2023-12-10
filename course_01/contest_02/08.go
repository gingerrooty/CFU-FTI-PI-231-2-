import "strings"
func isPalindrome(s string) bool {
	s = strings.ToLower(s)
	l := 0
	r := len(s) - 1

	for l < r {
		if !check(s[l]) {
			l++
		} else if !check(s[r]) {
			r--
		} else if s[l] != s[r] {
			return false
		} else {
			l++
			r--
		}
	}

	return true
}
func check(c byte) bool {
	return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')
}