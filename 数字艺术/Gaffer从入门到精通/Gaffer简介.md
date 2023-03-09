```

import Gaffer //python

# 获取场景中所有的Sphere节点
sphereNodes = Gaffer.MetadataAlgo.getChildNodes( Gaffer.Box.create( Gaffer.ScriptNode() ), instanceOnly = True, type = "GafferScene.Sphere" )

# 遍历所有的Sphere节点，将radius属性设置为2.0
for sphereNode in sphereNodes:
    radiusPlug = sphereNode['radius']
    radiusPlug.setValue( 2.0 )
```
