package com.sunchit.company;

import java.util.Random;
import java.util.Scanner;

public class Main {
    static int max = 5000;

    public static int partition(int a[], int low, int high) {
        int i, j, key, temp;
        i = low;
        j = high + 1;
        key = a[low];
        while (i <= j) {
            do {
                i++;
            } while (a[i] <= key && i <= high);
            do {
                j--;
            } while (a[j] > key);
            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[low];
        a[low] = a[j];
        a[j] = temp;
        return j;
    }

    public static void qs(int a[], int low, int high) {
        int mid;
        if (low < high) {
            mid = partition(a, low, high);
            qs(a, low, mid - 1);
            qs(a, mid + 1, high);
        }
    }

    public static void main(String[] args) {
        Scanner sn = new Scanner(System.in);
        Random rand = new Random();
        int n, i;
        int a[] = new int[max];
        long start, end;
        System.out.println("Enter the number of elements");
        n = sn.nextInt();
        for (i = 0; i < n; i++)
            a[i] = rand.nextInt(100);
        for (i = 0; i < n; i++)
            System.out.print(a[i] + "\t");
        System.out.println();
        start = System.nanoTime();
        qs(a, 0, n - 1);
        end = System.nanoTime();
        System.out.println("Sorted List:");
        for (i = 0; i < n; i++)
            System.out.print(a[i] + "\t");
        System.out.println();
    }
}
