static ArrayList <Integer> max_of_subarrays(int arr[], int n, int k)
    {
        ArrayList<Integer> l = new ArrayList<>();
        
        Deque<Integer> q = new LinkedList<>();
        
        int i;
        for(i=0;i<k;i++){
            while(!q.isEmpty()&&arr[i]>=arr[q.peekLast()])
                q.removeLast();
            q.addLast(i);
        }
        
        for(;i<n;i++){
            l.add(arr[q.peek()]);
            while(q.peek()<=i-k)
                q.removeFirst();
            while(!q.isEmpty()&&arr[i]>=arr[q.peekLast()])
                q.removeLast();
            q.addLast(i);
            
        }
        l.add(arr[q.peek()]);
        
        return l;
    }