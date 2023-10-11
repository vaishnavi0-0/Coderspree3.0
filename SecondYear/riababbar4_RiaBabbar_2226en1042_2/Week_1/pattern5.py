def printTriangle(n):
  """Prints a triangle with n rows of stars.

  Args:
    n: The number of rows in the triangle.
  """

  for i in range(n):
    # Print i stars.
    for j in range(i + 1):
      print("*", end='')

    # Print a newline.
    print()