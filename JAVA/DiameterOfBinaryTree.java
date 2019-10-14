import java.util.*;
import java.lang.*;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    public TreeNode(int val){
        this.val = val;
    }
}


public class DiameterOfBinaryTree{
    int ans = 0;

    public int diameterOfBinaryTree(TreeNode root){
        if(root == null) return 0;
        TreeNode left = diameterOfBinaryTree(root.left);
        TreeNode right = diameterOfBinaryTree(root.right);
        ans  = Math.max(left+right, ans);
        return 1 + Math.max(left, right);
    }

    public static void main(String[] args){
        diameterOfBinaryTree(root);
        System.out.println(ans);
    }

}