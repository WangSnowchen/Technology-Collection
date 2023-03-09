![Author](https://img.shields.io/badge/Author-wangxuechen-blue.svg)
<a href="https://space.bilibili.com/15008446"><img src="https://img.shields.io/badge/UnrealEngine-4.27.2-9cf&?logo=Unreal Engine" alt="点击前往"/></a>
> 材质编辑器UI详解  

![](https://docs.unrealengine.com/4.27/Images/RenderingAndGraphics/Materials/Editor/Interface/MaterialEditor_Windows.webp)

* ## 菜单栏
    ![](https://docs.unrealengine.com/4.27/Images/RenderingAndGraphics/Materials/Editor/Interface/Material_Editor_1.webp)

    * #### 文件（File）
        * *保存* - 保存当前正在使用的资源  
        * *另存为* - 将此资源以另一个命名保存  
        * *打开资源* - 打开全局资源选取器，以便迅速找到资源并打开正确的编辑器  
        * *保存所有* - 保存项目所有未保存的关卡的资源  
        * *选择文件进行保存* - 呼出一个对话框，以选择要为项目保存的关卡和资源  
    * #### 编辑（Edit）
        * *撤销* - 撤销最近的操作  
        * *重新执行* - 如上次执行的操作为撤销，此选项将重新执行最近的撤销  
        * *撤销历史* - 显示撤销操作的历史  
        * *编辑器偏好* - 提供一个选项列表，其中选项将打开对应的 编辑器偏好 窗口，使用者可在其中修改虚幻编辑器偏好  
        * *项目设置* - 提供一个选项列表，其中选项将打开对应的 项目设置 窗口，使用者可在其中修改虚幻引擎项目的诸多设置  
        * *插件* - 打开插件浏览器选项卡  
    * #### 资产（Asset）
        * *在内容浏览器中找到* - 在 内容浏览器 中找到并选择当前资源  
        * *引用查看器* - 启动引用查看器，显示选中资源的引用  
        * *大小图* - 显示一个交互图，展示此资源与其引用所有内容的大概大小  
        * *审计资源* - 打开资源音频UI，显示关于选中资源的信息  
    * #### 窗口（Window）
        * 工具栏 - 切换 工具栏 显示。
        * 视口 - 切换 视口 面板显示。
        * 图表 - 切换 图表 面板显示。
        * 细节 - 切换 细节 面板显示。
        * 控制板 - 切换 控制板 面板显示。  
        * 查找结果- 允许在材质图表中搜索项目。  
        * 统计数据 - 切换 统计数据 面板显示。  
        * 预览场景设置 - 调整 材质预览 视口选项。  
        * 参数默认项- 切换显示 材质 全局参数。  
        * 平台统计数据 - 切换显示逐平台 材质 开销。  
        * 统计数据 - 切换 材质 开销。
        * 着色器代码 - 切换显示所选平台的 材质 HLSL 代码。  
            * HLSL代码 - 切换显示 HLSL 代码。  
                * 桌面 - 切换显示诸多桌面渲染的 HLSL 代码。  
                    * DirectX SM5 - 切换显示 Windows SM5 的 HLSL 代码。  
                    * DirectX SM4 - 切换显示 Windows SM4 的 HLSL 代码。  
                    * Vulkan SM5 - 切换显示 Vulkan SM5 的 HLSL 代码。  
                    * Vulkan SM4 - 切换显示 Vulkan SM4 的 HLSL 代码。  
                    * OpenGL SM5 - 切换显示 OpenGL SM5 的 HLSL 代码。  
                    * OpenGL SM4 - 切换显示 OpenGL SM4 的 HLSL 代码。  
                * Android - 切换显示诸多 Android 渲染的 HLSL 代码。  
                    * Android GLES 3.1 - 切换显示 Android GLES 3.1 的 HLSL 代码。  
                    * Android GLES 2.0 - 切换显示 Android GLES 2.0 的 HLSL 代码。  
                    * Android Vulkan - 切换显示 Android Vulkan 的 HLSL 代码。  
                * iOS - 切换显示诸多 iOS 渲染的 HLSL 代码。  
                    * Metal SM5 - 切换显示 Metal SM5 的 HLSL 代码。  
        * 内容浏览器 - 在单独的窗口中呼出 内容浏览器。  
        * 开发者工具 - 在单独的窗口中呼出选中的 开发者工具。  
            * 蓝图调试器 - 在单独的窗口中呼出 蓝图调试器。  
            * 碰撞分析器 - 在单独的窗口中呼出 碰撞分析器。  
            * 调试工具 - 在单独的窗口中呼出 调试工具。  
            * 分析器数据显示器 - 在单独的窗口中打开 分析器数据显示器 选项卡。  
            * 消息日志 - 在单独的窗口中呼出 消息日志。  
            * 输出日志 - 在单独的窗口中呼出 输出日志。  
            * 可视记录器 - 在单独的窗口中呼出 可视记录器 工具。  
            * 类查看器 - 在单独的窗口中呼出 类查看器。  
            * 设备管理器 - 在单独的窗口中呼出 设备管理器。  
            * 设备描述 - 在单独的窗口中呼出 设备描述。  
            * 合并Actor - 在单独的窗口中呼出 合并Actor 工具。  
            * 会话前端 - 在单独的窗口中呼出 虚幻前端。  
            * 控件反射器 - 在单独的窗口中呼出 控件反射器。  
        * 在蓝图中查找 - 在所有蓝图中查找对函数、事件和变量的引用。  
        * GameplayCue编辑器 - 在单独的窗口中打开 Gameplay Cue 编辑器选项卡。  
        * 项目Launcher - 项目Launcher 提供打包、部署和启动项目的高级工作流。  
        * 本地化控制板 - 打开此项目的 本地化控制板。  
        * 重设布局 - 将布局重设为默认。保存变更并创建设置备份后需要重新启动编辑器。  
        * 保存布局 - 将面板的当前布局保存为新默认布局。  
        * 启用全屏 - 启用应用程序的全屏模式，延展到整个显示器。  
    * #### 帮助（Help）
        * 浏览材质编辑器文档 - 打开一个浏览器窗口并导航到此工具相关的文档  
        * 支持 - 打开浏览器窗口访问虚幻引擎开发者网络（UDN）论坛页面，您可在此处询问关于虚幻引擎的问题  
        * 论坛 - 前往虚幻引擎论坛查看公告，并与其他开发者展开讨论
        * 答疑中心 - 前往答疑中心提出问题、搜索已有答案，并和其他UE4开发者分享知识  
        * Wiki - 前往虚幻引擎Wiki页面查看社区创建的资源，或创建您自己的资源  
        * 访问UnrealEngine.com - 导航到UnrealEngine.com，了解更多虚幻引擎技术  
        * 制作人员列表 - 显示应用程序的制作人员列表
        * 关于虚幻编辑器 - 显示应用程序的制作人员列表、版权信息和版本信息  
* ## 工具栏

图标|描述|
:---:|:---:|
![](https://docs.unrealengine.com/4.27/Images/RenderingAndGraphics/Materials/Editor/Interface/Common_Toolbar_Save.webp)|保存当前资源|
* 1
 