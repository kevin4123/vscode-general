import os

# Directory list
directories = [
	'build',
    'cmake',
	'include',
	'lib',
	'test',
]

# Traverse the list and create directories
for dir_name in directories:
    print(f"creating directory: {dir_name}")
    
    os.makedirs(dir_name, exist_ok=True)

    print(f"directory '{dir_name}' created successfully.")

print("\nProject directory structure has been generated!")
