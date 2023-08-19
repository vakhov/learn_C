all: nc nc2 nc_example print_nl wc

nc:
	cc nc.c -o nc

nc2:
	cc nc2.c -o nc2

nc_example:
	cc nc_example.c -o nce

print_nl:
	cc print_nl.c -o print_nl

example_print_nl:
	./print_nl < wc_example.txt

.PHONY: wc
wc:
	cc wc.c -o wc

example_wc:
	./wc < wc_example.txt