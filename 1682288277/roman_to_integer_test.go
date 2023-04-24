package main

import (
	"strconv"
	"testing"
)

func TestRomanToInteger(t *testing.T) {
	t.Parallel()
	tt := []struct {
		src  string
		want int
	}{
		{
			src:  "III",
			want: 3,
		},
		{
			src:  "LVIII",
			want: 58,
		},
		{
			src:  "MCMXCIV",
			want: 1994,
		},
	}
	for i, tc := range tt {
		t.Run(strconv.Itoa(i), func(t *testing.T) {
			if got, want := romanToInt(tc.src), tc.want; got != want {
				t.Errorf("got: %v, want: %v", got, want)
			}
		})
	}
}
