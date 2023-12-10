import 	"strconv"
func isLucky(s string) bool {
	l := 0
	r := 0
	for i := 0; i < 3; i++ {
		num, nam := strconv.Atoi(string(s[i]))
		if nam != nil {
			return false
		}
		l += num
	}
	for i := 3; i < 6; i++ {
		num, nam := strconv.Atoi(string(s[i]))
		if nam != nil {
			return false
		}
		r += num
	}
	return (l == r)
}