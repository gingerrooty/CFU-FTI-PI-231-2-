type Water struct {
	temperature int
}

func NewWater(temperature int) {
	w := Water{}
	w.temperature = 0
	w.temperature = temperature
}

type Teapot struct {
	water Water
}
func NewTeapot(water Water) {
	f := Teapot{}
	f.water = water
}
func heat_up(t int) {
	n := Water{}
	n.temperature += t
}
func is_boiling(water Water) bool {
	if water.temperature >= 100 {
		return true
	} else {
		return false
	}
}