
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

// https://agc022.contest.atcoder.jp/tasks/agc022_a
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        Set set = new HashSet<Character>();
        char[] chars = s.toCharArray();
        for (char c : chars) {
            set.add(c);
        }

        // |S|<26 ならば語尾に 1 文字追加
        for (char c = 'a'; c <= 'z'; c++) {
            // 多彩な単語であるか？
            if (!set.contains(c)) {
                System.out.println(s + c);
                return;
            }
        }

        // |S|=26 ならば S の次に載っている単語は 1 文字以上短い
        while (s.length() > 1) {
            s = s.substring(0, s.length() - 1);
            set = new HashSet<Character>();
            chars = s.toCharArray();
            for (char c : chars) {
                set.add(c);
            }
            for (char c = (char) (chars[chars.length - 1] + 1); c <= 'z'; c++) {
                if (!set.contains(c)) {
                    chars[chars.length - 1] = c;
                    System.out.println(new String(chars));
                    return;
                }
            }
        }

        // 辞書順で最も大きい多彩な単語
        System.out.println("-1");
    }
}
