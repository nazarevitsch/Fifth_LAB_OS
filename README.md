**Fifth LAB OS**

Int this lab we have to optimize our code.

Firstly we have something like this,
But int this code we have one bad place,
when we use for we want to iterate every
element of two dimension array, but we iterate it
out of order, thats why it could be slow.

static void Main(string[] args)
        {
            int[,,] a = new int[10,10];
            int res = 0;

            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                        a[j,i]++;
                }
            }

        }
        
   
We can solve it with help of swap i and j.