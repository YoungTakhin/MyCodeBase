/**
 * 名称: MaxSubsectionSum.java
 * 用途: 分治法最大子段和
 * 作者: 杨得轩  201613446207
 * 移植:	蔡本豪  （17级）
 * 日期: 2018年4月11日 下午4:57:21
 */
public class MaxSubsectionSum {
	final static int N = 10;
	final static int LIMIT = 10;
	static int[] array = new int[N];

	public static void main(String[] args) {
		Array.generationArray();
		Array.printArray();
		System.out.println();
		System.out.println("最大子段和：" + maxSubsectionSum(array, 0, N - 1));
		System.out.println();
		
	}
	
	static class Array{
		public static int[] generationArray() {
			for(int i = 0; i < N; i++) {
				array[i] = (int)((Math.random() * 32768 % LIMIT) - (LIMIT / 2));
			}
			
			return array;
		}
		
		public static void printArray() {
			System.out.println("数组：");
			for (int i = 0; i < N; i++) {
				System.out.print(array[i] + "\t");
			}

			System.out.println();
		}
	}
	
	static class Max {
		public static int max(int a, int b) {
			return a < b ? b : a;
		}
		
		public static int max(int a, int b, int c) {
			return a < (b < c ? c : b) ? (b < c ? c : b) : a;
		}
	}
	
	public static int maxSubsectionSum(int[] a, int left, int right) {
		if(left == right) {
	        return Max.max(a[left], 0);
		}
		
		int mid = (left + right) / 2;
	    int leftMax = maxSubsectionSum(a, left, mid); //求左边最大子段和
	    int rightMax = maxSubsectionSum(a, mid + 1, right); //求右边最大子段和

	    int sum = 0;
	    int tmpLeftMax = 0;
	    for(int i = mid; i >= left; i--) {
	        sum += a[i];
	        if(sum > tmpLeftMax) {
	            tmpLeftMax = sum;
			}
	    }
	    
	    /*求中间最大子段和*/
	    sum = 0;
	    int tmpRightMax = 0;
	    for(int i = mid + 1; i <= right; i++) {
	        sum += a[i];
	        if(sum > tmpRightMax) {
	            tmpRightMax = sum;
			}
	    }

	    int max = Max.max(leftMax, rightMax, tmpLeftMax + tmpRightMax);
	    return max;
	}
}
