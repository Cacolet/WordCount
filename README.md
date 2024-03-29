# 现代软件工程实践

WordCount(C语言)

**工具**：git、github或者Gitee、以及编译环境

**C语言环境**：我用的是codeblock，其他的没试过

## 安装git、以及简单的使用

[点我](https://blog.csdn.net/weixin_44950987/article/details/102619708?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522162047385316780271560977%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=162047385316780271560977&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-102619708.first_rank_v2_pc_rank_v29&utm_term=%E5%AE%89%E8%A3%85git&spm=1018.2226.3001.4187)

## 拉取别人仓库的项目

1.fork本仓库

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDQ3NTUxOTM0MA==620475519340)

2.clone到本地

```
git clone 这儿跟的是你fork过后仓库的地址
```

一般Code下的地址是是一个所示https://github.com/...

所以我们应该这样写

```
git clone https://github.com/...
```

但是这样clone的速度太慢，因为github的服务器在国外所以访问的就慢，这是加一个国内的镜像就比较快了

```
git clone https://github.com.cnpmjs.org/...
```

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDQ3NTY1MTUyNg==620475651526)

## 运行项目

1.win+r打开cmd

2.进入项目所在的文件夹，以testA为例，运行可执行文件WordCount：

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDQ4MDkyNDE0MA==620480924140)

## **下面才是这次实践需要自己做的**

### 远程创建一个仓库WordCount(因实验给的是github所以我用Gitee演示)

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDQ3NzIyODM3NQ==620477228375)

### 本地创建一个仓库并初始化

可以用图形界面(鼠标右击创建一个文件夹WordCount)，也可以使用git的shell指令创建

```
mkdir WordCount  # 创建本地项目
cd WordCount  # 进入本地项目
git init  # 初始化
```

现在就可以写自己的内容

写完后提交

```
git add 文件名  # 提交到缓存区
git add *  # 提交当前文件夹下的所有文件
```

然后提交到本地仓库

```
git commit -m "这里是提交信息"
```

然后就是提交到远程仓库 先增加关联仓库信息

```
git remote -v  # 查看当前关联的仓库信息
git remote add origin 仓库地址  # 关联仓库
```

提交当前分支到远程仓库

```
git push -u origin master  # 第一次提交
git push  # 之后提交
```

下面为演示截图

已在本地项目word中的编辑好所需要提交的文件

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDQ3ODQ3ODA2Nw==620478478067)

到这儿就会喊你输账号密码，就是你码云注册的账号密码

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDQ4MDAwNDAwNw==620480004007)

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDUyNDMwMTYyMA==620524301620)这里就基本上完成了。最后看一下远程的仓库吧

![图片](http://img.cdn.sugarat.top/mdImg/MTYyMDUyNDM0MDIzOA==620524340238)