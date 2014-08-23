Mixing-milk
===========

根据analysis，由于价格有范围（1~1000）程序可以改进为：以price为数组下标，将amount作为对应price数组中一个变量的数值，这样将所有price相同的amount加到一起，并实现了根据price排序，price从低到高开始检索，依次计算。

***不过这时应该注意，amount加和后数字可能会超过一个int的限制（amount<=2,000,000 M<=5,000 所以加和<=1 × 10^10）***
