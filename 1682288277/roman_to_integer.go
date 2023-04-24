package main

func romanToInt(src string) int {
	symbolToInt := map[rune]int{
		'I': 1,
		'V': 5,
		'X': 10,
		'L': 50,
		'C': 100,
		'D': 500,
		'M': 1000,
	}
	var dst, prev int
	for i := len(src) - 1; i >= 0; i-- {
		curr, ok := symbolToInt[rune(src[i])]
		if !ok {
			panic("undefined symbol")
		}
		if delta := curr - prev; delta < 0 {
			dst -= curr
			prev = curr
			continue
		}
		dst += curr
		prev = curr
	}
	return dst
}
