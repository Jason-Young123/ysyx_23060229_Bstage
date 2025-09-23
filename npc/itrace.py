from collections import defaultdict
 
def count_numbers_in_log(log_file_path, output_file_path):
    # 创建一个默认字典来存储数字及其出现次数
    number_counts = defaultdict(int)
    
    # 打开日志文件进行读取
    with open(log_file_path, 'r') as file:
        # 逐行读取文件内容
        for line in file:
            # 去除每行末尾的换行符，并将字符串转换为十六进制整数（假设日志中的数字是十六进制表示的）
            number = int(line.strip(), 16)
            # 增加该数字的出现次数
            number_counts[number] += 1
    
    # 将字典转换为按数字大小升序排列的列表
    sorted_number_counts = sorted(number_counts.items())
    
    # 打开输出文件进行写入
    with open(output_file_path, 'w') as output_file:
        # 写入结果到文件
        for number, count in sorted_number_counts:
            # 将数字转换回十六进制字符串（不带0x前缀），并确保字符串长度为8，不足部分用0填充
            hex_number = format(number, '08x')  # 去掉前缀'0x'
            output_file.write(f"{hex_number}:{count}\n")
 
# 指定日志文件的路径和输出文件的路径
log_file_path = './itrace.log'
output_file_path = 'result.txt'
# 调用函数来统计数字出现的次数并写入结果文件
count_numbers_in_log(log_file_path, output_file_path)
