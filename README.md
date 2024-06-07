Markdown,文本修饰语言，用特殊符号修饰正文效果<br>换行

## 标题修饰符\#

# 标题修饰符(一级标题)
## (二级标题)
### (三级标题)
#### (四级标题)
##### (五级标题)

## 正文内容
  输入正文内容，但是如果需要换行，用\<br\> 标签

## 修饰正文
  *一段测试文本*

  **一段测试文本**

  ***一段测试文本***

  ~~一段测试文本~~

  一段测试文本是`关键字`

## 分割线
	用\-\-\-来表示分割线
---
## 引用名人名言\>
> 一级引用
>> 二级引用
>>> 三级引用
>>>> 四级引用
>>>>> 五级引用
## 列表 
### 无序列表\*
* 二次元
  * 原神
    * 雷电将军
### 有序列表 1.
1. 大逃杀
   1. PUBG
   2. APEX
2. Moba
### 混合列表
1. 测试一级
   * 测试二级
   2. 测试三级

### 表格
名称|技能|排行
--|:--:|--:|
蝙蝠侠|有钱|32
蜘蛛侠|蛛丝|11
海王|游泳|15

### 代码片段
```c
	#include<stdio.h>
	int main()
	{
	printf("test");
	}
	return 0;
```
```cpp
	#include<iostream>
```
```python
	#import <os>
```
```bash
	echo "测试"
	pwd
	ps aux
	ls -l
```
### 超链接技术
[Github](https://github.com "github")
### 插入图片
![图片1](https://picture.gptkong.com/20240607/1947e2b0a813504a7da0286c7259d3fe88.jpg "悬停")

# 1.GitHub简介
## 查询
1. 检索词查询
2. 关键字查询
   * C++ awesome，去此标签类别中查询项目
   * python tutorial，查询资料，书籍，文档
   * socket sanple，查询对应技术的代码样本
## 探索
   **主页左上角三斜杠->explore** </br>
   1. Explore:新闻
   2. Topics:选择感兴趣的类别
   3. Trending:热门的
## GitHub三要素
### 仓库Repository：项目管理存储基本单位
   * 一个仓库中存储一个项目，一个用户可以拥有多个仓库，一般仓库分为public，private
   * 一个项目左边是用户名，右边是项目仓库，中包含源代码，可以通过单机code打包zip下载（翻墙）或者使用Git软件下载
   * 仓库内容
     * Code，资源存储，代码资源，二级制，项目管理脚本，许可证等等
     * issues，使用时遇到的bug或异常进行提交，等待反馈
     * README，使用markdown语言编写，工程自述文件，开发进度，版本更新，使用介绍等等
     * LICENSE，许可证 GPL2.0，3.0. Apahce2.0，Mit，这些许可证给使用者最大使用权限以及最少的限制
### Commit提交
   * 程序员在整个开发周期有大量的对代码资源的迭代和修改，都可以通过commit的方式进行记录，便于程序员回溯代码，即使这些代码被删除
   * 提交便于使用者观察整个工程的开发流程和设计流程
### Branch分支
![分支逻辑关系](https://picture.gptkong.com/20240607/20071a00f0a1204886802aa1d0f4b5d593.jpg "Branch")
   * 在仓库中可以包含多个分支，分支才是代码文件的第一存储单位，默认的仓库主分支为master/main 以前所有程序的主函数都叫master但是由于政治正确改为main
   * 不仅可以管理代码存储，便于多人协作开发
## Git软件
**分布式版本控制系统，仓库管理软件，使用git原理私人代码或企业代码**
![Git软件关系](https://picture.gptkong.com/20240607/2009f816eaf7d24a55aebf2934efa86ee9.jpg "Git")


# 2.Git
## 设备认证
1. 如何让网站的账户与设备绑定，后续完成代码的管理，上传下载（后续对仓库的操作，都要在仓库位置(master)
命令：
git init //创建本地仓库
git config --list //查看git的配置文件，左=右是键值对存储
git config --global user.email "邮箱" 添加邮箱的配置文件
git config --global user.name "用户名" 添加用户名的配置文件
ssh-keygen -t rsa -C "注册邮箱" //创建本地密文（包含协议机器代码，让网站相信这个机器）去对应的目录查找密文文件
rsa.pub文件 复制密文，粘贴 settings \-\>SSH key and GPG \-\>new ssh key \-\>粘贴
ssh -T git@github.com //测试关联是否成功，成功会打招呼
2. 为目标仓库起别名，定位目标仓库，后续上传
git remote add origin "ssh地址“ //为ssh仓库地址创建别名为origin（可自定义）
git remote remove origin //删除origin别名
## 本地设备与云端仓库的交互
![逻辑](https://picture.gptkong.com/20240607/2024dded0e3d0442d2947c5b63f95afed3.jpg "交互")
### 步骤
* 1.写完一个文件，使用git add 文件名添加文件到缓冲区
* 2.使用git commit -m”提交说明“ 提交到本地仓库
* 3.git push origin master
  * 如果上传的本地分支与云端默认分支一致，合并分支
  * 不一致，创建一个新分支
## 常用命令
* git add //添加内容
* git rm //删除本地文件并删除仓库数据
* git restore //恢复被删除（仓库存在）
* git clone ”https仓库地址“ //下载开源项目code资源

## 代码更新的依赖关系被破坏
**本地内容要比云端新，完成更新替换，但是如果直接修改云端内容，导致本地内容无法再次提交**
`解决`**：先拉取git pull云端内容 与本地内容合并或者操作，而后再次推即可**
git pull --rebase origin master
git rebase --skip "忽略本地内容，保留云端内容"
git debase --abort "忽略云端内容，保留本地内容"
git debase --continue ”合并本地和云端内容“
## 分支Branch
**关于分支的相关命令，创建分支、选择分支、合并分支等**
## Markdown语言
**github可以编写readme，文本修饰语言**
