### 结巴分词工具

- 精确模式：将句子精确的切开，适合文本分析
- 全模式：那句子中的词语和成语都扫描出来，但无法解决歧义
- 搜素引擎模式：在精确模式的基础上，对长词再次切分，适合用于搜索引擎分词
- 支持繁体
- 支持自定义字典
- MIT授权协议

>  jieba.cut方法：
>
>  接受两个输入参数: （1) 第一个参数为需要分词的字符串 （2）cut_all参数用来控制是否采用全模式
>
>  jieba.cut_for_search`方法: 
>
>  接受一个参数：需要分词的字符串,该方法适合用于搜索引擎构建倒排索引的分词，粒度比较细 注意：待分词的字符串可以是gbk字符串、utf-8字符串或者unicode

jieba.cut和jieba.cut_for_search返回的结构都是一个可迭代的generator，可以使用for循环来获得分词后得到的每一个词语(unicode)，也可以用list(jieba.cut(...))转化为list

输入：

```
#encoding=utf-8
import jieba

seg_list = jieba.cut("我来到北京清华大学", cut_all=True)
print "Full Mode:", "/ ".join(seg_list)  # 全模式

seg_list = jieba.cut("我来到北京清华大学", cut_all=False)
print "Default Mode:", "/ ".join(seg_list)  # 精确模式

seg_list = jieba.cut("他来到了网易杭研大厦")  # 默认是精确模式
print ", ".join(seg_list)

seg_list = jieba.cut_for_search("小明硕士毕业于中国科学院计算所，后在日本京都大学深造")  # 搜索引擎模式
print ", ".join(seg_list)
```

输出：

```
【全模式】: 我/ 来到/ 北京/ 清华/ 清华大学/ 华大/ 大学

【精确模式】: 我/ 来到/ 北京/ 清华大学

【新词识别】：他, 来到, 了, 网易, 杭研, 大厦    (此处，“杭研”并没有在词典中，但是也被Viterbi算法识别出来了)

【搜索引擎模式】： 小明, 硕士, 毕业, 于, 中国, 科学, 学院, 科学院, 中国科学院, 计算, 计算所, 后, 在, 日本, 京都, 大学, 日本京都大学, 深造
```

## 自定义词典补充

- 开发者可以指定自己自定义的词典，以便包含jieba词库里没有的词。虽然jieba有新词识别能力，但是自行添加新词可以保证更高的正确率

- 用法： `jieba.load_userdict(file_name)` # file_name为自定义词典的路径

- 词典格式和`dict.txt`一样，一个词占一行；每一行分三部分，一部分为词语，另一部分为词频，最后为词性（可省略），用空格隔开

- `userdict.txt`即补充词库示例

  ```
  极速模式 20
  北京清华大学 5
  李小福 2 nr
  创新办 3 i
  easy_install 3 eng
  好用 300
  韩玉赏鉴 3 nz
  八一双鹿 3 nz
  台中
  凱特琳 nz
  Edu Trust认证 2000
  ```

  用法示例

  ```
  #encoding=utf-8
  from __future__ import print_function, unicode_literals
  import sys
  sys.path.append("../")
  import jieba
  jieba.load_userdict("userdict.txt")
  import jieba.posseg as pseg
  
  jieba.add_word('石墨烯')
  jieba.add_word('凱特琳')
  jieba.del_word('自定义词')
  
  test_sent = (
  "李小福是创新办主任也是云计算方面的专家; 什么是八一双鹿\n"
  "例如我输入一个带“韩玉赏鉴”的标题，在自定义词库中也增加了此词为N类\n"
  "「台中」正確應該不會被切開。mac上可分出「石墨烯」；此時又可以分出來凱特琳了。"
  )
  words = jieba.cut(test_sent)
  print('/'.join(words))
  
  print("="*40)
  
  result = pseg.cut(test_sent)
  
  for w in result:
      print(w.word, "/", w.flag, ", ", end=' ')
  
  print("\n" + "="*40)
  
  terms = jieba.cut('easy_install is great')
  print('/'.join(terms))
  terms = jieba.cut('python 的正则表达式是好用的')
  print('/'.join(terms))
  
  print("="*40)
  # test frequency tune
  testlist = [
  ('今天天气不错', ('今天', '天气')),
  ('如果放到post中将出错。', ('中', '将')),
  ('我们中出了一个叛徒', ('中', '出')),
  ]
  
  for sent, seg in testlist:
      print('/'.join(jieba.cut(sent, HMM=False)))
      word = ''.join(seg)
      print('%s Before: %s, After: %s' % (word, jieba.get_FREQ(word), jieba.suggest_freq(seg, True)))
      print('/'.join(jieba.cut(sent, HMM=False)))
  print("-"*40)
  ```

  ### 停词表

  中文常用[停用词](https://so.csdn.net/so/search?q=停用词&spm=1001.2101.3001.7020)表（哈工大停用词表、百度停用词表等：https://github.com/goto456/stopwords）

  - 首先我们需要设置好需要分析的文本文件，使用的停词表（可以自定义设置），以及保留最终结果集的文件
  - 接下来是相关的代码：

  ```
  # 停用词表 []   停用词的标准格式应该是一个词一行在txt中展示.如果一行中有多词汇,可以采用本文方法转换成标准格式
  # 文本集 []
  # 处理后文本本 []
  stop = []
  standard_stop = []
  text = []
  after_text = []
  file_stop = r'D:\pythonProject\自定义停词表.txt'  # 停用词表
  file_text = r'D:\pythonProject\文本集.txt'  # 要处理的文本集合
  with open(file_stop, 'r', encoding='utf-8-sig') as f:
      lines = f.readlines()  # lines是list类型
      for line in lines:
          lline = line.strip()  # line 是str类型,strip 去掉\n换行符
          stop.append(lline)  # 将stop 是列表形式
  
  # stop 的元素是一行一行的 句子,需要进行转化为一个词一行,即下面:
  for i in range(0, len(stop)):
      for word in stop[i].split():
          standard_stop.append(word)
  # print(standard_stop)
  
  # 读取文本集,
  with open(file_text, 'r', encoding='utf-8-sig') as f:
      lines = f.readlines()
      print(lines)
      for line in lines:
          lline = line.split()
          for i in lline:
              if i not in standard_stop:
                  after_text.append(i)
  print(after_text)
  
  # 将结果保存在txt中
  with open(r'D:\pythonProject\结果集.txt', 'w+') as f:
      for i in after_text:
        f.write(i)
  
  ```

  输出结果：

  ![image-20230127123027044](D:\blog\source\_posts\结巴分词工具\image-20230127123027044.png)

  ---

  

  ![image-20230127122932767](D:\blog\source\_posts\结巴分词工具\image-20230127122932767.png)
