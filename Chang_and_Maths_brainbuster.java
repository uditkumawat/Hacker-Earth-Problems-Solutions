import java.io.*;
import java.util.*;
class problem
{
	public static void main(String args[]) throws IOException
	{
		int n=0;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		n=Integer.parseInt(br.readLine());
		ArrayList<Integer> arr=new ArrayList<Integer>();
		String str[]=br.readLine().split(" ");
		for(int i=0;i<str.length;i++)
		{
			arr.add(Integer.parseInt(str[i]));
		}
		Collections.sort(arr);
		solve(arr);
	}
	static void solve(ArrayList<Integer> arr)
	{
		int s=arr.size();
		int ldc=10000,max=0,min=0,delspan=0,tldc=0;
		for(int i=0;i<s;i++)
		{
			for(int j=s-1;j>0&&j>i;j--)
			{
				max=arr.get(j);
				min=3*arr.get(i);
				if(max-min<=0)
				{
					delspan=j-i+1;
					tldc=s-delspan;
					if(tldc<ldc)
					{
						ldc=tldc;
					}
				}
			}
		}
		System.out.println(ldc);
	}
}
