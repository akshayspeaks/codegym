import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Created by messi on 16/5/17.
 */
class wsites01 {
    public static void main(String[] args) throws IOException {
        int n,i;
        String in;
        BufferedReader br;
        br = new BufferedReader(new FileReader(args[0]));
//        br = new BufferedReader(new BufferedReader(new InputStreamReader(System.in)));
        Trie allowed=new Trie();
        Trie blocked=new Trie();
        n=Integer.parseInt(br.readLine());
        for(i=0;i<n;i++){
            in=br.readLine();
            if(in.charAt(0)=='+'){
                allowed.insert(in.substring(2));
            }
            else{
                blocked.insert(in.substring(2));
            }
        }

        //Solving
        //solve();
        ArrayList<String> pref = new ArrayList<String>();
        solve(pref,blocked.root,allowed.root,"");
        int preSize=pref.size();
        if(preSize==0)
            System.out.print(-1);
        else {
            System.out.println(preSize);
            for (String pr : pref) {
                System.out.println(pr);
            }
        }
    }
    private static int prefCount=0;
    private static void solve(ArrayList<String> pref, TrieNode bl, TrieNode al, String tracer){
        if(bl.isTerminating()) {
            prefCount = -1;
            pref.clear();
            return;
        }

        for(char i='a';i<='z';i++){
            if(prefCount==-1)
                return;
            if(bl.trieNodes[i-'a']!=null){
                if(al.trieNodes[i-'a']!=null){
                    solve(pref,bl.next(i),al.next(i),tracer+i);
                }
                else{
                    pref.add(tracer+i);
                    prefCount++;
                }
            }
        }
    }
}

class Trie {
    final TrieNode root;


    Trie() {
        this.root = new TrieNode();
    }

    public boolean query(final String s) {
        TrieNode current = root;
        for (int i = 0; i < s.length(); i++) {
            if (current == null) {
                return false;
            }
            current = current.next(s.charAt(i));
        }
        return current.terminating;
    }

    void insert(final String s) {
        TrieNode current = root;
        for (int i = 0; i < s.length(); i++) {
            if (current.trieNodes[s.charAt(i) - 'a'] == null) {
                current.trieNodes[s.charAt(i) - 'a'] = new TrieNode();
            }
            current = current.next(s.charAt(i));
        }
        current.setTerminating(true);
    }

    private void delete(final String s) {
        TrieNode current = root;
        for (int i = 0; i < s.length(); i++) {
            if (current == null) {
                throw new RuntimeException();
            }
            current = current.next(s.charAt(i));
        }
        if (current.isTerminating()) {
            current.setTerminating(false);
        } else {
            throw new RuntimeException();
        }
    }

    public void update(final String old, final String newString) {
        delete(old);
        insert(newString);
    }
}

class TrieNode {
    boolean terminating;
    final TrieNode[] trieNodes = new TrieNode[26];

    TrieNode next(final char c) {
        return trieNodes[c - 'a'];
    }

    boolean isTerminating(){
        return terminating;
    }

    void setTerminating(boolean ter){
        terminating=ter;
    }
}
