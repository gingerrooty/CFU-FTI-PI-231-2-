type Cat struct {
	open  bool
	alive bool
}

func kot() Cat {
	cat := Cat{}
	cat.alive = rand.Intn(2) == 1
	cat.open = false
	return cat
}

func (cat Cat) is_alive() bool {
	if cat.open == true {
		return cat.alive
	} else {
		cat.alive = rand.Intn(2) == 1
	}
	return cat.alive
}

type Box struct{}

func (box Box) open() Cat {
	cat := kot()
	cat.open = true
	return cat
}
