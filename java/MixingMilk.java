package java;
import java.io.*;
import java.util.*;

public class MixingMilk {

	public static void main(String[] args) throws IOException {
		Kattio io = new Kattio("mixmilk");

		// capacity[i] is the maximum capacity of bucket i
		int[] capacity = new int[3];
		// milk[i] is the current amount of milk in bucket i
		int[] milk = new int[3];

        // read inputs
		for (int i = 0; i < 3; i++) {
			capacity[i] = io.nextInt();
			milk[i] = io.nextInt();
		}

		for (int i = 0; i < 100; i++) {
			int bucket1 = i % 3;
			int bucket2 = (i + 1) % 3;

			/*
			 * The amount of milk to pour is the minimum of the remaining milk
			 * in bucket 1 and the available capacity of bucket 2
			 */
			int amt = Math.min(milk[bucket1], capacity[bucket2] - milk[bucket2]);

			milk[bucket1] -= amt;
			milk[bucket2] += amt;
		}

		for (int m : milk) { io.println(m); }
		io.close();
	}

	//BeginCodeSnip{Kattio}
	static class Kattio extends PrintWriter {
		private BufferedReader r;
		private StringTokenizer st;
		// standard input
		public Kattio() { this(System.in, System.out); }
		public Kattio(InputStream i, OutputStream o) {
			super(o);
			r = new BufferedReader(new InputStreamReader(i));
		}
		// USACO-style file input
		public Kattio(String problemName) throws IOException {
			super(problemName + ".out");
			r = new BufferedReader(new FileReader(problemName + ".in"));
		}
		// returns null if no more input
		public String next() {
			try {
				while (st == null || !st.hasMoreTokens())
					st = new StringTokenizer(r.readLine());
				return st.nextToken();
			} catch (Exception e) { }
			return null;
		}
		public int nextInt() { return Integer.parseInt(next()); }
		public double nextDouble() { return Double.parseDouble(next()); }
		public long nextLong() { return Long.parseLong(next()); }
	}
	//EndCodeSnip
}