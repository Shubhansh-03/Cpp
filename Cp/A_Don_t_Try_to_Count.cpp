#include<bits/stdc++.h>

using namespace std;

int main()

{

    #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

    #endif

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int n,m;

        cin>>n>>m;

        string x,s;

        cin>>x>>s;

        if(n==m && x.find(s) != string::npos){

            cout<<0<<endl;

        }

        else if(n==m){

            x += x;

            if(x.find(s) != string::npos){

                cout<<1<<endl;

            }

            else cout<<-1<<endl;

        }

        else if(n<m){

            int cnt = 0;

            while(x.length()<m){

                x += x;

                cnt++;

            }

            if(x.find(s) != string::npos){

                cout<<cnt<<endl;

            }

            else{

                x += x;

                if(x.find(s) != string::npos){

                    cout<<cnt + 1<<endl;

                }

                else cout<<-1<<endl;

            }

        }

        else{

            if(x.find(s) != string::npos){

                cout<<0<<endl;

            }

            else{

                x += x;

                if(x.find(s) != string::npos){

                    cout<<1<<endl;

                }

                else cout<<-1<<endl;

            }

        }

    }

    return 0;

}