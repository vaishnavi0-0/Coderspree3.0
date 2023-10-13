def printTriangle(n):
  """Prints a star pattern based on the input integer n.

  Args:
    n: An integer between 1 and 20.
  """

  # Check if the input integer is valid.
  if n < 1 or n > 20:
    raise ValueError("The input integer must be between 1 and 20.")

  # Print the upper triangle.
  for i in range(n):
    for j in range(i + 1):
      print("*", end="")
    print()

  # Print the lower triangle.
  for i in range(n - 1, -1, -1):
    for j in range(i):
      print("*", end="")
    print()