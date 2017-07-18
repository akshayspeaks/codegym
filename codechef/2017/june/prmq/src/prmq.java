import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.stream.Stream;

import static java.lang.Integer.parseInt;
import static java.util.stream.Collectors.toMap;


/**
 * Created by akshay on 29/6/17.
 */
class prmq {
    static int sieve[]=new int[1000001];
    private static facNode segmentTree[],fArr[];
    private static void initSieve(){
        int i,j;
        sieve[1]=1;
        for(i=2;i<1000001;i+=2){
            sieve[i]=2;
        }

        for(i=3;i<100001;i+=2){
            if(sieve[i]==0){
                j=i;
                while(j<100001) {
                    sieve[j] = i;
                    j+=i;
                }
            }
        }
    }

    private static int logBase2(int x)
    {
        return (int)Math.ceil(Math.log(x) / Math.log(2));
    }

    public static void main(String[] args) throws IOException {
        try {
            final BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            //final BufferedReader br = new BufferedReader(new FileReader(args[0]));
            //final StringBuilder sb = new StringBuilder();
            initSieve();
            int n = parseInt(br.readLine());
            int arr[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            fArr=new facNode[n];
            for (int i=0;i<n;i++){
                fArr[i]=new facNode(arr[i]);
            }
            int segLen= (int) Math.pow(2, logBase2(n)+1)-1;
            segmentTree= new facNode[segLen];
            //System.out.println("n and segLen: "+n+" "+segLen);
            buildTree(0,n-1,0);
            int q = parseInt(br.readLine());
            int queries[];
            for (int i = 0; i < q; i++) {
                queries = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
                System.out.println(rangeQuery(0, n-1, queries[0]-1, queries[1]-1,
                        queries[2], queries[3], 0));
            }
        } catch (NumberFormatException | IOException e) {
            System.err.println(e.getMessage());
        }


    }

    static void printNodeMap(HashMap<Integer, Integer> map){
        for (int key: map.keySet()){
            System.out.print(key+":"+map.get(key)+"  ");
        }
    }
    private static void buildTree(int low, int high, int pos){
        if(low==high){
            segmentTree[pos]=new facNode(fArr[low].nodeMap);
            return;
        }
        int mid=(low+high)/2;
        buildTree(low,mid,(2*pos)+1);
        buildTree(mid+1,high,(2*pos)+2);
        segmentTree[pos]=new facNode(facNode.mergeIt(segmentTree[(2*pos)+1].nodeMap,segmentTree[(2*pos)+2].nodeMap));
    }

    private static int rangeQuery(int low, int high, int queryLow, int queryHigh, int r, int l, int pos){
        if(queryLow<=low && queryHigh>=high)
        {
            //printNodeMap(segmentTree[pos].nodeMap);
            return segmentTree[pos].nodeMap
                    .entrySet()
                    .stream()
                    .filter(p->(p.getKey() >=r && p.getKey() <=l))
                    .mapToInt(Map.Entry::getValue).sum();
        }
        if (queryLow>high || queryHigh<low){
            return 0;
        }
        int mid = (low+high)/2;
        return rangeQuery(low,mid,queryLow,queryHigh,r,l,(2*pos)+1)
                +rangeQuery(mid+1,high,queryLow,queryHigh,r,l,(2*pos)+2);
    }

}

class facNode{
    HashMap<Integer,Integer> nodeMap= new HashMap<>();

    facNode(HashMap<Integer, Integer> nodeMap) {
        this.nodeMap=nodeMap;
    }

    static int mergeMapValuesInRange(HashMap<Integer,Integer> m1, HashMap<Integer,Integer> m2, int l, int r){
//        Map<Integer, Integer> collect = Stream.concat(m1.keySet().stream(), m2.keySet().stream())
//                .distinct()
//                .filter(k1->(k1>=l&&k1<=r))
//                .collect(toMap(k -> k, k -> m1.getOrDefault(k, 0) + m2.getOrDefault(k, 0)));
//        return (HashMap<Integer, Integer>) collect;
        return Stream.concat(m1.keySet().stream(), m2.keySet().stream())
                .distinct()
                .filter(k1 -> (k1 >= l && k1 <= r))
                .collect(toMap(k -> k, k -> m1.getOrDefault(k, 0) + m2.getOrDefault(k, 0)))
                .values().stream().mapToInt(Integer::intValue).sum();
    }

    static HashMap<Integer,Integer> mergeIt(HashMap<Integer,Integer> m1, HashMap<Integer,Integer> m2){
        Map<Integer, Integer> collect = Stream.concat(m1.keySet().stream(), m2.keySet().stream())
                .distinct()
                .collect(toMap(k -> k, k -> m1.getOrDefault(k, 0) + m2.getOrDefault(k, 0)));
        return (HashMap<Integer, Integer>) collect;
    }

    facNode(int n){
        while(prmq.sieve[n]!=1){
            int el=prmq.sieve[n],exp=0;
            while(n%el==0){
                n/=el;
                exp++;
            }
//            nodeArrayList.add(new Node(el,exp));
            nodeMap.put(el,exp);
        }
    }
}