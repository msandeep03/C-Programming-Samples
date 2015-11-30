package com.test;

public class QuickSort {
	public static void main(String[] args) {
		QuickSort qs = new QuickSort();
		int[] a = new int[] { 6, 10, 13, 5, 8, 3, 2, 11 };
		qs.quickSort(a, 0, a.length - 1);
	}

	public int partition(int[] a, int p, int q) {
		int x = a[p];
		int i = p;
		for (int j = i + 1; j &lt;= q; j++) {
			if (a[j] &lt;= x) {
				i += 1;
				swap(a, i, j);
			}
		}
		swap(a, p, i);
		System.out.println("Array after iteration: ");
		printArray(a);
		return i;
	}

	public void quickSort(int[] a, int p, int q) {
		if (p &lt; q) {
			int r = partition(a, p, q);
			quickSort(a, p, r - 1);
			quickSort(a, r + 1, q);
		}

	}

	public void swap(int[] a, int i, int j) {
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	public void printArray(int[] a) {
		for (int i = 0; i &lt; a.length; i++) {
			System.out.print(a[i] + "  ");
		}
		System.out.println();
	}
}
