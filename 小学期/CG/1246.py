#初始化两个长整形数组
from array import array
times_array=array("L",[0 for i in range(100000+1)])
times_array_last=array("L",[0 for i in range(100000+1)])
 
#模
mod=998244353
 
#输入
n=int(input())
S=int(input())
 
#设置迭代初始值
times_array[1]=1
 
for i in range(n):
	#开始统计之前先对上一轮迭代的结果做一个备份
	times_array_last[1]=times_array[1]
	times_array_last[2]=times_array[2]
	times_array_last[4]=times_array[4]
	times_array_last[6]=times_array[6]
	times_array_last[16]=times_array[16]
	times_array_last[26]=times_array[26]
	times_array_last[41]=times_array[41]
	times_array_last[42]=times_array[42]
	times_array_last[44]=times_array[44]
	times_array_last[46]=times_array[46]
	times_array_last[61]=times_array[61]
	times_array_last[62]=times_array[62]
	times_array_last[64]=times_array[64]
	times_array_last[66]=times_array[66]
	times_array_last[161]=times_array[161]
	times_array_last[162]=times_array[162]
	times_array_last[164]=times_array[164]
	times_array_last[166]=times_array[166]
	times_array_last[264]=times_array[264]
	times_array_last[416]=times_array[416]
	times_array_last[426]=times_array[426]
	times_array_last[446]=times_array[446]
	times_array_last[464]=times_array[464]
	times_array_last[616]=times_array[616]
	times_array_last[626]=times_array[626]
	times_array_last[641]=times_array[641]
	times_array_last[642]=times_array[642]
	times_array_last[644]=times_array[644]
	times_array_last[646]=times_array[646]
	times_array_last[664]=times_array[664]
	times_array_last[6166]=times_array[6166]
	times_array_last[1664]=times_array[1664]
	times_array_last[4641]=times_array[4641]
	times_array_last[4162]=times_array[4162]
	times_array_last[6446]=times_array[6446]
	times_array_last[6464]=times_array[6464]
	times_array_last[4161]=times_array[4161]
	times_array_last[2642]=times_array[2642]
	times_array_last[1626]=times_array[1626]
	times_array_last[6641]=times_array[6641]
	times_array_last[6426]=times_array[6426]
	times_array_last[4166]=times_array[4166]
	times_array_last[2641]=times_array[2641]
	times_array_last[6264]=times_array[6264]
	times_array_last[6416]=times_array[6416]
	times_array_last[4164]=times_array[4164]
	times_array_last[2644]=times_array[2644]
	times_array_last[1646]=times_array[1646]
	times_array_last[1616]=times_array[1616]
	times_array_last[4264]=times_array[4264]
	times_array_last[2646]=times_array[2646]
	times_array_last[4464]=times_array[4464]
	times_array_last[42646]=times_array[42646]
	times_array_last[62646]=times_array[62646]
	times_array_last[64161]=times_array[64161]
	times_array_last[62641]=times_array[62641]
	times_array_last[64166]=times_array[64166]
	times_array_last[64264]=times_array[64264]
	times_array_last[41646]=times_array[41646]
	times_array_last[16464]=times_array[16464]
	times_array_last[26464]=times_array[26464]
	times_array_last[46416]=times_array[46416]
	times_array_last[64164]=times_array[64164]
	times_array_last[62642]=times_array[62642]
	times_array_last[66416]=times_array[66416]
	times_array_last[41616]=times_array[41616]
	times_array_last[16264]=times_array[16264]
	times_array_last[26416]=times_array[26416]
	times_array_last[61664]=times_array[61664]
	times_array_last[64162]=times_array[64162]
	times_array_last[41664]=times_array[41664]
	times_array_last[26426]=times_array[26426]
	times_array_last[62644]=times_array[62644]
	times_array_last[16641]=times_array[16641]
	times_array_last[64464]=times_array[64464]
	times_array_last[64641]=times_array[64641]
	times_array_last[44641]=times_array[44641]
	times_array_last[26446]=times_array[26446]
	times_array_last[16166]=times_array[16166]
	times_array_last[41626]=times_array[41626]
 
 
 
 
 
 
 
	#记录1位数出现的次数
	times_array[1]=times_array_last[4]%mod
	times_array[2]=times_array_last[1]%mod
	times_array[4]=(times_array_last[2]+times_array_last[6])%mod
	times_array[6]=(times_array_last[4]+times_array_last[6])%mod
 
	#记录两位数出现的次数
	times_array[16]=times_array_last[4]%mod
	times_array[26]=times_array_last[16]%mod
	times_array[41]=times_array_last[64]%mod
	times_array[42]=times_array_last[61]%mod
	times_array[44]=times_array_last[62]%mod
	times_array[46]=(times_array_last[26]+times_array_last[66])%mod
	times_array[61]=times_array_last[44]%mod
	times_array[62]=times_array_last[41]%mod
	times_array[64]=(times_array_last[6]+times_array_last[42])%mod
	times_array[66]=times_array_last[46]%mod
 
	#记录三位数出现的次数
	times_array[161]=times_array_last[44]%mod
	times_array[162]=times_array_last[41]%mod
	times_array[164]=times_array_last[62]%mod
	times_array[166]=times_array_last[46]%mod
	times_array[264]=times_array_last[16]%mod
	times_array[416]=times_array_last[64]%mod
	times_array[426]=times_array_last[616]%mod
	times_array[446]=times_array_last[626]%mod
	times_array[464]=times_array_last[26]%mod
	times_array[616]=times_array_last[44]%mod
	times_array[626]=times_array_last[416]%mod
	times_array[641]=times_array_last[64]%mod
	times_array[642]=times_array_last[61]%mod
	times_array[644]=times_array_last[62]%mod
	times_array[646]=times_array_last[66]%mod
	times_array[664]=times_array_last[46]%mod
 
	#记录四位数出现的次数
	times_array[6166]=times_array_last[446]%mod
	times_array[1664]=times_array_last[46]%mod
	times_array[4641]=times_array_last[264]%mod
	times_array[4162]=times_array_last[641]%mod
	times_array[6446]=times_array_last[626]%mod
	times_array[6464]=times_array_last[66]%mod
	times_array[4161]=times_array_last[644]%mod
	times_array[2642]=times_array_last[161]%mod
	times_array[1626]=times_array_last[416]%mod
	times_array[6641]=times_array_last[464]%mod
	times_array[6426]=times_array_last[616]%mod
	times_array[4166]=times_array_last[646]%mod
	times_array[2641]=times_array_last[164]%mod
	times_array[6264]=times_array_last[416]%mod
	times_array[6416]=times_array_last[64]%mod
	times_array[4164]=times_array_last[642]%mod
	times_array[2644]=times_array_last[162]%mod
	times_array[1646]=times_array_last[426]%mod
	times_array[1616]=times_array_last[44]%mod
	times_array[4264]=times_array_last[616]%mod
	times_array[2646]=times_array_last[166]%mod
	times_array[4464]=times_array_last[626]%mod
 
	#记录五位数出现的次数
	times_array[42646]=times_array_last[6166]%mod
	times_array[62646]=times_array_last[4166]%mod
	times_array[64161]=times_array_last[644]%mod
	times_array[62641]=times_array_last[4164]%mod
	times_array[64166]=times_array_last[646]%mod
	times_array[64264]=times_array_last[616]%mod
	times_array[41646]=times_array_last[6426]%mod
	times_array[16464]=times_array_last[626]%mod
	times_array[26464]=times_array_last[166]%mod
	times_array[46416]=times_array_last[264]%mod
	times_array[64164]=times_array_last[642]%mod
	times_array[62642]=times_array_last[4161]%mod
	times_array[66416]=times_array_last[464]%mod
	times_array[41616]=times_array_last[644]%mod
	times_array[16264]=times_array_last[416]%mod
	times_array[26416]=times_array_last[164]%mod
	times_array[61664]=times_array_last[446]%mod
	times_array[64162]=times_array_last[641]%mod
	times_array[41664]=times_array_last[646]%mod
	times_array[26426]=times_array_last[1616]%mod
	times_array[62644]=times_array_last[4162]%mod
	times_array[16641]=times_array_last[464]%mod
	times_array[64464]=times_array_last[626]%mod
	times_array[64641]=times_array_last[664]%mod
	times_array[44641]=times_array_last[6264]%mod
	times_array[26446]=times_array_last[1626]%mod
	times_array[16166]=times_array_last[446]%mod
	times_array[41626]=times_array_last[6416]%mod
 
#输出结果
print(times_array[S])