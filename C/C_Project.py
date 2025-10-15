import os

# 目录列表
directories = [
	'build',
    'cmake',
	'include',
	'lib',
	'test',
]

# 遍历列表, 创建目录
for dir_name in directories:
    print(f"正在创建目录: {dir_name}")
    
    os.makedirs(dir_name, exist_ok=True)
    
    print(f"目录 '{dir_name}' 创建成功")

print("\n项目目录结构已生成!")

