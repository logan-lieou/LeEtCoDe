quicksort :: Ord a => [a] -> [a]
quicksort (x:xs) = [z | z <- xs, z > x] ++ [x] ++ [z | z <- xs, z < x]

main :: IO()
main = do
  let x = quicksort [1, 3, 1, 4, 1, 5, 9]
  print x
