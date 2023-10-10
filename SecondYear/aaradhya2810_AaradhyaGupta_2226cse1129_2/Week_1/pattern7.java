for (int i = 1; i <= n; i++) {
      for (int s = 1; s <= n - i; s++) {
        System.out.print(" ");
      }
      for (int j = i; j >= 1; j--) {
        System.out.print("* ");
      }
      System.out.print("\n");
    }
    for (int i = n; i >= 1; i--) {
      for (int s = 1; s <= n - i; s++) {
        System.out.print(" ");
      }
      for (int j = i; j >= 1; j--) {
        System.out.print("* ");
      }
      System.out.print("\n");
    }