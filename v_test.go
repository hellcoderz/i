package i

import (
	_fmt "fmt"
	"math"
	"reflect"
	"testing"
)

type (
	f  = float64
	fv = []f
	i  = int
	iv = []int
)

const z0 = complex(0, 0)
const z1 = complex(1, 0)
const z2 = complex(2, 0)
const z3 = complex(3, 0)
const z4 = complex(4, 0)

func TestMV(t *testing.T) {
	type IV []int
	testCases := []struct {
		s    string
		f    func(v) v
		x, r v
	}{
		{"flp", flp, 1.0, 1.0},
		{"flp", flp, iv{1, 2}, iv{1, 2}},
		{"flp", flp, l{fv{1, 2}, fv{3, 4}, fv{5, 6}}, l{fv{1, 3, 5}, fv{2, 4, 6}}},
		{"flp", flp, l{fv{1.1, 2.2}, fv{3.3, 4.4}, l{5, l{6, 7}}}, l{l{1.1, 3.3, 5}, l{2.2, 4.4, l{6, 7}}}},
		{"neg", neg, 1.0, -1.0},
		{"neg", neg, c(1, 2), c(-1, -2)},
		{"neg", neg, fv{1, 2, 3}, fv{-1, -2, -3}},
		{"neg", neg, zv{1, c(2, 3)}, zv{-1, c(-2, -3)}},
		{"neg", neg, iv{1, 2}, iv{-1, -2}},
		{"neg", neg, true, true},
		{"neg", neg, uint16(4), uint16(65532)},
		{"neg", neg, 1, -1},
		{"neg", neg, [2]l{l{"a", "b"}, l{1, 2}}, [2]l{l{"a", "b"}, l{-1, -2}}},
		{"neg", neg, map[v]v{"a": fv{1, 2}}, map[v]v{"a": fv{-1.0, -2.0}}},
		{"neg", neg, mystruct{true, 2.0, []myint{1, 2, 3}}, mystruct{true, -2.0, []myint{-1, -2, -3}}},
		{"fst", fst, iv{5, 6, 7}, 5},
		{"fst", fst, fv{5, 6, 7}, 5.0},
		{"fst", fst, l{c(2, 3), 0, 0}, c(2, 3)},
		{"fst", fst, IV{5, 6}, 5},
		{"fst", fst, IV{}, nil},
		{"fst", fst, [2]l{l{"d", "c"}, l{5, 6}}, 5},
		{"sqr", sqr, 4, 2},
		// {"sqr", sqr, -1.0, math.NaN()}, not comparable
		{"sqr", sqr, -7 + 24i, c(3, 4)},
		{"inv", inv, 4.0, 0.25},
		{"inv", inv, c(0, 0.5), c(0, -2)},
		{"abs", abs, -2, 2},
		{"abs", abs, fv{-2, -3, 4}, fv{2, 3, 4}},
		{"abs", abs, zv{c(3, 4), 5}, zv{5, 5}},
		{"til", til, 3.0, fv{0, 1, 2}},
		{"til", til, 3, iv{0, 1, 2}},
		{"til", til, 0, iv{}},
		{"til", til, 0.0, fv{}},
		{"til", til, z4, zv{0, 1, 2, 3}},
		{"odo", odo, fv{2, 3}, l{zv{0, 0, 0, 1, 1, 1}, zv{0, 1, 2, 0, 1, 2}}},
		{"odo", odo, l{true, 2, 1.0, c(3, 0)}, l{zv{0, 0, 0, 0, 0, 0}, zv{0, 0, 0, 1, 1, 1}, zv{0, 0, 0, 0, 0, 0}, zv{0, 1, 2, 0, 1, 2}}},
		{"wer", wer, 3, zv{0, 0, 0}},
		{"wer", wer, zv{3}, zv{0, 0, 0}},
		{"wer", wer, []bool{false, false, true, false, true, true}, zv{2, 4, 5}},
		{"wer", wer, l{false, 0, c(1, 0), 0.0, 1.0, myint(1)}, zv{2, 4, 5}},
		{"rev", rev, fv{1, 2, 3}, fv{3, 2, 1}},
		{"rev", rev, [2]l{l{"a", "b"}, l{1, 2}}, [2]l{l{"b", "a"}, l{2, 1}}},
		{"asc", asc, 3, zv{0}},
		{"asc", asc, fv{4, 5, 6}, zv{0, 1, 2}},
		{"asc", asc, sv{"be", "g", "a"}, zv{2, 0, 1}},
		{"asc", asc, map[v]f{"b": 3, "c": 2, "a": 5}, sv{"c", "b", "a"}},
		{"asc", asc, "a", zv{0}},
		{"asc", asc, sv{"b", "c", "alpha"}, zv{2, 0, 1}},
		{"dsc", dsc, fv{5, -1, 3}, zv{0, 2, 1}},
		{"dsc", dsc, sv{"b", "c", "alpha"}, zv{1, 0, 2}},
		{"eye", eye, 0, l{}},
		{"eye", eye, 2, l{zv{1, 0}, zv{0, 1}}},
		{"grp", grp, fv{1, 3, 3, 3, 1, 2}, [2]l{l{1.0, 3.0, 2.0}, l{zv{0, 4}, zv{1, 2, 3}, zv{5}}}},
		{"not", not, 1, 0},
		{"not", not, 1 + 2i, 0 + 0i},
		{"not", not, 0 + 0i, 1 + 0i},
		{"not", not, c(math.Inf(1), 0), 0 + 0i},
		{"not", not, c(math.NaN(), 0), 0 + 0i},
		{"enl", enl, 1.2, fv{1.2}},
		{"enl", enl, iv{1, 2}, l{iv{1, 2}}},
		{"enl", enl, IV{4, 5, 6}, l{IV{4, 5, 6}}},
		{"is0", is0, 0, 0},
		{"is0", is0, nil, z1},
		{"is0", is0, iv{}, iv{}},
		{"is0", is0, l{1, math.NaN(), c(1, 0), c(1, math.NaN())}, l{0, 1.0, c(0, 0), c(1, 0)}},
		{"exp", exp, l{0, c(1, 0)}, l{1, c(math.E, 0)}},
		{"log", log, fv{1, 1.0 / math.E}, fv{0, -1}},
		{"log", log, c(-1, 0), c(0, math.Pi)},
		{"cnt", cnt, l{}, z0},
		{"cnt", cnt, iv{1, 2, 3}, z3},
		{"cnt", cnt, 4, z1},
		{"cnt", cnt, "alpha", z1},
		{"cnt", cnt, map[v]v{"a": iv{1, 2, 3}, "b": iv{2, 3, 4}}, z2},
		{"flr", flr, 3.5, 3.0},
		// fmt TODO
		{"unq", unq, l{}, l{}},
		{"unq", unq, iv{1, 2, 2, 1}, iv{1, 2}},
		{"unq", unq, l{1.0, 1.0}, l{1.0}},
		// evl TODO
	}

	for _, tc := range testCases {
		r := tc.f(tc.x)
		tt(t, tc.r, r, "%s %+v: %+v\n", tc.s, tc.x, r)
	}
}
func TestDV(t *testing.T) {
	type IV []int
	testCases := []struct {
		s       string
		f       func(v, v) v
		x, y, r v
	}{
		{"add", add, 1, 2.0, z3},
		{"add", add, 1.0, uint(3), z4},
		{"add", add, iv{1, 2}, 3, iv{4, 5}},
		{"add", add, iv{1, 2}, 3, iv{4, 5}},
		{"add", add, 1, iv{2, 3}, iv{3, 4}},
		{"add", add, 1, iv{2, 3}, iv{3, 4}},
		{"add", add, iv{1, 2, 3}, iv{4, 5, 6}, iv{5, 7, 9}},
		{"add", add, l{1, 2.0, 3}, 1, l{2, z3, 4}},
		{"add", add, iv{1, 2}, l{1, iv{2, 3}}, l{2, iv{4, 5}}},
		{"add", add, [2]l{l{"a", "b"}, l{1, 2.0}}, [2]l{l{"b"}, l{fv{3, 4}}}, [2]l{l{"a", "b"}, l{z1, fv{5, 6}}}}, // zero value is 0.0
		{"add", add, map[v]v{"a": false}, map[v]v{"a": true}, map[v]v{"a": true}},
		{"add", add, [2]l{l{"a"}, l{false}}, [2]l{l{"a"}, l{[]bool{false, true}}}, [2]l{l{"a"}, l{[]bool{false, true}}}},
		{"add", add, map[v]v{"a": 1, "b": fv{2, 3}}, 3, map[v]v{"a": 4, "b": zv{5, 6}}},
		{"add", add, mystruct{}, mystruct{true, 2, nil}, mystruct{true, 2, nil}},
		{"add", add, mystruct{false, 1, []myint{1, 2}}, mystruct{true, 2, []myint{3, 4}}, mystruct{true, 3, []myint{4, 6}}},
		{"add", add, mystruct{true, 1, []myint{1, 2}}, map[v]v{"B": 3, "V": fv{3, 4}}, [2]l{l{"B", "F", "V"}, l{z4, 1.0, zv{4, 6}}}},
		{"sub", sub, 1, 2, -1},
		{"mul", mul, 2, 3, 6},
		{"div", div, 2.0, 1, z2},
		//{"div", div, c(1, 0), 0, c(math.Inf(1), math.NaN())}, // cannot be compared
		{"mod", mod, 2, fv{1, 2, 3, 4, 5, 6}, zv{1, 0, 1, 0, 1, 0}},
		{"mod", mod, 3, l{1, 2, 3, fv{4, 5}}, l{1, 2, 0, zv{1, 2}}},
		{"mod", mod, c(3, 0), l{1, 2, 3, c(4, 0)}, l{c(1, 0), c(2, 0), c(0, 0), c(1, 0)}},
		{"mkd", mkd, iv{1, 2, 3}, fv{2, 3, 4}, [2]l{l{1, 2, 3}, l{2.0, 3.0, 4.0}}},
		{"min", min, 2, 3, 2},
		{"min", min, iv{1, 2, 3}, 2, iv{1, 2, 2}},
		{"max", max, 2, 3, 3},
		{"les", les, 2, 3, 1},
		{"les", les, 2, c(4, 0), c(1, 0)},
		{"les", les, "a", "b", z1},
		{"les", les, "a", sv{"b", "a"}, zv{1, 0}},
		{"mor", mor, 2, 3, 0},
		{"mor", mor, 2, c(3, 3), c(0, 0)},
		{"mor", mor, sv{"z", "a"}, sv{"g", "h"}, zv{1, 0}},
		{"eql", eql, fv{1, 2, math.NaN(), math.Inf(1)}, iv{5, 2, 7, 8}, zv{0, 1, 0, 0}},
		{"eql", eql, "a", "a", z1},
		{"eql", eql, sv{"a", "b"}, "a", zv{1.0, 0.0}},
		{"pow", pow, fv{2, 2}, fv{0.5, 2}, fv{math.Sqrt2, 4}},
		{"mch", mch, 1, 1, 1.0},
		{"mch", mch, 1, 0, 0.0},
		{"mch", mch, l{}, fv{}, 0.0}, // ()~!0
		{"mch", mch, iv{1, 2}, iv{1, 2}, 1.0},
		{"mch", mch, iv{1, 2}, fv{1, 2}, 0.0},
		{"mch", mch, "a", "a", 1.0},
		{"mch", mch, "alpha", "beta", 0.0},
		{"mch", mch, [2]l{l{"a", "b"}, l{1, 2}}, [2]l{l{"a", "b"}, l{1, 2}}, 1.0},
		{"mch", mch, [2]l{l{"a", "b"}, l{1, 2}}, [2]l{l{"b", "a"}, l{2, 1}}, 0.0},
		{"cat", cat, 1, 2, iv{1, 2}},
		{"cat", cat, 1, iv{2, 3}, iv{1, 2, 3}},
		{"cat", cat, iv{2, 3}, 1, iv{2, 3, 1}},
		{"cat", cat, iv{2, 3}, fv{4, 5}, l{2, 3, 4.0, 5.0}},
		{"cat", cat, [2]l{l{"a", "b"}, l{1, 2}}, [2]l{l{"a", "c"}, l{7, 6}}, [2]l{l{"a", "b", "c"}, l{7, 2, 6}}},
		{"cat", cat, [2]l{{"a"}, l{1}}, 3, l{[2]l{l{"a"}, l{1}}, 3}},
		{"ept", ept, iv{5, 6}, 3, iv{5, 6}},
		{"ept", ept, iv{5, 6}, 5, iv{6}},
		{"ept", ept, iv{5, 6}, l{1, 2, 3, 4, 5, 6, 7}, iv{}},
		{"ept", ept, l{5, 8, 13.0, 12, 8}, l{13.0, 8}, l{5, 12}},
		{"ept", ept, 8.0, l{1.0, 3.0, 5.0}, fv{0, 2, 4, 6, 7}},
		{"tak", tak, 2, iv{1, 2, 3, 4}, iv{1, 2}},
		{"tak", tak, -2.0, l{1, 2, 3, 4}, l{3, 4}},
		{"tak", tak, c(4, 0), l{1, 2.0}, l{1, 2.0, 1, 2.0}},
		{"tak", tak, -3, l{1, 2}, l{2, 1, 2}},
		{"tak", tak, 8, l{1, 2}, l{1, 2, 1, 2, 1, 2, 1, 2}},
		{"tak", tak, -8, l{1, 2}, l{1, 2, 1, 2, 1, 2, 1, 2}},
		{"rsh", rsh, 3, 3, iv{3, 3, 3}},
		{"rsh", rsh, l{2}, l{1, 2}, iv{1, 2}},
		{"rsh", rsh, l{3}, 2.0, fv{2, 2, 2}},
		{"rsh", rsh, l{3}, fv{1, 2}, fv{1, 2, 1}},
		{"rsh", rsh, l{2, 3}, fv{1, 2}, l{fv{1, 2, 1}, fv{2, 1, 2}}},
		{"rsh", rsh, l{3, 2}, l{1, 2, 3}, l{iv{1, 2}, iv{3, 1}, iv{2, 3}}},
		{"rsh", rsh, l{2, 2}, 5, l{iv{5, 5}, iv{5, 5}}},
		{"rsh", rsh, l{2, 0}, l{1, 2, 3, 4}, l{l{}, l{}}},
		{"rsh", rsh, l{2, 3}, l{1, 2, iv{3, 4}}, l{l{1, 2, iv{3, 4}}, l{1, 2, iv{3, 4}}}},
		{"rsh", rsh, l{-1, 3}, l{0, 1, 2, 3, 4, 5, 6}, l{iv{0, 1, 2}, iv{3, 4, 5}, iv{6}}},
		{"rsh", rsh, l{3, -1}, l{0, 1, 2, 3, 4, 5, 6}, l{iv{0, 1}, iv{2, 3}, iv{4, 5, 6}}},
		{"drp", drp, 1, l{1, 2, 3}, l{2, 3}},
		{"drp", drp, -1, l{1, 2, 3}, l{1, 2}},
		{"drp", drp, -3, l{1, 2, 3}, l{}},
		{"drp", drp, -4, iv{1, 2, 3}, iv{}},
		{"drp", drp, 4, l{1, 2, 3}, l{}},
		{"drp", drp, 1, fv{1, 2}, fv{2}},
		{"drp", drp, 1, [2]l{l{"a", "b", "c"}, l{1, 2, 3}}, [2]l{l{"b", "c"}, l{2, 3}}},
		{"drp", drp, sv{"a", "c"}, [2]l{l{"a", "b", "c"}, l{1, 2, 3}}, [2]l{l{"b"}, l{2}}},
		{"cut", cut, l{1}, iv{1, 2}, l{iv{2}}},
		{"cut", cut, l{0, 3}, l{0, 1, 2, 3, 4, 5}, l{iv{0, 1, 2}, iv{3, 4, 5}}},
		{"cut", cut, iv{1, 1, 3}, iv{0, 1, 2, 3, 4, 5}, l{l{}, iv{1, 2}, iv{3, 4, 5}}},
		// cst: TODO
		{"fnd", fnd, iv{3}, iv{1, 2, 3}, zv{1, 1, 0}},
		{"fnd", fnd, iv{3}, 3, z0},
		{"fnd", fnd, iv{3}, 1, z1},
		{"fnd", fnd, iv{3, 4}, [2]l{l{"a", "b"}, l{6, 3}}, [2]l{l{"a", "b"}, l{z2, z0}}},
		// cal: TODO
		// bin: TODO
		// rbn: TODO
		// pak: TODO
		// upk: TODO
		// spl: TODO
		// win: TODO
	}
	for _, tc := range testCases {
		r := tc.f(tc.x, tc.y)
		tt(t, tc.r, r, "%s %+v %+v: %+v\n", tc.s, tc.x, tc.y, r)
	}
}
func TestAdv(t *testing.T) {
	testCases := []struct {
		s              string
		av, f, x, y, r v
	}{
		{"ovr", ovr, add, fv{1, 2, 3}, nil, 6.0},
		{"ovr", ovr, sub, fv{3, 6, 9}, nil, -12.0},
		{"ovd", ovd, sub, 5, iv{2, 8, 9}, -14},
		{"ovd", ovd, sub, iv{2, 6}, iv{1, 2, 3}, iv{-4, 0}},
		{"ech", ech, inv, fv{4, 5}, nil, fv{0.25, 0.2}},
		{"ecd", ecd, div, iv{8, 15}, iv{4, 5}, iv{2, 3}},
		{"ecd", ecd, div, 12, iv{3, 4}, iv{4, 3}},
		{"ecd", ecd, div, iv{12, 15}, 3, iv{4, 5}},
		{"ecp", ecp, sub, iv{8, 2, 5}, nil, iv{8, -6, 3}},
		{"eci", eci, cat, iv{99}, iv{2, 3, 4}, l{iv{2, 99}, iv{3, 2}, iv{4, 3}}}, // 99,':2 3 4
	}
	for _, tc := range testCases {
		var r v
		if tc.y == nil {
			g := tc.av.(func(v, v, map[v]v) v)
			r = g(tc.f, tc.x, nil)
		} else {
			g := tc.av.(func(v, v, v, map[v]v) v)
			r = g(tc.f, tc.x, tc.y, nil)
		}
		tt(t, tc.r, r, "%s %+v %+v %+v: %+v\n", tc.s, tc.f, tc.x, tc.y, tc.r)
	}
}
func TestVKt(t *testing.T) {
	testCases := []struct {
		s       string
		f       func(v, v, map[v]v) v
		a       map[v]v
		x, y, r v
	}{
		{"atx", atx, nil, iv{4, 5, 6}, 1, 5},
		{"atx", atx, nil, iv{4, 5, 6}, iv{0, 2}, iv{4, 6}},
		{"atx", atx, nil, map[v]v{"a": -1.0, "b": -2.0}, "b", -2.0},
		{"atx", atx, nil, map[v]v{"a": -1.0, "b": -2.0}, sv{"b", "a"}, fv{-2, -1}},
		// TODO atx var adv
		// TODO atx verb *
	}
	for _, tc := range testCases {
		r := tc.f(tc.x, tc.y, nil)
		tt(t, tc.r, r, "%s %+v %+v: %+v\n", tc.s, tc.x, tc.y, r)
	}
}
func TestMethod(t *testing.T) {
	testCases := []struct {
		m s
		x l
		r v
	}{
		{"F0", nil, 2.0},
		{"F1", l{2.0}, 3.0},
		{"Fn", l{5.0, 6.0, 7.0}, 19.0},
	}
	for _, tc := range testCases {
		r := cal(atx(myfloat(1.0), tc.m, nil), tc.x, nil)
		tt(t, tc.r, r, "method %s %+v: %+v\n", tc.m, tc.x, tc.r)
	}
}

func tt(t *testing.T, exp, got v, s string, a ...v) {
	printf(s, a...)
	if reflect.DeepEqual(exp, got) == false {
		_fmt.Printf("exp: %#v (%T)\n", exp, exp)
		_fmt.Printf("got: %#v (%T)\n", got, got)
		t.Fatal()
	}
}

func c(r, i float64) complex128 { return complex(r, i) }

// myint is a custom number type that is convertible.
type myint int8

// mynum is a custom vector type, that implements numeric methods.
type myvec []string

// mystruct is a custom dict type defined as a struct.
type mystruct struct {
	B bool
	F float64
	V []myint
}

// myfloat is a custom float type with methods
type myfloat float64

func (r myfloat) F0() f    { return f(r) + 1 }
func (r myfloat) F1(x f) f { return f(r) + x }
func (r myfloat) Fn(x ...f) f {
	s := f(r)
	for _, y := range x {
		s += y
	}
	return s
}

// mymap is a custom dict type defined as a map.
type mymap map[string]int

func printf(f s, v ...v) {
	if testing.Verbose() { // toggle test output
		_fmt.Printf(f, v...)
	}
}
