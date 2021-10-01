import Data.Graph as Graph

data Grph node key = Grph
  { _graph :: Graph
  , vertices :: Vertex -> (node, key, [key])
  }

fromList :: Ord key => [(node, key, [key])] -> Grph node key
fromList = uncurry Grph . graphFromEdges'
