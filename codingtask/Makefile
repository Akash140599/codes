CC = gcc
CFLAGS = -Wall -Wextra
TARGET = programs
SRCS = main.c 01_Area_circle.c 02_peri_circle.c 03_area_rectangle.c 04_natural_or_not.c 05_add_two_number.c 06_factorial.c 07_big_of_two.c 08_real_or_not.c 09_greatest_of_three.c 10_rec_of_stars.c 11_pattern1.c 12_pattern2.c 13_pattern3.c 14_pattern4.c 15_pattern5.c 16_pattern6.c 17_factors.c 18_prime.c 19_reverse_no.c 20_fibonacci.c 21_gcd.c 22_shoppingbill.c 23_palindrome_or_not.c 24_4bit_bcd.c 25_deci_hex.c 26_sorting.c 27_hex_dec.c 28_num_zero.c 29_area_sq.c 30_peri_sq.c 31_avg_3No.c 32_sum_5_sub.c 33_cal_resistance.c 34_cal_power.c 35_sum_current.c 36_wheatstone.c 37_eligible_DL.c 38_grade_of_stud.c 39_kirchoff.c 40_Even_odd.c 41_age_of_person.c 42_1st_20_natural_no.c 43_1st_10_odd.c 44_60_odd.c 45_even_no_inrange.c 46_even_no_inrange_reverse.c 47_natural_in_reverse.c 48_mul_of5.c 49_mul_of3.c 50_mul_table_in_range.c 
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
