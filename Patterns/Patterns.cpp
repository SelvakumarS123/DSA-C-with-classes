//1
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*	";
        }
        cout<<endl;
    }

}

//2

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*	";
        }
        m--;
        cout<<endl;
    }

}

//3

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=m)
            {
                cout<<"*	";
            }
            else
            {
                cout<<"	";
            }
        }
        m--;
        cout<<endl;
    }
}

//4

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>=i)
            {
                cout<<"*	";
            }
            else
            {
                cout<<"	";
            }
        }
        cout<<endl;
    }
}

//5

#include <iostream>
using namespace std;

int main()
{
    int n,sp,st;
    cin >> n;
    sp=n/2; //2
    st=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            cout<<"\t";
        }

        for(int j=1;j<=st;j++)
        {
            cout<<"*\t";
        }
        cout<<endl;
        if(i<=n/2)
        {
            sp--;
            st+=2;
        }
        else
        {
            sp++;
            st-=2;
        }

    }
}

//6

#include <iostream>
using namespace std;

int main()
{
    int n,sp,st;
    cin>>n;
    sp=1;
    st=(n/2)+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=st;j++)
        {
            cout<<"*	";
        }
        for(int j=1;j<=sp;j++)
        {
            cout<<"	";
        }
        for(int j=1;j<=st;j++)
        {
            cout<<"*	";
        }
        cout<<endl;

        if(i<(n/2)+1)
        {
            sp+=2;
            st--;
        }
        else
        {
            sp-=2;
            st++;
        }
    }

}

//7

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,sp,st;
    cin >> n;
    sp=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            cout<<"\t";
        }
        cout<<"*\t";
        cout<<endl;
        sp++;
    }
}

//8

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,sp1,sp2,st;
    cin >> n;
    sp1=n-1;
    sp2=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp1;j++)
        {
            cout<<"\t";
        }
        cout<<"*\t";
        for(int j=1;j<=sp2;j++)
        {
            cout<<"\t";
        }
        cout<<endl;
        sp1--;
        sp2++;
    }
}

//8->java

/* import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int nsp = n - 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nsp; j++) {
                System.out.print("\t");
            }

             System.out.print("*\t");

            nsp--;
            System.out.println();
        }

    }
} */

//10

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,sp1,sp2,st1=1,st2=1;
    cin >> n;
    sp1=n/2;
    sp2=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp1;j++)
        {
            cout<<"\t";
        }

        if (i==1||i==n)
        {
            cout<<"*\t";
        }
        else
        {
            cout<<"*";
        }

        for(int j=1;j<=sp2;j++)
        {
            cout<<"\t";
        }
        if (i!=1&&i!=n)
        {
            cout<<"*\t";
        }
        cout<<endl;
        if(i<=(n/2))
        {
            sp2+=2;
            sp1--;
        }
        else
        {
            sp1++;
            sp2-=2;
        }
    }

}

//11

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,m;
    cin >> n;
    m=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<m<<"\t";
            m++;
        }
        cout<<endl;
    }
}

//12

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,n1=1,n2=1,n3,k;
    cin >> n;
    k=0;
    for(int i=1;i<=2;i++)
    {
        if(i==1)
        {
            cout<<k<<"\t";
            k++;
        }
        else if(i==2)
        {
            cout<<k<<"\t";
            cout<<k<<"\t";
        }
        cout<<endl;
    }
    for(int i=3;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            n3=n1+n2;
            cout<<n3<<"\t";
            n1=n2;
            n2=n3;
        }
        cout<<endl;
    }
}

//13

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int icj=1;
        for(int j=0;j<=i;j++)
        {
            cout<<icj<<"\t";
            icj= (icj * (i - j)) / (j + 1);
        }
        cout<<endl;
    }
    
}

//14

#include<iostream>
using namespace std;
int main(int agrc, char** argv){
    int n;
    cin >> n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    
}

//15

#include <iostream>

using namespace std;

int main()
{
    int n,sp,st=1,val;
    cin >> n;
    sp=n/2;
    val=1;
    for(int i=1; i<=n; i++)
    {
        int colval=val;
        for(int j=1;j<=sp;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=st;j++)
        {
            cout<<colval<<"\t";
            if(j<=st/2)
            {
                colval++;
            }
            else{
                colval--;
            }
        }
        cout<<endl;

        if(i<=n/2)
        {
            sp--;
            st+=2;
            val++;
        }
        else{
            sp++;
            st-=2;
            val--;
        }

    }

}

//16

#include <iostream>

using namespace std;

int main()
{
    int n,sp,st1=1,st2=1,colval=1;
    cin >> n;
    sp=2*n-3;
    for(int i=1; i<=n; i++)
    {
        int cval=1;
        for(int j=1;j<=st1;j++)
        {
            cout<<cval<<"\t";
            if(j<n)
            {
                cval++;
            }
        }

        for(int j=1;j<=sp;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=st2;j++)
        {
            cval--;
            cout<<cval<<"\t";

        }
        cout<<endl;

        if(i<n-1)
        {
            sp-=2;
        }
        else{
            sp-=1;
        }
        if(i==n-1)
        {
        }
        else{
            st2++;
        }
        st1++;
    }

}

//17

#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n,sp,st;
    cin >> n;
    sp=n/2;
    st=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            if(i==(n/2)+1)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }

        }
        for(int j=1;j<=st;j++)
        {
            cout<<"*\t";
        }
        cout<<endl;
        if(i<=n/2)
        {
            st++;
        }
        else
        {
            st--;
        }
    }

}

//17->java
/* 
import java.util.*;

public class Main {
  public static void main(String[] args)
  {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int sp = n / 2; //variable to store space count
    int st = 1;     //variable to store star count
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= sp ; j++) //printing whitespaces
      {
        System.out.print("	");
      }
      for (int j = 1 ; j <= st; j++) // printing the stars
      {
        System.out.print("*	");
      }
      if ( i <= n / 2)    //checking if less than or equal to middle row
      {
        st++;       //increasing stars till middle row
      }
      else {
        st--;       //decreasing stars post middle row
      }
      System.out.println(); //Changing the row
    }
  }
} */

//18

#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n,sp,st;
    cin >> n;
    sp=0;
    st=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=st;j++)
        {
            if(i > 1 && i <= n / 2 && j > 1 && j <= st-1)
            {
                cout<<"\t";
            }
            else
            {
                cout<<"*\t";
            }
        }
        if(i<=n/2)
        {
            st-=2;
            sp++;
        }
        else
        {
            st+=2;
            sp--;
        }
        cout<<endl;

    }

}

//19

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1||j==n/2+1)
            {
                cout<<"*\t";
            }
            else if(i==1&&j<=n/2+1)
            {
                cout<<"*\t";
            }
            else if(j==n&&i<=n/2+1)
            {
                cout<<"*\t";
            }
            else if(j==1&&i>n/2+1)
            {
                cout<<"*\t";
            }
            else if(i==n&&j>n/2+1)
            {
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }

}

//20

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==n)
            {
                cout<<"*\t";
            }
            else if(i==n/2+1&&j==n/2+1)
            {
                cout<<"*\t";
            }
            else if(i>n/2+1&&i>>j&&i!=n)
            {
                cout<<"*\t";
            }
            else if(i>n/2+1&&j>=i&&i!=n)
            {
                cout<<"*\t";
            }
            else{cout<<"\t";}
        }
        cout<<endl;
    }

}

//20->java
/* 
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j == 1 || j == n) {
                    System.out.print("*\t");
                } else if (i > n / 2 && (i == j || i + j == n + 1)) {
                    System.out.print("*\t");
                } else {
                    System.out.print("\t");
                }
            }

            System.out.println();
        }

    }
} */

// Selvakumar S
