int n;
    cout<<"Enter the number for finding is it composite number : "<<endl;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        cout<<n<<" is a composite number."<<endl;
       
        else{
            cout<<n<<" is Prime number."<<endl;
        }
        break;
    }

    