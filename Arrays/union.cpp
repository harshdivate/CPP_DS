vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    vector<int> temp;
    while(i<n && j<m){
      if(a[i]==b[i]){
        if(temp.empty()){
           temp.push_back(a[i]);
        }
        else{
         
          if(temp.back()!=a[i]){
            temp.push_back(a[i]);
          }
        }
        i++;
      j++;
      }
      
      
    
    
    else if(a[i]>b[j]){
      if(temp.empty()){
        temp.push_back(b[j]);
        
      }
      else{
        if(temp.back()!=b[j]){
          temp.push_back(b[j]);
        }
      }
      j++;
    }
    else{
      if(temp.empty()){
        temp.push_back(a[i]);
        
      } else {
        if(temp.back()!=a[i]){
          temp.push_back(a[i]);
        }
      }
      i++;
    }
    }

    while(i<n){
      if(temp.back()!=a[i]){
        temp.push_back(a[i]);
      }
      i++;
    }
    while(j<m){
      if(temp.back()!=b[j]){
        temp.push_back(b[j]);
      }
      j++;
    }
    return temp;
}

int main(){
    vector<int> arr1= {1,2,3,4,5}  ;
    vector<int> arr2 = {2,3,4,4,5};
    vector<int> temp=sortedArray(arr1,arr2);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}