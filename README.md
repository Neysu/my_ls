# my_ls
My Own version of ls 

it works with argc/argv

	./my_ls (no args)
		will read the working dir will not give any files/dir starting with a .

	./my_ls folder1 folder2
		will read the given dir will not give any files/dir in the working dir and starting with a .

	./my_ls -args
		will read the working dirs with specified args the args that i want supported will be
			-a read every files/dirs even starting with a 
			-A read every files/dirs exept for '.' and ".."
			-d only gives the name of the specified folder

			maybe

			-l gives the permission, size, author, latest modification and name. 

