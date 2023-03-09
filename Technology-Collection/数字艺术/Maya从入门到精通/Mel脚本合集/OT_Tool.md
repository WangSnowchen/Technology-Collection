以下内容是在三只松鼠公司工作时，用Maya mel脚本所写的窗口UI，只有一个框架没有具体功能

```python
//将整个UI界面的长宽比作为整数型变量方便修改
int $wh_w = 320;
int $wh_h = 690;
//创建基础窗口
if(`window -ex tapWin`)
{deleteUI tapWin;}
//如果场景里已经存在tapwin就删除tapwin
window
    //开启菜单栏
    -menuBar true
    //命名
    -t "OT_Tool_v1.00"
    -rtf true
    //长宽
    -wh $wh_w $wh_h
    //是否可以缩放
    -s 0 tapWin;
    menu -label "File";
        menuItem -label "Open Scene" -c OpenScene;
            menuItem -divider true -dividerLabel "Import/Export";
                menuItem -label "ExportSelection" -c ExportSelection;
    menu -label "Edit";
        menuItem -divider true -dividerLabel "Editors";
            menuItem -label "Outliner" -c OutlinerWindow;
            menuItem -label "Spread Sheet" -c SpreadSheetEditor;
            menuItem -label "Reference Editor" -c ReferenceEditor;
        menuItem -divider true -dividerLabel "Loaded Plugins";
            menuItem -label "PluginManager" -c PluginManager;
            menuItem -label "Loaded redshift" -c "LoadedRS";
            menuItem -label "Loaded Abc" -c "LoadedAbc";
    menu -label "Help";
        menuItem -label "Log" -c "HelpLog";
string $Rendertabs = `tabLayout`;
string $Rendersetchild = `columnLayout -adjustableColumn true`;
tabLayout -edit -tabLabel $Rendersetchild "Render Setting" $Rendertabs;
rowColumnLayout -numberOfColumns 1;
scrollLayout -w 340 -height 650;
columnLayout -adjustableColumn true;
string $FrameCommon = `frameLayout -label "Common" -backgroundColor 0 0 0 -collapsable true -w 300`;
string $FL = `formLayout`;
string $attGifp = `attrControlGrp -l "File name" -attribute "defaultRenderGlobals.ifp"`;
string $attGwidth = `attrControlGrp -l "Width" -attribute "defaultResolution.width"`;
string $attGheight = `attrControlGrp -l "Height" -attribute "defaultResolution.height"`;
string $attGPixelAspect = `attrControlGrp -l "ratio" -attribute "defaultResolution.pixelAspect"`;
string $attGani = `attrControlGrp -l "Animation" -attribute "defaultRenderGlobals.animation"`;
string $attGsF = `attrControlGrp -l "Start" -attribute "defaultRenderGlobals.startFrame"`;
string $attGeF = `attrControlGrp -l "End" -attribute "defaultRenderGlobals.endFrame"`;
//string $attGifp
setParent $FrameCommon;
    formLayout
        -edit
        //File Prefix
        -attachNone $attGifp "top"
        -attachForm $attGifp "left" -90
        //width
        -attachControl $attGwidth "top" 5 $attGifp
        -attachForm $attGwidth "left" -90
        //height
        -attachControl $attGheight "top" 5 $attGwidth
        -attachForm $attGheight "left" -90
    //Aspect ratio
        -attachControl$attGPixelAspect "top" 5 $attGheight
        -attachForm $attGPixelAspect "left" -90
        //animation
        -attachControl $attGani "top" 5 $attGPixelAspect
        -attachForm $attGani "left" -90
    //strart
        -attachControl$attGsF "top" 5 $attGani
        -attachForm $attGsF "left" -90
    //end
        -attachControl$attGeF "top" 5 $attGsF
        -attachForm $attGeF "left" -90
    $FL;
setParent ..;
string $FrameRender =`frameLayout -label "Render" -backgroundColor 0 0 0 -collapsable true -w 300`;
setParent $FrameRender;
//分层参数
rowColumnLayout
    -numberOfRows 3
    -cat 1 "left" 20;
checkBox -label "Motion Blur" -po 0;
rowColumnLayout
    -numberOfRows 1
    -cat 1 "left" 28;
attrEnumOptionMenu -label "BG RenderLayer" -po 0 -ei 0 "Low" -ei 1 "Medium" -ei 2 "High";
button -l "Apply";
setParent ..;
//=====================================================
setParent $FrameRender;
rowColumnLayout
    -numberOfRows 3
    -cat 1 "left" 20;
checkBox -label "Motion Blur" -po 0;
rowColumnLayout
    -numberOfRows 1
    -cat 1 "left" 30;
attrEnumOptionMenu -label "ch RenderLayer" -po 0 -ei 0 "Low" -ei 1 "Medium" -ei 2 "High";
button -l "Apply";
setParent ..;
//=====================================================
setParent $FrameRender;
rowColumnLayout
    -numberOfRows 3
    -cat 1 "left" 20;
checkBox -label "Motion Blur" -po 0;
rowColumnLayout
    -numberOfRows 1
    -cat 1 "left" 20;
attrEnumOptionMenu -label "OCC RenderLayer" -po 0 -ei 0 "Low" -ei 1 "Medium" -ei 2 "High";
button -l "Apply";
setParent ..;
//=====================================================
setParent $FrameRender;
rowColumnLayout
    -numberOfRows 3
    -cat 1 "left" 20;
checkBox -label "Motion Blur" -po 0;
rowColumnLayout
    -numberOfRows 1
    -cat 1 "left" 2;
attrEnumOptionMenu -label "Shadow RenderLayer" -po 0 -ei 0 "Low" -ei 1 "Medium" -ei 2 "High";
button -l "Apply";
setParent ..;
//=====================================================
setParent ..;
setParent ..;
string $FrameTools = `frameLayout -label "Tools" -backgroundColor 0 0 0 -collapsable true -w 300`;
setParent $FrameTools;
columnLayout -adjustableColumn true;
button -l "Clear All Windows" -h 40 -c "ClearShowviews";
separator -height 8 -st none;
button -l "Create Object ID" -h 40 -c "CreatRSID";
separator -height 8 -st none;
button -l "Unlock Model" -h 40 -c "";
separator -height 8 -st none;
button -l "Import PoseLT" -h 40 -c "PoseLT";
setParent ..;
window -e -wh $wh_w $wh_h tapWin;
showWindow tapWin;
```
