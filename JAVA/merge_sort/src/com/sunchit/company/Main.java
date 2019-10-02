package com.sunchit.company;

import java.util.*;

public class Main {

    static void mergesort(int[] a, int low, int high) {
        int mid;
        if (low < high) {
            mid = (low + high) / 2;
            mergesort(a, low, mid);
            mergesort(a, mid + 1, high);
            merge(a, low, mid, high);
        }
    }

    static void merge(int a[], int low, int mid, int high) {
        int k = low;
        int i = low;
        int j = mid + 1;
        int[] c = new int[1000];
        while ((i <= mid) && (j <= high)) {
            if (a[i] < a[j]) {
                c[k] = a[i];
                i++;
            } else {
                c[k] = a[j];
                j++;
            }
            k++;
        }
        while (i <= mid) {
            c[k] = a[i];
            k++;
            i++;
        }
        while (j <= high) {
            c[k] = a[j];
            k++;
            j++;
        }
        for (i = low; i <= high; i++)
            a[i] = c[i];
    }

    public static void main(String[] args) {
        Scanner sn = new Scanner(System.in);
        int n, i;
        System.out.println("Enter the number of elements");
        n = sn.nextInt();
        Random r = new Random();
        int[] a = new int[n];
        for (i = 0; i < n; i++)
            a[i] = r.nextInt(100);
        System.out.println("UnSorted List:");
        for (i = 0; i < n; i++)
            System.out.print(a[i] + "\t");
        System.out.println();
        long start = System.nanoTime();
        mergesort(a, 0, n - 1);
        long end = System.nanoTime();
        System.out.println("Sorted List:");
        for (i = 0; i < n; i++) {
            System.out.print(a[i] + "\t");
        }
        System.out.println();
        System.out.println("Time Taken" + (end - start) + "ns");

    }
}
