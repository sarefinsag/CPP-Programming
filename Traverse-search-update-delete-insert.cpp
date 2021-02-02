    #include <iostream>
    #include <stdlib.h>
    using namespace std;
    
    //Global Array Declaration
    int array[10];
    void DisplayArray(){
    for (int i=0;i<10;i++)
         cout<< "Array [ "<<i<<" ] = "<<array[i]<<endl;
    }
    
    // default values
    void SetDefaultValues(){
        cout<<"Defalult Values :"<<endl;
    for(int i=0;i<10;i++)
            {
             array[i]=-1;
         cout<<"array ["<<i<<"]"<<"= "<<array[i]<<endl;
            }
    }
    
    // traversing Array
    void TraverseArray(){
        cout<< "Traverse Array: ";
        for (int i=0;i<10;i++)
        cout<<array[i]<<" ";
    }

    // inserting values
    void InsertValues(){
        cout<<"Enter 10 Values "<<endl;
    for(int i=0;i<10;i++)
            {
            cin>>array[i];
            }
       cout<<"\n\t\t\tArray Values Inserted...  Successfully "<<endl;
    }

    // searching values index
    int SearchingValues(int key){
      int i; 
      for (i = 0; i < 10; i++) 
        if (array[i] == key) 
            return i; 
  
      return -1;
    }
    void SearchIndex(){
      int key;
      cout<<"Enter Value : ";
      cin>>key;
      int position = SearchingValues(key);

      if (position == - 1) 
        cout << "Element not found"; 
      else
        cout << "Element Found at Position: "<< position + 1;
    }
    // deletion values
    void DeleteValues(){
        cout<<"Enter the Index Number To Delete Value :";
        int index;
        cin>>index;
        if(index>9||index<0)
        {
            cout<<"Invalid Index Entered-> Valid Range(0-9)"<<endl;
            DeleteValues();// Recall The Function it self
        }
        else
        {
            array[index]=-1;
        }
        cout<<"\n\t\t\tArray Value Deleted...  Successfully "<<endl;
    }

    // updating values
    void UpdateValues(){
        cout<<"Enter Index Number to Update Value :";
        int index;
        cin>>index;
        if(index>9||index<0)
        {
            cout<<"Invalid Index Entered-> Valid Range(0-9)"<<endl;
            UpdateValues();// Recall The Function it self
        }
        else
        {
     cout<<"Enter the New Value For Index array[ "<<index<<" ] = ";
            cin>>array[index];
      cout<<"\n\t\t\tArray Updated...  Successfully "<<endl;
        }
    }

    // main function
    int main()
    {
        char option;
        SetDefaultValues();
      
        do
        {
        cout<<"\n\t\t\tEnter 1 to Traverse Array\n\t\t\tEnter 2 to Insert Values\n\t\t\tEnter 3 to Delete Values\n\t\t\tEnter 4 to Update Values\n\t\t\tEnter 5 to Search Value Position\n\n\t\t\t or Enter E to EXIT\n\n\t\t\t  Enter Option: ->  ";
        cin>>option;
        if(option=='1')
          {
            cout<<"Array After Traversing Array :"<<endl;
            TraverseArray();
          }
        else if(option=='2')
          {
            cout<<"Insert Function Called"<<endl;
            InsertValues();
            cout<<"Inserted Values :"<<endl;
            DisplayArray();
          }
        else if(option=='3')
          {
           DeleteValues();
           cout<<"Array After Deleting Values :"<<endl;
           DisplayArray();
          }
        else if(option=='4')
          {
           UpdateValues();
           cout<<"Updated Array :"<<endl;
           DisplayArray();
          }
        else if(option=='5')
          {
            SearchIndex();
          }
        else if(option!='e'&&option!='E')
          {
       cout<<"\n\n\t\t\tSelect A Valid Option From Below\n\n";
          }
        }
        while(option!='e'&&option!='E');
        system("cls");// To Clear The Screen

        cout<<"\n\n\n\n\n\n\n\n\n\n\t\tProgram Ended Press Any Key To Exit Screen.....\n\n\n\n\n\n\n\n\n\n\n\n"<<endl;
        return 0;
    }