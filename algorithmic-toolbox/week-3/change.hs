-- by Kirill Elagin

denoms :: Int -> Int
denoms m | m >= 10   = 10
         | m >= 5    = 5
         | otherwise = 1

dispense :: Int -> (Int, Int)
dispense m = (q, r)
             where q = m `div` i
                   r = m - q*i
                   i = denoms m

get_change :: Int -> Int
get_change 0 = 0
get_change m = q + get_change r
                where (q, r) = dispense m

main :: IO ()
main = do
  [m] <- fmap words getLine
  print $ get_change (read m)
